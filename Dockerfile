# Image de base : Node.js version 16 sur Alpine Linux (très légère)
FROM node:16-alpine

RUN apk add --no-cache git openssh-client
# Définit le répertoire de travail dans le conteneur
WORKDIR /app

# Copie seulement package.json d'abord (optimisation du cache Docker)
COPY package.json .

# Installation des dépendances npm
# Cette étape est mise en cache si package.json n'a pas changé
RUN npm install

# Copie le reste du code source
# Cette étape ne sera refaite que si le code change
COPY . .

# Indique que l'application écoute sur le port 3000
# (documentation, n'ouvre pas réellement le port)
EXPOSE 3000

# Commande par défaut à exécuter au démarrage du conteneur
CMD ["npm", "start"]