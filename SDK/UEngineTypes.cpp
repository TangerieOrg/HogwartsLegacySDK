#include "UEngineTypes.hpp"
#include "UObject.hpp"
UEngineTypes* UEngineTypes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EngineTypes");
    return (UEngineTypes*)res;
}
