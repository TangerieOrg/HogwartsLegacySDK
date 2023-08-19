#pragma once
#include <cstdint>
#include "UGizmoBaseTransformSource.hpp"
class UTransformProxy;
#pragma pack(push, 1)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource {
public:
    UTransformProxy* Proxy; // 0x48
    static UGizmoTransformProxyTransformSource* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
