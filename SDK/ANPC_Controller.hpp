#pragma once
#include <cstdint>
#include "ASocialAIController.hpp"
class UCognitionComponent;
class UBlackboardComponent;
#pragma pack(push, 1)
class ANPC_Controller : public ASocialAIController {
public:
    UCognitionComponent* CognitionComponent; // 0x458
    static ANPC_Controller* StaticClass();
    UBlackboardComponent* GetBlackboard();
}; // Size: 0x460
#pragma pack(pop)
