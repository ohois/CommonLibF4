#pragma once

#include "RE/Bethesda/BSFixedString.h"
#include "RE/Bethesda/BSTSingleton.h"
#include "RE/Bethesda/TESForms.h"

namespace RE
{
	class BGSDefaultObjectManager :
		public TESForm,										  // 00
		public BSTSingletonImplicit<BGSDefaultObjectManager>  // 20
	{
	public:
		static constexpr auto RTTI{ RTTI_BGSDefaultObjectManager };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kDOBJ };

		[[nodiscard]] static BGSDefaultObjectManager* GetSingleton()
		{
			using func_t = decltype(&BGSDefaultObjectManager::GetSingleton);
			REL::Relocation<func_t> func{ REL::ID(484974) };
			return func();
		}

		// members
		TESForm* objectArray[394];	// 020
		bool objectInitArray[394];	// C70
	};
	static_assert(sizeof(BGSDefaultObjectManager) == 0xE00);

	class BGSDefaultObject :
		public TESForm	// 00
	{
	public:
		static constexpr auto RTTI{ RTTI_BGSDefaultObject };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kDFOB };

		// members
		TESForm* form;				 // 20
		std::int8_t type;			 // 28
		BSFixedString formEditorID;	 // 30
	};
	static_assert(sizeof(BGSDefaultObject) == 0x38);
}
