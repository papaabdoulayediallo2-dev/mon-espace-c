@echo off


:: 1. Verifie si un dossier existe sinon le cree
if not exist "destination" (
    echo Le dossier n'existait pas, creation en cours...
    mkdir "destination"
) else (
    echo Le dossier "destination" existe deja
)
:: Copie des fichiers
:: /E : Copie les répertoires et sous-répertoires, y compris les vides
:: /Y : Supprime la demande de confirmation pour remplacer un fichier existant
:: 2. Copie des fichiers
xcopy "source\*" "destination\" /E /Y


pause
