#include <iostream>

int main() {
    // Commande PowerShell pour obtenir les menaces détectées par Windows Defender
    const char* command = "powershell.exe Get-MpThreatDetection";

    // Exécuter la commande
    std::cout << "Exécution de la commande : " << command << std::endl;
    int result = system(command);

    // Vérifier le résultat
    if (result == 0) {
        std::cout << "Commande exécutée avec succès." << std::endl;
    } else {
        std::cerr << "Erreur lors de l'exécution de la commande." << std::endl;
    }

    return 0;
}
