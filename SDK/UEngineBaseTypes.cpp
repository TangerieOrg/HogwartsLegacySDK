#include "UEngineBaseTypes.hpp"
#include "UObject.hpp"
UEngineBaseTypes* UEngineBaseTypes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EngineBaseTypes");
    return (UEngineBaseTypes*)res;
}
