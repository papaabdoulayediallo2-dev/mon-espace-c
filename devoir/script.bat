@echo off
:menu
cls
echo ===============================
echo       GESTION UTILISATEURS
echo ===============================
echo 1. Ajouter un utilisateur
echo 2. Afficher la liste des utilisateurs
echo 3. Quitter
echo ===============================
set /p choix="Choisissez une option (1-3) : "

if "%choix%"=="1" goto ajouter
if "%choix%"=="2" goto afficher
if "%choix%"=="3" goto quitter
goto menu

:ajouter
set /p nom="Entrez le nom du nouvel utilisateur : "
net user %nom% /add >nul 2>&1
if %errorlevel% equ 0 (
    echo L'utilisateur %nom% a ete ajoute avec succes.
) else (
    echo Erreur : Verifiez que vous lancez ce script en tant qu'Administrateur.
)
pause
goto menu

:afficher
echo.
echo Liste des comptes utilisateurs locaux :
echo ---------------------------------------
net user | findstr /v "commande complet"
echo ---------------------------------------
pause
goto menu

:quitter
echo Au revoir !
exit
