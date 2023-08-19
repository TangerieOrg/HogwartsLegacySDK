#pragma once
#include <cstdint>
#include "FInputContextWithType.hpp"
#include "FInputFilter.hpp"
#include "UGameLogicComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UContextFilterComponent : public UGameLogicComponent {
public:
    TArray<FName> StartingContexts; // 0xd0
    char pad_e0[0x60];
    static UContextFilterComponent* StaticClass();
    static void SetContextOnActor(AActor* InActor, FInputContextWithType Context, bool bFlag);
    void SetContext(FInputContextWithType Context, bool bFlag);
    void RemoveFilter(FInputFilter& InFilter);
    static bool GetContextOnActor(AActor* InActor, FInputContextWithType Context);
    bool GetContext(FInputContextWithType Context);
    static bool EvaluateFilterOnActor(AActor* InActor, FInputFilter InputFilter);
    bool EvaluateFilter(FInputFilter& InFilter);
    static void ClearContextOnActor(AActor* InActor, FInputContextWithType Context);
    void ClearContext(FInputContextWithType Context);
    void AddFilter(FInputFilter& InFilter);
}; // Size: 0x140
#pragma pack(pop)
