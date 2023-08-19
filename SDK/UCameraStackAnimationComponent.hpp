#pragma once
#include <cstdint>
#include "FCameraStackAnimationRequest.hpp"
#include "UActorComponent.hpp"
class UObject;
#pragma pack(push, 1)
class UCameraStackAnimationComponent : public UActorComponent {
public:
    FCameraStackAnimationRequest CurrentRequest; // 0xc8
    FCameraStackAnimationRequest LastRequest; // 0xe8
    char pad_108[0x8];
    static UCameraStackAnimationComponent* StaticClass();
    void PlayAnimation(FCameraStackAnimationRequest& InAnimationRequest, UObject* InRequester);
    void EndAnimation(UObject* InRequester);
}; // Size: 0x110
#pragma pack(pop)
