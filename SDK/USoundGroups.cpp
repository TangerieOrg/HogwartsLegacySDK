#include "FSoundGroup.hpp"
#include "UObject.hpp"
#include "USoundGroups.hpp"
USoundGroups* USoundGroups::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundGroups");
    return (USoundGroups*)res;
}
