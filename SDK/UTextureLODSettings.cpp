#include "FTextureLODGroup.hpp"
#include "FTextureOverride.hpp"
#include "UObject.hpp"
#include "UTextureLODSettings.hpp"
UTextureLODSettings* UTextureLODSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextureLODSettings");
    return (UTextureLODSettings*)res;
}
