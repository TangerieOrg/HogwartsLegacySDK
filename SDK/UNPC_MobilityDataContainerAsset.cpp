#include "FNPC_MobilityDataContainer.hpp"
#include "UDataAsset.hpp"
#include "UNPC_MobilityDataContainerAsset.hpp"
UNPC_MobilityDataContainerAsset* UNPC_MobilityDataContainerAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_MobilityDataContainerAsset");
    return (UNPC_MobilityDataContainerAsset*)res;
}
