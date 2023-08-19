#pragma once
#include <cstdint>
#include "EAkCallbackType.hpp"
#include "ESfxOcclusion.hpp"
#include "UMultiFX2_Filtered.hpp"
class UAkAudioEvent;
class UAkCallbackInfo;
#pragma pack(push, 1)
class UMultiFX2_Sfx : public UMultiFX2_Filtered {
public:
    char pad_68[0x10];
    UAkAudioEvent* SFX; // 0x78
    bool bPlayAtLocation; // 0x80
    bool bIgnoreDeactivate; // 0x81
    bool bStopWhenTargetDestroyed; // 0x82
    bool bUseExistingAKComponent; // 0x83
    bool bNoOcclusionOnPlayerTarget; // 0x84
    bool bNoOcclusionOnPlayerInstigator; // 0x85
    ESfxOcclusion Occlusion; // 0x86
    bool bUseMotionListener; // 0x87
    bool bUsePlayerOrientatedMotionListener; // 0x88
    char pad_89[0x7];
    static UMultiFX2_Sfx* StaticClass();
    void OnAkPostEventFunc(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
}; // Size: 0x90
#pragma pack(pop)
