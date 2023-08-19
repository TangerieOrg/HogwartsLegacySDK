#include "UBillboardComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTexture2D.hpp"
UBillboardComponent* UBillboardComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BillboardComponent");
    return (UBillboardComponent*)res;
}
void UBillboardComponent::SetSpriteAndUV(UTexture2D* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BillboardComponent.SetSpriteAndUV"));
    struct Params_SetSpriteAndUV {
        UTexture2D* NewSprite; // 0x0
        int32_t NewU; // 0x8
        int32_t NewUL; // 0xc
        int32_t NewV; // 0x10
        int32_t NewVL; // 0x14
    }; // Size: 0x18
    Params_SetSpriteAndUV params{};
    params.NewSprite = (UTexture2D*)NewSprite;
    params.NewU = (int32_t)NewU;
    params.NewUL = (int32_t)NewUL;
    params.NewV = (int32_t)NewV;
    params.NewVL = (int32_t)NewVL;
    ProcessEvent(func, &params);
}
void UBillboardComponent::SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BillboardComponent.SetUV"));
    struct Params_SetUV {
        int32_t NewU; // 0x0
        int32_t NewUL; // 0x4
        int32_t NewV; // 0x8
        int32_t NewVL; // 0xc
    }; // Size: 0x10
    Params_SetUV params{};
    params.NewU = (int32_t)NewU;
    params.NewUL = (int32_t)NewUL;
    params.NewV = (int32_t)NewV;
    params.NewVL = (int32_t)NewVL;
    ProcessEvent(func, &params);
}
void UBillboardComponent::SetSprite(UTexture2D* NewSprite) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BillboardComponent.SetSprite"));
    struct Params_SetSprite {
        UTexture2D* NewSprite; // 0x0
    }; // Size: 0x8
    Params_SetSprite params{};
    params.NewSprite = (UTexture2D*)NewSprite;
    ProcessEvent(func, &params);
}
