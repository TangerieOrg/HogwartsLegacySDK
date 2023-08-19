#include "UDeveloperSettings.hpp"
#include "UGarbageCollectionSettings.hpp"
UGarbageCollectionSettings* UGarbageCollectionSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GarbageCollectionSettings");
    return (UGarbageCollectionSettings*)res;
}
