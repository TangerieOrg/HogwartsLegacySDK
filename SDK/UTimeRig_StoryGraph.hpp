#pragma once
#include <cstdint>
#include "UObject.hpp"
class UTimeRig_StoryGraphNode;
class UTimeRig_StoryGraphEdge;
#pragma pack(push, 1)
class UTimeRig_StoryGraph : public UObject {
public:
    FString Name; // 0x28
    TArray<UTimeRig_StoryGraphNode*> RootNodes; // 0x38
    TArray<UTimeRig_StoryGraphNode*> AllNodes; // 0x48
    TArray<UTimeRig_StoryGraphEdge*> AllEdges; // 0x58
    bool bEdgeEnabled; // 0x68
    bool bPersistent; // 0x69
    char pad_6a[0x6];
    TArray<void*> StageLevels; // 0x70
    static UTimeRig_StoryGraph* StaticClass();
    void Print(bool ToConsole, bool ToScreen);
    void GetNodesByLevel(int32_t Level, TArray<UTimeRig_StoryGraphNode*>& Nodes);
    int32_t GetLevelNum();
}; // Size: 0x80
#pragma pack(pop)
