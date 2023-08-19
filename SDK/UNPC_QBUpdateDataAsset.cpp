#include "UDataAsset.hpp"
#include "UNPC_QBUpdateDataAsset.hpp"
UNPC_QBUpdateDataAsset* UNPC_QBUpdateDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_QBUpdateDataAsset");
    return (UNPC_QBUpdateDataAsset*)res;
}
