#pragma once
#include <cstdint>
#include "FAnimationTrack.hpp"
#include "USceneRigObjectActionState.hpp"
class USplineComponent;
class UAnimationComponent;
class UAnimSequence;
class AActor;
class UAble_AnimInstance;
class UCustomizableCharacterComponent;
#pragma pack(push, 1)
class USceneActionState_StitchingEnter : public USceneRigObjectActionState {
public:
    char pad_70[0x20];
    FAnimationTrack AnimationTrack; // 0x90
    char pad_260[0x8];
    USplineComponent* Path; // 0x268
    char pad_270[0x488];
    UAnimationComponent* AnimationComponent; // 0x6f8
    TArray<UAnimSequence*> AnimSequences; // 0x700
    AActor* Actor; // 0x710
    UAnimSequence* EntryAnimSequence; // 0x718
    UAnimSequence* CurrAnimSequence; // 0x720
    UAnimSequence* PrevAnimSequence; // 0x728
    UAble_AnimInstance* AnimInstance; // 0x730
    UCustomizableCharacterComponent* CCC; // 0x738
    bool ShouldBeRegistered; // 0x740
    char pad_741[0x3f];
    static USceneActionState_StitchingEnter* StaticClass();
}; // Size: 0x780
#pragma pack(pop)
