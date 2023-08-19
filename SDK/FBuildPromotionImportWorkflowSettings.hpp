#pragma once
#include <cstdint>
#include "FEditorImportWorkflowDefinition.hpp"
#pragma pack(push, 1)
struct FBuildPromotionImportWorkflowSettings {
    FEditorImportWorkflowDefinition Diffuse; // 0x0
    FEditorImportWorkflowDefinition Normal; // 0x20
    FEditorImportWorkflowDefinition StaticMesh; // 0x40
    FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60
    FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80
    FEditorImportWorkflowDefinition MorphMesh; // 0xa0
    FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0
    FEditorImportWorkflowDefinition Animation; // 0xe0
    FEditorImportWorkflowDefinition Sound; // 0x100
    FEditorImportWorkflowDefinition SurroundSound; // 0x120
    TArray<FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140
}; // Size: 0x150
#pragma pack(pop)
