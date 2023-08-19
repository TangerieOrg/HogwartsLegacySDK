#pragma once
#include <cstdint>
#include "EAcknowledgementRuleType.hpp"
#include "EAcknowledgementSpeakerType.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UAcknowledgementEnumsBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UAcknowledgementEnumsBlueprintLibrary* StaticClass();
    static FName GetEAcknowledgementSpeakerTypeNameFromID(EAcknowledgementSpeakerType inID);
    static EAcknowledgementSpeakerType GetEAcknowledgementSpeakerTypeFromName(FName& strName);
    static FName GetEAcknowledgementRuleTypeNameFromID(EAcknowledgementRuleType inID);
    static EAcknowledgementRuleType GetEAcknowledgementRuleTypeFromName(FName& strName);
}; // Size: 0x28
#pragma pack(pop)
