#pragma once
#include <cstdint>
#include "EInfirmaryPriority.hpp"
#include "FInfirmaryStudentStatus.hpp"
#include "UObject.hpp"
struct FTimeEvent;
#pragma pack(push, 1)
class UInfirmaryManager : public UObject {
public:
    char pad_28[0xc0];
    TArray<FInfirmaryStudentStatus> StudentList; // 0xe8
    static UInfirmaryManager* StaticClass();
    void OnSaveGameLoaded();
    void OnNewGame();
    void OnGameToBeSaved();
    bool IsStudentIn(FString UniqueId);
    void HourlyCheck(FTimeEvent& InTimeEvent);
    void GetStudents(TArray<FString>& OutStudents);
    static UInfirmaryManager* Get();
    void AddStudent(FString UniqueId, int64_t SecondsInTheInfirmary, EInfirmaryPriority Priority);
}; // Size: 0xf8
#pragma pack(pop)
