#include "UDataAsset.hpp"
#include "UTextureFilterDataAsset.hpp"
UTextureFilterDataAsset* UTextureFilterDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.TextureFilterDataAsset");
    return (UTextureFilterDataAsset*)res;
}
