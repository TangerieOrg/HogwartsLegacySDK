#include "UDataAsset.hpp"
#include "UDataTable.hpp"
#include "UPT_Progression.hpp"
#include "UPT_Tree.hpp"
UPT_Progression* UPT_Progression::StaticClass() {
    static auto res = find_uobject("Class /Script/Progression.PT_Progression");
    return (UPT_Progression*)res;
}
