#pragma once
#include <cstdint>
#include "EKnowledgeLevel.hpp"
#include "SocialCapitalStatusIDs.hpp"
#include "SocialSemanticIDs.hpp"
#pragma pack(push, 1)
struct FPeopleInformation {
    FName PersonName; // 0x0
    FName SubtypeID; // 0x8
    SocialSemanticIDs HouseID; // 0x10
    SocialCapitalStatusIDs SocialCap; // 0x11
    EKnowledgeLevel CurrentKnowledgeLevel; // 0x12
    char pad_13[0x1];
}; // Size: 0x14
#pragma pack(pop)
