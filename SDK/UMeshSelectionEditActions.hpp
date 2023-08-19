#pragma once
#include <cstdint>
#include "UMeshSelectionToolActionPropertySet.hpp"
#pragma pack(push, 1)
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet {
public:
    static UMeshSelectionEditActions* StaticClass();
    void Shrink();
    void SelectLargestComponentByTriCount();
    void SelectLargestComponentByArea();
    void SelectAll();
    void OptimizeSelection();
    void Invert();
    void Grow();
    void ExpandToConnected();
    void Clear();
}; // Size: 0x68
#pragma pack(pop)
