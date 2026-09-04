// Importation des modules nécessaires
const express = require('express');
const redis = require('redis');

// Création de l'application Express
const app = express();

// Configuration du client Redis
const client = redis.createClient({
    host: 'redis-server',  // Nom du conteneur Redis (résolution DNS Docker)
    port: 6379            // Port par défaut de Redis
});

// Route principale qui gère les visites
app.get('/', (req, res) => {
    // Récupération du compteur de visites depuis Redis
    client.get('visits', (err, visits) => {
        if (visits) {
            // Si le compteur existe, l'incrémenter
            client.set('visits', parseInt(visits) + 1);
            res.send(`Nombre de visites: ${visits}`);
        } else {
            // Première visite : initialiser le compteur à 1
            client.set('visits', 1);
            res.send('Première visite!');
        }
    });
});

// Démarrage du serveur sur le port 3000
app.listen(3000, () => {
    console.log('App listening on port 3000');
});