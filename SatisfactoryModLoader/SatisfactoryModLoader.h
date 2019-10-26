#pragma once
#include <tuple>
#include <string>
#include <iostream>
#include <filesystem>
#include <Windows.h>
#include <mod/ModHandler.h>
#include <mod/ZipHandler.h>
#include <Lib.h>
#include "Configs.h"

namespace SML {
	extern "C" const SML_API char smlVersion[]; // outside accessible SML version
	static const std::string modLoaderVersion = std::string(smlVersion); // SML's version
	SML_API extern const int targetVersion;

	extern Mod::ModHandler modHandler;
	extern Mod::ZipHandler zipHandler;

	void initializeConsole();
	void extractZips();
	void startSML();
	void readConfig();
	void cleanup();
}
