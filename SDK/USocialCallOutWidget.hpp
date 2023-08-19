#pragma once
#include <cstdint>
#include "FSocialCallout.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class USocialCallOutWidget : public UUserWidget {
public:
    static USocialCallOutWidget* StaticClass();
    void UpdateCallout(FSocialCallout SocialCallout);
    void ShowCallout();
    void RemoveCallout();
    void OnSynchronizeProperties();
}; // Size: 0x268
#pragma pack(pop)
