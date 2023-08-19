#pragma once
#include <cstdint>
#include "UListView.hpp"
class UObject;
#pragma pack(push, 1)
class UTreeView : public UListView {
public:
    char pad_368[0x58];
    static UTreeView* StaticClass();
    void SetItemExpansion(UObject* Item, bool bExpandItem);
    void ExpandAll();
    void CollapseAll();
}; // Size: 0x3c0
#pragma pack(pop)
