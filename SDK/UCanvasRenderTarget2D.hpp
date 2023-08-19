#pragma once
#include <cstdint>
#include "UTextureRenderTarget2D.hpp"
class UCanvas;
class UObject;
class UClass;
#pragma pack(push, 1)
class UCanvasRenderTarget2D : public UTextureRenderTarget2D {
public:
    char pad_1b0[0x10];
    bool bShouldClearRenderTargetOnReceiveUpdate; // 0x1c0
    char pad_1c1[0xf];
    static UCanvasRenderTarget2D* StaticClass();
    void UpdateResource();
    void ReceiveUpdate(UCanvas* Canvas, int32_t Width, int32_t Height);
    void GetSize(int32_t& Width, int32_t& Height);
    static UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(UObject* WorldContextObject, UClass* CanvasRenderTarget2DClass, int32_t Width, int32_t Height);
}; // Size: 0x1d0
#pragma pack(pop)
