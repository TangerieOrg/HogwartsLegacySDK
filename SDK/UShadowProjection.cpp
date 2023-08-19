#include "UAkAudioEvent.hpp"
#include "UAnimSequence.hpp"
#include "UDataAsset.hpp"
#include "UShadowProjection.hpp"
#include "USkeletalMesh.hpp"
UShadowProjection* UShadowProjection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ShadowProjection");
    return (UShadowProjection*)res;
}
