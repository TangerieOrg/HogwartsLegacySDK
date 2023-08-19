#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UPlayerTemplate : public UObject {
public:
    char pad_28[0x10];
    static UPlayerTemplate* StaticClass();
    void RemovePlayerTemplate();
    void ReloadPlayerTemplate(FName PlayerTemplateName);
    void PlayerTemplateLogObjInfo();
    void PlayerTemplateBuildCSVInfo();
    static UPlayerTemplate* Get();
}; // Size: 0x38
#pragma pack(pop)
