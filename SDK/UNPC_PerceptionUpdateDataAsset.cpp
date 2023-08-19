#include "UDataAsset.hpp"
#include "UNPC_PerceptionUpdateDataAsset.hpp"
UNPC_PerceptionUpdateDataAsset* UNPC_PerceptionUpdateDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_PerceptionUpdateDataAsset");
    return (UNPC_PerceptionUpdateDataAsset*)res;
}
