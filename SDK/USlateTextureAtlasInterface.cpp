#include "UInterface.hpp"
#include "USlateTextureAtlasInterface.hpp"
USlateTextureAtlasInterface* USlateTextureAtlasInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SlateTextureAtlasInterface");
    return (USlateTextureAtlasInterface*)res;
}
