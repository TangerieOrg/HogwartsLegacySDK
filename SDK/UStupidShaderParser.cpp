#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UStupidShaderParser.hpp"
UStupidShaderParser* UStupidShaderParser::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StupidShaderParser");
    return (UStupidShaderParser*)res;
}
void UStupidShaderParser::WriteCSV() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StupidShaderParser.WriteCSV"));
    struct Params_WriteCSV {
    }; // Size: 0x0
    Params_WriteCSV params{};
    ProcessEvent(func, &params);
}
void UStupidShaderParser::Import() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StupidShaderParser.Import"));
    struct Params_Import {
    }; // Size: 0x0
    Params_Import params{};
    ProcessEvent(func, &params);
}
