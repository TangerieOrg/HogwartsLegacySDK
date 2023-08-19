#include "UCanvas.hpp"
#include "UCanvasRenderTarget2D.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTextureRenderTarget2D.hpp"
UCanvasRenderTarget2D* UCanvasRenderTarget2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CanvasRenderTarget2D");
    return (UCanvasRenderTarget2D*)res;
}
void UCanvasRenderTarget2D::UpdateResource() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CanvasRenderTarget2D.UpdateResource"));
    struct Params_UpdateResource {
    }; // Size: 0x0
    Params_UpdateResource params{};
    ProcessEvent(func, &params);
}
void UCanvasRenderTarget2D::ReceiveUpdate(UCanvas* Canvas, int32_t Width, int32_t Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CanvasRenderTarget2D.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        UCanvas* Canvas; // 0x0
        int32_t Width; // 0x8
        int32_t Height; // 0xc
    }; // Size: 0x10
    Params_ReceiveUpdate params{};
    params.Canvas = (UCanvas*)Canvas;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    ProcessEvent(func, &params);
}
void UCanvasRenderTarget2D::GetSize(int32_t& Width, int32_t& Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CanvasRenderTarget2D.GetSize"));
    struct Params_GetSize {
        int32_t Width; // 0x0
        int32_t Height; // 0x4
    }; // Size: 0x8
    Params_GetSize params{};
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    ProcessEvent(func, &params);
    Width = params.Width;
    Height = params.Height;
}
UCanvasRenderTarget2D* UCanvasRenderTarget2D::CreateCanvasRenderTarget2D(UObject* WorldContextObject, UClass* CanvasRenderTarget2DClass, int32_t Width, int32_t Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CanvasRenderTarget2D.CreateCanvasRenderTarget2D"));
    struct Params_CreateCanvasRenderTarget2D {
        UObject* WorldContextObject; // 0x0
        UClass* CanvasRenderTarget2DClass; // 0x8
        int32_t Width; // 0x10
        int32_t Height; // 0x14
        UCanvasRenderTarget2D* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_CreateCanvasRenderTarget2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CanvasRenderTarget2DClass = (UClass*)CanvasRenderTarget2DClass;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCanvasRenderTarget2D*)params.ReturnValue;
}
