#include "FNPC_CrimeSceneSense.hpp"
#include "UDataAsset.hpp"
#include "UNPC_CrimeSceneSenseAsset.hpp"
UNPC_CrimeSceneSenseAsset* UNPC_CrimeSceneSenseAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_CrimeSceneSenseAsset");
    return (UNPC_CrimeSceneSenseAsset*)res;
}
