#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UUserWidget;
struct FVector2D;
#pragma pack(push, 1)
class UUI_BPI_Screen_C : public UInterface {
public:
    static UUI_BPI_Screen_C* StaticClass();
    void SetParent(UUserWidget* Parent);
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void InEditorPostConstruct();
    void Initialize();
}; // Size: 0x28
#pragma pack(pop)
