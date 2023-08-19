#include "UCleanNameToDisplayName.hpp"
#include "UDataAsset.hpp"
UCleanNameToDisplayName* UCleanNameToDisplayName::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CleanNameToDisplayName");
    return (UCleanNameToDisplayName*)res;
}
