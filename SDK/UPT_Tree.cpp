#include "UDataAsset.hpp"
#include "UPT_Tree.hpp"
UPT_Tree* UPT_Tree::StaticClass() {
    static auto res = find_uobject("Class /Script/Progression.PT_Tree");
    return (UPT_Tree*)res;
}
