#include "USoundNode.hpp"
#include "USoundNodeAssetReferencer.hpp"
USoundNodeAssetReferencer* USoundNodeAssetReferencer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeAssetReferencer");
    return (USoundNodeAssetReferencer*)res;
}
