#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FArtifactSettings {
    FString ArtifactName; // 0x0
    FString ClientId; // 0x10
    FString ClientSecret; // 0x20
    FString ProductID; // 0x30
    FString SandboxId; // 0x40
    FString DeploymentId; // 0x50
    FString EncryptionKey; // 0x60
}; // Size: 0x70
#pragma pack(pop)
