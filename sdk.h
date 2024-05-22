// Generated: 05/20/2024 7:14 PM
// Mono2SDK - https://github.com/Coopyy/Mono2Native

#pragma once
#include <cstdint>
#include "sdk/memory/mono.h"
#include "sdk/types.h"
#undef max
#undef min
#undef small
typedef uintptr_t unknown_type;
namespace SDK
{
	namespace SDG
	{
		namespace Unturned
		{
			class GlazierBase;
			class ItemAsset;
			class ItemGunAsset;
			class HumanClothes;
			class Player;
			class PlayerAnimator;
			class PlayerEquipment;
			class PlayerInventory;
			class PlayerLifeUpdated;
			class PlayerLife;
			class PlayerLook;
			class PlayerMovement;
			class PlayerQuests;
			class Provider;
			class SteamChannel;
			class SteamPlayer;
			class SteamPlayerID;
			class InputEx;
		}
	}
	namespace UnityEngine
	{
		class Camera;
		class Screen;
		class Resolution;
		class Cursor;
		class Vector3;
		class Quaternion;
		class Vector2;
		class Component;
		class GameObject;
		class Transform;
		class Input;
	}
	namespace SDG
	{
		namespace Unturned
		{
			enum class ELimb : Int32
			{
				LEFT_FOOT = 0,
				LEFT_LEG = 1,
				RIGHT_FOOT = 2,
				RIGHT_LEG = 3,
				LEFT_HAND = 4,
				LEFT_ARM = 5,
				RIGHT_HAND = 6,
				RIGHT_ARM = 7,
				LEFT_BACK = 8,
				RIGHT_BACK = 9,
				LEFT_FRONT = 10,
				RIGHT_FRONT = 11,
				SPINE = 12,
				SKULL = 13,
			};
		}
	}
	namespace UnityEngine
	{
		enum class CursorLockMode : Int32
		{
			None = 0,
			Locked = 1,
			Confined = 2,
		};
		enum class KeyCode : Int32
		{
			None = 0,
			Backspace = 8,
			Delete = 127,
			Tab = 9,
			Clear = 12,
			Return = 13,
			Pause = 19,
			Escape = 27,
			Space = 32,
			Keypad0 = 256,
			Keypad1 = 257,
			Keypad2 = 258,
			Keypad3 = 259,
			Keypad4 = 260,
			Keypad5 = 261,
			Keypad6 = 262,
			Keypad7 = 263,
			Keypad8 = 264,
			Keypad9 = 265,
			KeypadPeriod = 266,
			KeypadDivide = 267,
			KeypadMultiply = 268,
			KeypadMinus = 269,
			KeypadPlus = 270,
			KeypadEnter = 271,
			KeypadEquals = 272,
			UpArrow = 273,
			DownArrow = 274,
			RightArrow = 275,
			LeftArrow = 276,
			Insert = 277,
			Home = 278,
			End = 279,
			PageUp = 280,
			PageDown = 281,
			F1 = 282,
			F2 = 283,
			F3 = 284,
			F4 = 285,
			F5 = 286,
			F6 = 287,
			F7 = 288,
			F8 = 289,
			F9 = 290,
			F10 = 291,
			F11 = 292,
			F12 = 293,
			F13 = 294,
			F14 = 295,
			F15 = 296,
			Alpha0 = 48,
			Alpha1 = 49,
			Alpha2 = 50,
			Alpha3 = 51,
			Alpha4 = 52,
			Alpha5 = 53,
			Alpha6 = 54,
			Alpha7 = 55,
			Alpha8 = 56,
			Alpha9 = 57,
			Exclaim = 33,
			DoubleQuote = 34,
			Hash = 35,
			Dollar = 36,
			Percent = 37,
			Ampersand = 38,
			Quote = 39,
			LeftParen = 40,
			RightParen = 41,
			Asterisk = 42,
			Plus = 43,
			Comma = 44,
			Minus = 45,
			Period = 46,
			Slash = 47,
			Colon = 58,
			Semicolon = 59,
			Less = 60,
			Equals = 61,
			Greater = 62,
			Question = 63,
			At = 64,
			LeftBracket = 91,
			Backslash = 92,
			RightBracket = 93,
			Caret = 94,
			Underscore = 95,
			BackQuote = 96,
			A = 97,
			B = 98,
			C = 99,
			D = 100,
			E = 101,
			F = 102,
			G = 103,
			H = 104,
			I = 105,
			J = 106,
			K = 107,
			L = 108,
			M = 109,
			N = 110,
			O = 111,
			P = 112,
			Q = 113,
			R = 114,
			S = 115,
			T = 116,
			U = 117,
			V = 118,
			W = 119,
			X = 120,
			Y = 121,
			Z = 122,
			LeftCurlyBracket = 123,
			Pipe = 124,
			RightCurlyBracket = 125,
			Tilde = 126,
			Numlock = 300,
			CapsLock = 301,
			ScrollLock = 302,
			RightShift = 303,
			LeftShift = 304,
			RightControl = 305,
			LeftControl = 306,
			RightAlt = 307,
			LeftAlt = 308,
			LeftMeta = 310,
			LeftCommand = 310,
			LeftApple = 310,
			LeftWindows = 311,
			RightMeta = 309,
			RightCommand = 309,
			RightApple = 309,
			RightWindows = 312,
			AltGr = 313,
			Help = 315,
			Print = 316,
			SysReq = 317,
			Break = 318,
			Menu = 319,
			Mouse0 = 323,
			Mouse1 = 324,
			Mouse2 = 325,
			Mouse3 = 326,
			Mouse4 = 327,
			Mouse5 = 328,
			Mouse6 = 329,
			JoystickButton0 = 330,
			JoystickButton1 = 331,
			JoystickButton2 = 332,
			JoystickButton3 = 333,
			JoystickButton4 = 334,
			JoystickButton5 = 335,
			JoystickButton6 = 336,
			JoystickButton7 = 337,
			JoystickButton8 = 338,
			JoystickButton9 = 339,
			JoystickButton10 = 340,
			JoystickButton11 = 341,
			JoystickButton12 = 342,
			JoystickButton13 = 343,
			JoystickButton14 = 344,
			JoystickButton15 = 345,
			JoystickButton16 = 346,
			JoystickButton17 = 347,
			JoystickButton18 = 348,
			JoystickButton19 = 349,
			Joystick1Button0 = 350,
			Joystick1Button1 = 351,
			Joystick1Button2 = 352,
			Joystick1Button3 = 353,
			Joystick1Button4 = 354,
			Joystick1Button5 = 355,
			Joystick1Button6 = 356,
			Joystick1Button7 = 357,
			Joystick1Button8 = 358,
			Joystick1Button9 = 359,
			Joystick1Button10 = 360,
			Joystick1Button11 = 361,
			Joystick1Button12 = 362,
			Joystick1Button13 = 363,
			Joystick1Button14 = 364,
			Joystick1Button15 = 365,
			Joystick1Button16 = 366,
			Joystick1Button17 = 367,
			Joystick1Button18 = 368,
			Joystick1Button19 = 369,
			Joystick2Button0 = 370,
			Joystick2Button1 = 371,
			Joystick2Button2 = 372,
			Joystick2Button3 = 373,
			Joystick2Button4 = 374,
			Joystick2Button5 = 375,
			Joystick2Button6 = 376,
			Joystick2Button7 = 377,
			Joystick2Button8 = 378,
			Joystick2Button9 = 379,
			Joystick2Button10 = 380,
			Joystick2Button11 = 381,
			Joystick2Button12 = 382,
			Joystick2Button13 = 383,
			Joystick2Button14 = 384,
			Joystick2Button15 = 385,
			Joystick2Button16 = 386,
			Joystick2Button17 = 387,
			Joystick2Button18 = 388,
			Joystick2Button19 = 389,
			Joystick3Button0 = 390,
			Joystick3Button1 = 391,
			Joystick3Button2 = 392,
			Joystick3Button3 = 393,
			Joystick3Button4 = 394,
			Joystick3Button5 = 395,
			Joystick3Button6 = 396,
			Joystick3Button7 = 397,
			Joystick3Button8 = 398,
			Joystick3Button9 = 399,
			Joystick3Button10 = 400,
			Joystick3Button11 = 401,
			Joystick3Button12 = 402,
			Joystick3Button13 = 403,
			Joystick3Button14 = 404,
			Joystick3Button15 = 405,
			Joystick3Button16 = 406,
			Joystick3Button17 = 407,
			Joystick3Button18 = 408,
			Joystick3Button19 = 409,
			Joystick4Button0 = 410,
			Joystick4Button1 = 411,
			Joystick4Button2 = 412,
			Joystick4Button3 = 413,
			Joystick4Button4 = 414,
			Joystick4Button5 = 415,
			Joystick4Button6 = 416,
			Joystick4Button7 = 417,
			Joystick4Button8 = 418,
			Joystick4Button9 = 419,
			Joystick4Button10 = 420,
			Joystick4Button11 = 421,
			Joystick4Button12 = 422,
			Joystick4Button13 = 423,
			Joystick4Button14 = 424,
			Joystick4Button15 = 425,
			Joystick4Button16 = 426,
			Joystick4Button17 = 427,
			Joystick4Button18 = 428,
			Joystick4Button19 = 429,
			Joystick5Button0 = 430,
			Joystick5Button1 = 431,
			Joystick5Button2 = 432,
			Joystick5Button3 = 433,
			Joystick5Button4 = 434,
			Joystick5Button5 = 435,
			Joystick5Button6 = 436,
			Joystick5Button7 = 437,
			Joystick5Button8 = 438,
			Joystick5Button9 = 439,
			Joystick5Button10 = 440,
			Joystick5Button11 = 441,
			Joystick5Button12 = 442,
			Joystick5Button13 = 443,
			Joystick5Button14 = 444,
			Joystick5Button15 = 445,
			Joystick5Button16 = 446,
			Joystick5Button17 = 447,
			Joystick5Button18 = 448,
			Joystick5Button19 = 449,
			Joystick6Button0 = 450,
			Joystick6Button1 = 451,
			Joystick6Button2 = 452,
			Joystick6Button3 = 453,
			Joystick6Button4 = 454,
			Joystick6Button5 = 455,
			Joystick6Button6 = 456,
			Joystick6Button7 = 457,
			Joystick6Button8 = 458,
			Joystick6Button9 = 459,
			Joystick6Button10 = 460,
			Joystick6Button11 = 461,
			Joystick6Button12 = 462,
			Joystick6Button13 = 463,
			Joystick6Button14 = 464,
			Joystick6Button15 = 465,
			Joystick6Button16 = 466,
			Joystick6Button17 = 467,
			Joystick6Button18 = 468,
			Joystick6Button19 = 469,
			Joystick7Button0 = 470,
			Joystick7Button1 = 471,
			Joystick7Button2 = 472,
			Joystick7Button3 = 473,
			Joystick7Button4 = 474,
			Joystick7Button5 = 475,
			Joystick7Button6 = 476,
			Joystick7Button7 = 477,
			Joystick7Button8 = 478,
			Joystick7Button9 = 479,
			Joystick7Button10 = 480,
			Joystick7Button11 = 481,
			Joystick7Button12 = 482,
			Joystick7Button13 = 483,
			Joystick7Button14 = 484,
			Joystick7Button15 = 485,
			Joystick7Button16 = 486,
			Joystick7Button17 = 487,
			Joystick7Button18 = 488,
			Joystick7Button19 = 489,
			Joystick8Button0 = 490,
			Joystick8Button1 = 491,
			Joystick8Button2 = 492,
			Joystick8Button3 = 493,
			Joystick8Button4 = 494,
			Joystick8Button5 = 495,
			Joystick8Button6 = 496,
			Joystick8Button7 = 497,
			Joystick8Button8 = 498,
			Joystick8Button9 = 499,
			Joystick8Button10 = 500,
			Joystick8Button11 = 501,
			Joystick8Button12 = 502,
			Joystick8Button13 = 503,
			Joystick8Button14 = 504,
			Joystick8Button15 = 505,
			Joystick8Button16 = 506,
			Joystick8Button17 = 507,
			Joystick8Button18 = 508,
			Joystick8Button19 = 509,
		};
	}
	namespace SDG
	{
		namespace Unturned
		{
			class GlazierBase
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static GlazierBase* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				unknown_type debugStringColor();                                                // UnityEngine.Color
				void debugStringColor_Set(unknown_type value);
				unknown_type debugBuilder();                                                    // System.Text.StringBuilder
				void debugBuilder_Set(unknown_type value);
				Int32 fps();                                                                    // System.Int32
				void fps_Set(Int32 value);
				Single lastFrame();                                                             // System.Single
				void lastFrame_Set(Single value);
				Int32 frames();                                                                 // System.Int32
				void frames_Set(Int32 value);
				unknown_type shouldShowTimeOverlay();                                           // SDG.Unturned.CommandLineFlag
				void shouldShowTimeOverlay_Set(unknown_type value);
				static unknown_type clScrollViewSensitivityMultiplier();                        // SDG.Unturned.CommandLineFloat
				static void clScrollViewSensitivityMultiplier_Set(unknown_type value);
				Boolean get_ShouldGameProcessInput();
				Boolean get_ShouldGameProcessKeyDown();
				void UpdateDebugStats();
				void UpdateDebugString();
				void OnEnable();
				unknown_type get_debugStringColor();
				void set_debugStringColor(unknown_type value);
				String* get_debugString();
				static Single get_ScrollViewSensitivityMultiplier();
			};
			class ItemAsset
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static ItemAsset* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static unknown_type shouldAlwaysLoadItemPrefab();                               // SDG.Unturned.CommandLineFlag
				static void shouldAlwaysLoadItemPrefab_Set(unknown_type value);
				Boolean _shouldVerifyHash();                                                    // System.Boolean
				void _shouldVerifyHash_Set(Boolean value);
				String* _itemName();                                                            // System.String
				void _itemName_Set(String* value);
				String* _itemDescription();                                                     // System.String
				void _itemDescription_Set(String* value);
				unknown_type type();                                                            // SDG.Unturned.EItemType
				void type_Set(unknown_type value);
				unknown_type rarity();                                                          // SDG.Unturned.EItemRarity
				void rarity_Set(unknown_type value);
				String* _proPath();                                                             // System.String
				void _proPath_Set(String* value);
				Boolean econIconUseId();                                                        // System.Boolean
				void econIconUseId_Set(Boolean value);
				Boolean isPro();                                                                // System.Boolean
				void isPro_Set(Boolean value);
				String* useable();                                                              // System.String
				void useable_Set(String* value);
				unknown_type useableType();                                                     // System.Type
				void useableType_Set(unknown_type value);
				Boolean canPlayerEquip();                                                       // System.Boolean
				void canPlayerEquip_Set(Boolean value);
				unknown_type slot();                                                            // SDG.Unturned.ESlotType
				void slot_Set(unknown_type value);
				Boolean canUseUnderwater();                                                     // System.Boolean
				void canUseUnderwater_Set(Boolean value);
				Byte size_x();                                                                  // System.Byte
				void size_x_Set(Byte value);
				Byte size_y();                                                                  // System.Byte
				void size_y_Set(Byte value);
				Single iconCameraOrthographicSize();                                            // System.Single
				void iconCameraOrthographicSize_Set(Single value);
				Single econIconCameraOrthographicSize();                                        // System.Single
				void econIconCameraOrthographicSize_Set(Single value);
				Boolean isEligibleForAutomaticIconMeasurements();                               // System.Boolean
				void isEligibleForAutomaticIconMeasurements_Set(Boolean value);
				Byte amount();                                                                  // System.Byte
				void amount_Set(Byte value);
				Byte countMin();                                                                // System.Byte
				void countMin_Set(Byte value);
				Byte countMax();                                                                // System.Byte
				void countMax_Set(Byte value);
				Byte qualityMin();                                                              // System.Byte
				void qualityMin_Set(Byte value);
				Byte qualityMax();                                                              // System.Byte
				void qualityMax_Set(Byte value);
				Boolean isBackward();                                                           // System.Boolean
				void isBackward_Set(Boolean value);
				Boolean shouldProcedurallyAnimateInertia();                                     // System.Boolean
				void shouldProcedurallyAnimateInertia_Set(Boolean value);
				Boolean shouldLeftHandedCharactersMirrorEquippedItem();                         // System.Boolean
				void shouldLeftHandedCharactersMirrorEquippedItem_Set(Boolean value);
				Boolean isEligibleForAutoStatDescriptions();                                    // System.Boolean
				void isEligibleForAutoStatDescriptions_Set(Boolean value);
				UnityEngine::GameObject* _item();                                               // UnityEngine.GameObject
				void _item_Set(UnityEngine::GameObject* value);
				UnityEngine::GameObject* equipablePrefab();                                     // UnityEngine.GameObject
				void equipablePrefab_Set(UnityEngine::GameObject* value);
				String* instantiatedItemName();                                                 // System.String
				void instantiatedItemName_Set(String* value);
				Single equipableMovementSpeedMultiplier();                                      // System.Single
				void equipableMovementSpeedMultiplier_Set(Single value);
				unknown_type _equip();                                                          // UnityEngine.AudioClip
				void _equip_Set(unknown_type value);
				Array<unknown_type>* _animations();                                             // UnityEngine.AnimationClip[]
				void _animations_Set(Array<unknown_type>* value);
				unknown_type inspectAudio();                                                    // SDG.Unturned.AudioReference
				void inspectAudio_Set(unknown_type value);
				unknown_type inventoryAudio();                                                  // SDG.Unturned.AudioReference
				void inventoryAudio_Set(unknown_type value);
				List<unknown_type>* _blueprints();                                              // System.Collections.Generic.List`1<SDG.Unturned.Blueprint>
				void _blueprints_Set(List<unknown_type>* value);
				List<unknown_type>* _actions();                                                 // System.Collections.Generic.List`1<SDG.Unturned.Action>
				void _actions_Set(List<unknown_type>* value);
				Boolean overrideShowQuality();                                                  // System.Boolean
				void overrideShowQuality_Set(Boolean value);
				Boolean shouldDropOnDeath();                                                    // System.Boolean
				void shouldDropOnDeath_Set(Boolean value);
				Boolean allowManualDrop();                                                      // System.Boolean
				void allowManualDrop_Set(Boolean value);
				unknown_type _albedoBase();                                                     // UnityEngine.Texture2D
				void _albedoBase_Set(unknown_type value);
				unknown_type _metallicBase();                                                   // UnityEngine.Texture2D
				void _metallicBase_Set(unknown_type value);
				unknown_type _emissionBase();                                                   // UnityEngine.Texture2D
				void _emissionBase_Set(unknown_type value);
				UInt16 sharedSkinLookupID();                                                    // System.UInt16
				void sharedSkinLookupID_Set(UInt16 value);
				Boolean shouldDeleteAtZeroQuality();                                            // System.Boolean
				void shouldDeleteAtZeroQuality_Set(Boolean value);
				Boolean shouldDestroyItemColliders();                                           // System.Boolean
				void shouldDestroyItemColliders_Set(Boolean value);
				static Int32 DescSort_RarityAndType();                                          // System.Int32
				static void DescSort_RarityAndType_Set(Int32 value);
				static Int32 DescSort_LoreText();                                               // System.Int32
				static void DescSort_LoreText_Set(Int32 value);
				static Int32 DescSort_QualityAndAmount();                                       // System.Int32
				static void DescSort_QualityAndAmount_Set(Int32 value);
				static Int32 DescSort_Important();                                              // System.Int32
				static void DescSort_Important_Set(Int32 value);
				static Int32 DescSort_ItemStat();                                               // System.Int32
				static void DescSort_ItemStat_Set(Int32 value);
				static Int32 DescSort_ClothingStat();                                           // System.Int32
				static void DescSort_ClothingStat_Set(Int32 value);
				static Int32 DescSort_ConsumeableStat();                                        // System.Int32
				static void DescSort_ConsumeableStat_Set(Int32 value);
				static Int32 DescSort_GunStat();                                                // System.Int32
				static void DescSort_GunStat_Set(Int32 value);
				static Int32 DescSort_GunAttachmentStat();                                      // System.Int32
				static void DescSort_GunAttachmentStat_Set(Int32 value);
				static Int32 DescSort_MeleeStat();                                              // System.Int32
				static void DescSort_MeleeStat_Set(Int32 value);
				static Int32 DescSort_RefillStat();                                             // System.Int32
				static void DescSort_RefillStat_Set(Int32 value);
				static Int32 DescSort_Weapon_NonExplosive_Common();                             // System.Int32
				static void DescSort_Weapon_NonExplosive_Common_Set(Int32 value);
				static Int32 DescSort_TrapKeyword();                                            // System.Int32
				static void DescSort_TrapKeyword_Set(Int32 value);
				static Int32 DescSort_TrapStat();                                               // System.Int32
				static void DescSort_TrapStat_Set(Int32 value);
				static Int32 DescSort_FarmableText();                                           // System.Int32
				static void DescSort_FarmableText_Set(Int32 value);
				static Int32 DescSort_BuildableCommon();                                        // System.Int32
				static void DescSort_BuildableCommon_Set(Int32 value);
				static Int32 DescSort_ExplosiveBulletDamage();                                  // System.Int32
				static void DescSort_ExplosiveBulletDamage_Set(Int32 value);
				static Int32 DescSort_ExplosiveChargeDamage();                                  // System.Int32
				static void DescSort_ExplosiveChargeDamage_Set(Int32 value);
				static Int32 DescSort_ExplosiveTrapDamage();                                    // System.Int32
				static void DescSort_ExplosiveTrapDamage_Set(Int32 value);
				static Int32 DescSort_Weapon_Explosive_RangeAndDamage();                        // System.Int32
				static void DescSort_Weapon_Explosive_RangeAndDamage_Set(Int32 value);
				static Int32 DescSort_Weapon_NonExplosive_PlayerDamage();                       // System.Int32
				static void DescSort_Weapon_NonExplosive_PlayerDamage_Set(Int32 value);
				static Int32 DescSort_Weapon_NonExplosive_ZombieDamage();                       // System.Int32
				static void DescSort_Weapon_NonExplosive_ZombieDamage_Set(Int32 value);
				static Int32 DescSort_Weapon_NonExplosive_AnimalDamage();                       // System.Int32
				static void DescSort_Weapon_NonExplosive_AnimalDamage_Set(Int32 value);
				static Int32 DescSort_Weapon_NonExplosive_OtherDamage();                        // System.Int32
				static void DescSort_Weapon_NonExplosive_OtherDamage_Set(Int32 value);
				static Int32 DescSort_Beneficial();                                             // System.Int32
				static void DescSort_Beneficial_Set(Int32 value);
				static Int32 DescSort_Detrimental();                                            // System.Int32
				static void DescSort_Detrimental_Set(Int32 value);
				Boolean get_shouldVerifyHash();
				Boolean get_ShouldVerifyHash();
				String* get_FriendlyName();
				String* get_itemName();
				String* get_itemDescription();
				String* get_proPath();
				unknown_type get_useableType();
				void set_useableType(unknown_type value);
				Boolean get_canPlayerEquip();
				void set_canPlayerEquip(Boolean value);
				Boolean get_isUseable();
				void set_isUseable(Boolean value);
				Boolean get_canUseUnderwater();
				void set_canUseUnderwater(Boolean value);
				Array<Byte>* getState();
				Array<Byte>* getState1(Boolean isFull);
				Array<Byte>* getState2(unknown_type origin);
				void BuildDescription(unknown_type builder, unknown_type itemInstance);
				String* GetTypeFriendlyName();
				Byte get_count();
				Byte get_quality();
				Boolean get_ShouldAttachEquippedModelToLeftHand();
				void set_ShouldAttachEquippedModelToLeftHand(Boolean value);
				UnityEngine::GameObject* get_item();
				String* get_instantiatedItemName();
				void set_instantiatedItemName(String* value);
				unknown_type get_equip();
				Array<unknown_type>* get_animations();
				List<unknown_type>* get_blueprints();
				List<unknown_type>* get_actions();
				Boolean get_overrideShowQuality();
				void set_overrideShowQuality(Boolean value);
				Boolean get_showQuality();
				Boolean get_shouldDropOnDeath();
				void set_shouldDropOnDeath(Boolean value);
				Boolean get_allowManualDrop();
				void set_allowManualDrop(Boolean value);
				unknown_type get_albedoBase();
				unknown_type get_metallicBase();
				unknown_type get_emissionBase();
				void applySkinBaseTextures(unknown_type material);
				UInt16 get_sharedSkinLookupID();
				void set_sharedSkinLookupID(UInt16 value);
				Boolean get_shouldFriendlySentryTargetUser();
				Boolean get_isDangerous();
				Boolean canBeUsedInSafezone(unknown_type safezone);
				Boolean canBeUsedInSafezone1(unknown_type safezone, Boolean byAdmin);
				Boolean get_shouldDeleteAtZeroQuality();
				void set_shouldDeleteAtZeroQuality(Boolean value);
				Boolean get_shouldDestroyItemColliders();
				void set_shouldDestroyItemColliders(Boolean value);
				unknown_type get_assetCategory();
				Boolean get_doesItemTypeHaveSkins();
				void updateUseableType();
				void initAnimations(UnityEngine::GameObject* anim);
				void PopulateAsset(unknown_type bundle, unknown_type data, unknown_type localization);
				unknown_type GetDefaultInventoryAudio();
				Int32 DescSort_HigherIsBeneficial(Single value);
				Int32 DescSort_LowerIsBeneficial(Single value);
			};
			class ItemGunAsset
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static ItemGunAsset* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				unknown_type _shoot();                                                          // UnityEngine.AudioClip
				void _shoot_Set(unknown_type value);
				unknown_type _reload();                                                         // UnityEngine.AudioClip
				void _reload_Set(unknown_type value);
				unknown_type _hammer();                                                         // UnityEngine.AudioClip
				void _hammer_Set(unknown_type value);
				unknown_type _aim();                                                            // UnityEngine.AudioClip
				void _aim_Set(unknown_type value);
				unknown_type _minigun();                                                        // UnityEngine.AudioClip
				void _minigun_Set(unknown_type value);
				unknown_type _chamberJammedSound();                                             // UnityEngine.AudioClip
				void _chamberJammedSound_Set(unknown_type value);
				unknown_type fireDelaySound();                                                  // UnityEngine.AudioClip
				void fireDelaySound_Set(unknown_type value);
				Single gunshotRolloffDistance();                                                // System.Single
				void gunshotRolloffDistance_Set(Single value);
				UnityEngine::GameObject* _projectile();                                         // UnityEngine.GameObject
				void _projectile_Set(UnityEngine::GameObject* value);
				Single alertRadius();                                                           // System.Single
				void alertRadius_Set(Single value);
				Single rangeRangefinder();                                                      // System.Single
				void rangeRangefinder_Set(Single value);
				Boolean instakillHeadshots();                                                   // System.Boolean
				void instakillHeadshots_Set(Boolean value);
				Boolean infiniteAmmo();                                                         // System.Boolean
				void infiniteAmmo_Set(Boolean value);
				Byte ammoPerShot();                                                             // System.Byte
				void ammoPerShot_Set(Byte value);
				Int32 fireDelay();                                                              // System.Int32
				void fireDelay_Set(Int32 value);
				Boolean allowMagazineChange();                                                  // System.Boolean
				void allowMagazineChange_Set(Boolean value);
				Boolean canAimDuringSprint();                                                   // System.Boolean
				void canAimDuringSprint_Set(Boolean value);
				Single aimInDuration();                                                         // System.Single
				void aimInDuration_Set(Single value);
				Boolean shouldScaleAimAnimations();                                             // System.Boolean
				void shouldScaleAimAnimations_Set(Boolean value);
				Byte ammoMin();                                                                 // System.Byte
				void ammoMin_Set(Byte value);
				Byte ammoMax();                                                                 // System.Byte
				void ammoMax_Set(Byte value);
				UInt16 _sightID();                                                              // System.UInt16
				void _sightID_Set(UInt16 value);
				Array<Byte>* sightState();                                                      // System.Byte[]
				void sightState_Set(Array<Byte>* value);
				UInt16 _tacticalID();                                                           // System.UInt16
				void _tacticalID_Set(UInt16 value);
				Array<Byte>* tacticalState();                                                   // System.Byte[]
				void tacticalState_Set(Array<Byte>* value);
				UInt16 _gripID();                                                               // System.UInt16
				void _gripID_Set(UInt16 value);
				Array<Byte>* gripState();                                                       // System.Byte[]
				void gripState_Set(Array<Byte>* value);
				UInt16 _barrelID();                                                             // System.UInt16
				void _barrelID_Set(UInt16 value);
				Array<Byte>* barrelState();                                                     // System.Byte[]
				void barrelState_Set(Array<Byte>* value);
				UInt16 magazineID();                                                            // System.UInt16
				void magazineID_Set(UInt16 value);
				Array<unknown_type>* magazineReplacements();                                    // SDG.Unturned.MagazineReplacement[]
				void magazineReplacements_Set(Array<unknown_type>* value);
				Single unplace();                                                               // System.Single
				void unplace_Set(Single value);
				Single replace();                                                               // System.Single
				void replace_Set(Single value);
				Boolean hasSight();                                                             // System.Boolean
				void hasSight_Set(Boolean value);
				Boolean hasTactical();                                                          // System.Boolean
				void hasTactical_Set(Boolean value);
				Boolean hasGrip();                                                              // System.Boolean
				void hasGrip_Set(Boolean value);
				Boolean hasBarrel();                                                            // System.Boolean
				void hasBarrel_Set(Boolean value);
				Array<UInt16>* attachmentCalibers();                                            // System.UInt16[]
				void attachmentCalibers_Set(Array<UInt16>* value);
				Array<UInt16>* magazineCalibers();                                              // System.UInt16[]
				void magazineCalibers_Set(Array<UInt16>* value);
				Byte firerate();                                                                // System.Byte
				void firerate_Set(Byte value);
				unknown_type action();                                                          // SDG.Unturned.EAction
				void action_Set(unknown_type value);
				Boolean shouldDeleteEmptyMagazines();                                           // System.Boolean
				void shouldDeleteEmptyMagazines_Set(Boolean value);
				Boolean requiresNonZeroAttachmentCaliber();                                     // System.Boolean
				void requiresNonZeroAttachmentCaliber_Set(Boolean value);
				Boolean hasSafety();                                                            // System.Boolean
				void hasSafety_Set(Boolean value);
				Boolean hasSemi();                                                              // System.Boolean
				void hasSemi_Set(Boolean value);
				Boolean hasAuto();                                                              // System.Boolean
				void hasAuto_Set(Boolean value);
				Boolean hasBurst();                                                             // System.Boolean
				void hasBurst_Set(Boolean value);
				Boolean isTurret();                                                             // System.Boolean
				void isTurret_Set(Boolean value);
				Int32 bursts();                                                                 // System.Int32
				void bursts_Set(Int32 value);
				unknown_type firemode();                                                        // SDG.Unturned.EFiremode
				void firemode_Set(unknown_type value);
				Single spreadAim();                                                             // System.Single
				void spreadAim_Set(Single value);
				Single spreadHip();                                                             // System.Single
				void spreadHip_Set(Single value);
				Single baseSpreadAngleRadians();                                                // System.Single
				void baseSpreadAngleRadians_Set(Single value);
				Single spreadSprint();                                                          // System.Single
				void spreadSprint_Set(Single value);
				Single spreadCrouch();                                                          // System.Single
				void spreadCrouch_Set(Single value);
				Single spreadProne();                                                           // System.Single
				void spreadProne_Set(Single value);
				Single spreadSwimming();                                                        // System.Single
				void spreadSwimming_Set(Single value);
				Single recoilMin_x();                                                           // System.Single
				void recoilMin_x_Set(Single value);
				Single recoilMin_y();                                                           // System.Single
				void recoilMin_y_Set(Single value);
				Single recoilMax_x();                                                           // System.Single
				void recoilMax_x_Set(Single value);
				Single recoilMax_y();                                                           // System.Single
				void recoilMax_y_Set(Single value);
				Single aimingRecoilMultiplier();                                                // System.Single
				void aimingRecoilMultiplier_Set(Single value);
				Single recoilSprint();                                                          // System.Single
				void recoilSprint_Set(Single value);
				Single recoilCrouch();                                                          // System.Single
				void recoilCrouch_Set(Single value);
				Single recoilProne();                                                           // System.Single
				void recoilProne_Set(Single value);
				Single recoilSwimming();                                                        // System.Single
				void recoilSwimming_Set(Single value);
				Single recover_x();                                                             // System.Single
				void recover_x_Set(Single value);
				Single recover_y();                                                             // System.Single
				void recover_y_Set(Single value);
				Single shakeMin_x();                                                            // System.Single
				void shakeMin_x_Set(Single value);
				Single shakeMin_y();                                                            // System.Single
				void shakeMin_y_Set(Single value);
				Single shakeMin_z();                                                            // System.Single
				void shakeMin_z_Set(Single value);
				Single shakeMax_x();                                                            // System.Single
				void shakeMax_x_Set(Single value);
				Single shakeMax_y();                                                            // System.Single
				void shakeMax_y_Set(Single value);
				Single shakeMax_z();                                                            // System.Single
				void shakeMax_z_Set(Single value);
				Byte ballisticSteps();                                                          // System.Byte
				void ballisticSteps_Set(Byte value);
				Single ballisticTravel();                                                       // System.Single
				void ballisticTravel_Set(Single value);
				Single muzzleVelocity();                                                        // System.Single
				void muzzleVelocity_Set(Single value);
				Single bulletGravityMultiplier();                                               // System.Single
				void bulletGravityMultiplier_Set(Single value);
				Single ballisticForce();                                                        // System.Single
				void ballisticForce_Set(Single value);
				Single damageFalloffRange();                                                    // System.Single
				void damageFalloffRange_Set(Single value);
				Single damageFalloffMaxRange();                                                 // System.Single
				void damageFalloffMaxRange_Set(Single value);
				Single damageFalloffMultiplier();                                               // System.Single
				void damageFalloffMultiplier_Set(Single value);
				Single projectileLifespan();                                                    // System.Single
				void projectileLifespan_Set(Single value);
				Boolean projectilePenetrateBuildables();                                        // System.Boolean
				void projectilePenetrateBuildables_Set(Boolean value);
				Single projectileExplosionLaunchSpeed();                                        // System.Single
				void projectileExplosionLaunchSpeed_Set(Single value);
				Single reloadTime();                                                            // System.Single
				void reloadTime_Set(Single value);
				Single hammerTime();                                                            // System.Single
				void hammerTime_Set(Single value);
				unknown_type muzzleGuid();                                                      // System.Guid
				void muzzleGuid_Set(unknown_type value);
				UInt16 muzzle();                                                                // System.UInt16
				void muzzle_Set(UInt16 value);
				unknown_type shellGuid();                                                       // System.Guid
				void shellGuid_Set(unknown_type value);
				UInt16 shell();                                                                 // System.UInt16
				void shell_Set(UInt16 value);
				unknown_type projectileExplosionEffectGuid();                                   // System.Guid
				void projectileExplosionEffectGuid_Set(unknown_type value);
				UInt16 explosion();                                                             // System.UInt16
				void explosion_Set(UInt16 value);
				Boolean canEverJam();                                                           // System.Boolean
				void canEverJam_Set(Boolean value);
				Single jamQualityThreshold();                                                   // System.Single
				void jamQualityThreshold_Set(Single value);
				Single jamMaxChance();                                                          // System.Single
				void jamMaxChance_Set(Single value);
				String* unjamChamberAnimName();                                                 // System.String
				void unjamChamberAnimName_Set(String* value);
				Single aimingMovementSpeedMultiplier();                                         // System.Single
				void aimingMovementSpeedMultiplier_Set(Single value);
				unknown_type shootQuestRewards();                                               // SDG.Unturned.NPCRewardsList
				void shootQuestRewards_Set(unknown_type value);
				unknown_type get_shoot();
				unknown_type get_reload();
				unknown_type get_hammer();
				unknown_type get_aim();
				unknown_type get_minigun();
				unknown_type get_chamberJammedSound();
				unknown_type get_fireDelaySound();
				void set_fireDelaySound(unknown_type value);
				Single get_gunshotRolloffDistance();
				void set_gunshotRolloffDistance(Single value);
				UnityEngine::GameObject* get_projectile();
				Boolean get_shouldFriendlySentryTargetUser();
				Single get_rangeRangefinder();
				void set_rangeRangefinder(Single value);
				Boolean get_instakillHeadshots();
				void set_instakillHeadshots(Boolean value);
				Boolean get_infiniteAmmo();
				void set_infiniteAmmo(Boolean value);
				Byte get_ammoPerShot();
				void set_ammoPerShot(Byte value);
				Int32 get_fireDelay();
				void set_fireDelay(Int32 value);
				Boolean get_allowMagazineChange();
				void set_allowMagazineChange(Boolean value);
				Boolean get_canAimDuringSprint();
				void set_canAimDuringSprint(Boolean value);
				Single get_aimInDuration();
				void set_aimInDuration(Single value);
				Boolean get_shouldScaleAimAnimations();
				void set_shouldScaleAimAnimations(Boolean value);
				void BuildDescription(unknown_type builder, unknown_type itemInstance);
				Array<Byte>* getState(unknown_type origin);
				Array<Byte>* getState1(UInt16 sight, UInt16 tactical, UInt16 grip, UInt16 barrel, UInt16 magazine, Byte ammo);
				UInt16 get_sightID();
				void set_sightID(UInt16 value);
				UInt16 get_tacticalID();
				void set_tacticalID(UInt16 value);
				UInt16 get_gripID();
				void set_gripID(UInt16 value);
				UInt16 get_barrelID();
				void set_barrelID(UInt16 value);
				UInt16 getMagazineID();
				Array<Byte>* getMagazineState(UInt16 id);
				Array<UInt16>* get_attachmentCalibers();
				void set_attachmentCalibers(Array<UInt16>* value);
				Array<UInt16>* get_magazineCalibers();
				void set_magazineCalibers(Array<UInt16>* value);
				Single get_baseSpreadAngleRadians();
				void set_baseSpreadAngleRadians(Single value);
				Single get_muzzleVelocity();
				void set_muzzleVelocity(Single value);
				Single get_bulletGravityMultiplier();
				void set_bulletGravityMultiplier(Single value);
				unknown_type FindMuzzleEffectAsset();
				unknown_type FindShellEffectAsset();
				Boolean get_showQuality();
				Boolean get_canEverJam();
				void set_canEverJam(Boolean value);
				Single get_jamQualityThreshold();
				void set_jamQualityThreshold(Single value);
				Single get_jamMaxChance();
				void set_jamMaxChance(Single value);
				String* get_unjamChamberAnimName();
				void set_unjamChamberAnimName(String* value);
				void GrantShootQuestRewards(SDG::Unturned::Player* player);
				Boolean get_doesItemTypeHaveSkins();
				void PopulateAsset(unknown_type bundle, unknown_type data, unknown_type localization);
				unknown_type GetDefaultInventoryAudio();
			};
			class HumanClothes
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static HumanClothes* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static unknown_type shader();                                                   // UnityEngine.Shader
				static void shader_Set(unknown_type value);
				static unknown_type clothingShader();                                           // UnityEngine.Shader
				static void clothingShader_Set(unknown_type value);
				Array<unknown_type>* humanMeshes();                                             // UnityEngine.Mesh[]
				void humanMeshes_Set(Array<unknown_type>* value);
				unknown_type materialClothing();                                                // UnityEngine.Material
				void materialClothing_Set(unknown_type value);
				unknown_type materialHair();                                                    // UnityEngine.Material
				void materialHair_Set(unknown_type value);
				UnityEngine::Transform* spine();                                                // UnityEngine.Transform
				void spine_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* skull();                                                // UnityEngine.Transform
				void skull_Set(UnityEngine::Transform* value);
				Array<UnityEngine::Transform*>* upperBones();                                   // UnityEngine.Transform[]
				void upperBones_Set(Array<UnityEngine::Transform*>* value);
				Array<UnityEngine::Transform*>* upperSystems();                                 // UnityEngine.Transform[]
				void upperSystems_Set(Array<UnityEngine::Transform*>* value);
				Array<UnityEngine::Transform*>* lowerBones();                                   // UnityEngine.Transform[]
				void lowerBones_Set(Array<UnityEngine::Transform*>* value);
				Array<UnityEngine::Transform*>* lowerSystems();                                 // UnityEngine.Transform[]
				void lowerSystems_Set(Array<UnityEngine::Transform*>* value);
				UnityEngine::Transform* hatModel();                                             // UnityEngine.Transform
				void hatModel_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* backpackModel();                                        // UnityEngine.Transform
				void backpackModel_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* vestModel();                                            // UnityEngine.Transform
				void vestModel_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* maskModel();                                            // UnityEngine.Transform
				void maskModel_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* glassesModel();                                         // UnityEngine.Transform
				void glassesModel_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* hairModel();                                            // UnityEngine.Transform
				void hairModel_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* beardModel();                                           // UnityEngine.Transform
				void beardModel_Set(UnityEngine::Transform* value);
				Boolean isMine();                                                               // System.Boolean
				void isMine_Set(Boolean value);
				Boolean isView();                                                               // System.Boolean
				void isView_Set(Boolean value);
				Boolean canWearPro();                                                           // System.Boolean
				void canWearPro_Set(Boolean value);
				Boolean isRagdoll();                                                            // System.Boolean
				void isRagdoll_Set(Boolean value);
				Array<unknown_type>* characterMeshRenderers();                                  // UnityEngine.SkinnedMeshRenderer[]
				void characterMeshRenderers_Set(Array<unknown_type>* value);
				Boolean _isVisual();                                                            // System.Boolean
				void _isVisual_Set(Boolean value);
				Boolean _isMythic();                                                            // System.Boolean
				void _isMythic_Set(Boolean value);
				Boolean _isLeftHanded();                                                        // System.Boolean
				void _isLeftHanded_Set(Boolean value);
				Boolean _hasBackpack();                                                         // System.Boolean
				void _hasBackpack_Set(Boolean value);
				Boolean isUpper();                                                              // System.Boolean
				void isUpper_Set(Boolean value);
				Boolean isLower();                                                              // System.Boolean
				void isLower_Set(Boolean value);
				unknown_type visualShirtAsset();                                                // SDG.Unturned.ItemShirtAsset
				void visualShirtAsset_Set(unknown_type value);
				unknown_type visualPantsAsset();                                                // SDG.Unturned.ItemPantsAsset
				void visualPantsAsset_Set(unknown_type value);
				unknown_type visualHatAsset();                                                  // SDG.Unturned.ItemHatAsset
				void visualHatAsset_Set(unknown_type value);
				unknown_type visualBackpackAsset();                                             // SDG.Unturned.ItemBackpackAsset
				void visualBackpackAsset_Set(unknown_type value);
				unknown_type visualVestAsset();                                                 // SDG.Unturned.ItemVestAsset
				void visualVestAsset_Set(unknown_type value);
				unknown_type visualMaskAsset();                                                 // SDG.Unturned.ItemMaskAsset
				void visualMaskAsset_Set(unknown_type value);
				unknown_type visualGlassesAsset();                                              // SDG.Unturned.ItemGlassesAsset
				void visualGlassesAsset_Set(unknown_type value);
				Int32 _visualShirt();                                                           // System.Int32
				void _visualShirt_Set(Int32 value);
				Int32 _visualPants();                                                           // System.Int32
				void _visualPants_Set(Int32 value);
				Int32 _visualHat();                                                             // System.Int32
				void _visualHat_Set(Int32 value);
				Int32 _visualBackpack();                                                        // System.Int32
				void _visualBackpack_Set(Int32 value);
				Int32 _visualVest();                                                            // System.Int32
				void _visualVest_Set(Int32 value);
				Int32 _visualMask();                                                            // System.Int32
				void _visualMask_Set(Int32 value);
				Int32 _visualGlasses();                                                         // System.Int32
				void _visualGlasses_Set(Int32 value);
				unknown_type _shirtAsset();                                                     // SDG.Unturned.ItemShirtAsset
				void _shirtAsset_Set(unknown_type value);
				unknown_type _pantsAsset();                                                     // SDG.Unturned.ItemPantsAsset
				void _pantsAsset_Set(unknown_type value);
				unknown_type _hatAsset();                                                       // SDG.Unturned.ItemHatAsset
				void _hatAsset_Set(unknown_type value);
				unknown_type _backpackAsset();                                                  // SDG.Unturned.ItemBackpackAsset
				void _backpackAsset_Set(unknown_type value);
				unknown_type _vestAsset();                                                      // SDG.Unturned.ItemVestAsset
				void _vestAsset_Set(unknown_type value);
				unknown_type _maskAsset();                                                      // SDG.Unturned.ItemMaskAsset
				void _maskAsset_Set(unknown_type value);
				unknown_type _glassesAsset();                                                   // SDG.Unturned.ItemGlassesAsset
				void _glassesAsset_Set(unknown_type value);
				Byte _face();                                                                   // System.Byte
				void _face_Set(Byte value);
				Byte _hair();                                                                   // System.Byte
				void _hair_Set(Byte value);
				Byte _beard();                                                                  // System.Byte
				void _beard_Set(Byte value);
				unknown_type _skinColor();                                                      // UnityEngine.Color
				void _skinColor_Set(unknown_type value);
				unknown_type _hairColor();                                                      // UnityEngine.Color
				void _hairColor_Set(unknown_type value);
				Boolean hasHair();                                                              // System.Boolean
				void hasHair_Set(Boolean value);
				Boolean hasBeard();                                                             // System.Boolean
				void hasBeard_Set(Boolean value);
				Boolean usingHumanMeshes();                                                     // System.Boolean
				void usingHumanMeshes_Set(Boolean value);
				Boolean usingHumanMaterials();                                                  // System.Boolean
				void usingHumanMaterials_Set(Boolean value);
				Boolean hairDirty();                                                            // System.Boolean
				void hairDirty_Set(Boolean value);
				Boolean beardDirty();                                                           // System.Boolean
				void beardDirty_Set(Boolean value);
				Boolean skinColorDirty();                                                       // System.Boolean
				void skinColorDirty_Set(Boolean value);
				Boolean faceDirty();                                                            // System.Boolean
				void faceDirty_Set(Boolean value);
				Boolean shirtDirty();                                                           // System.Boolean
				void shirtDirty_Set(Boolean value);
				Boolean pantsDirty();                                                           // System.Boolean
				void pantsDirty_Set(Boolean value);
				Boolean hatDirty();                                                             // System.Boolean
				void hatDirty_Set(Boolean value);
				Boolean backpackDirty();                                                        // System.Boolean
				void backpackDirty_Set(Boolean value);
				Boolean vestDirty();                                                            // System.Boolean
				void vestDirty_Set(Boolean value);
				Boolean maskDirty();                                                            // System.Boolean
				void maskDirty_Set(Boolean value);
				Boolean glassesDirty();                                                         // System.Boolean
				void glassesDirty_Set(Boolean value);
				static Int32 skinColorPropertyID();                                             // System.Int32
				static void skinColorPropertyID_Set(Int32 value);
				static Int32 flipShirtPropertyID();                                             // System.Int32
				static void flipShirtPropertyID_Set(Int32 value);
				static Int32 faceAlbedoTexturePropertyID();                                     // System.Int32
				static void faceAlbedoTexturePropertyID_Set(Int32 value);
				static Int32 faceEmissionTexturePropertyID();                                   // System.Int32
				static void faceEmissionTexturePropertyID_Set(Int32 value);
				static Int32 shirtAlbedoTexturePropertyID();                                    // System.Int32
				static void shirtAlbedoTexturePropertyID_Set(Int32 value);
				static Int32 shirtEmissionTexturePropertyID();                                  // System.Int32
				static void shirtEmissionTexturePropertyID_Set(Int32 value);
				static Int32 shirtMetallicTexturePropertyID();                                  // System.Int32
				static void shirtMetallicTexturePropertyID_Set(Int32 value);
				static Int32 pantsAlbedoTexturePropertyID();                                    // System.Int32
				static void pantsAlbedoTexturePropertyID_Set(Int32 value);
				static Int32 pantsEmissionTexturePropertyID();                                  // System.Int32
				static void pantsEmissionTexturePropertyID_Set(Int32 value);
				static Int32 pantsMetallicTexturePropertyID();                                  // System.Int32
				static void pantsMetallicTexturePropertyID_Set(Int32 value);
				UnityEngine::Transform* get_hatModel();
				void set_hatModel(UnityEngine::Transform* value);
				UnityEngine::Transform* get_backpackModel();
				void set_backpackModel(UnityEngine::Transform* value);
				UnityEngine::Transform* get_vestModel();
				void set_vestModel(UnityEngine::Transform* value);
				UnityEngine::Transform* get_maskModel();
				void set_maskModel(UnityEngine::Transform* value);
				UnityEngine::Transform* get_glassesModel();
				void set_glassesModel(UnityEngine::Transform* value);
				UnityEngine::Transform* get_hairModel();
				void set_hairModel(UnityEngine::Transform* value);
				UnityEngine::Transform* get_beardModel();
				void set_beardModel(UnityEngine::Transform* value);
				Boolean get_isVisual();
				void set_isVisual(Boolean value);
				Boolean get_isMythic();
				void set_isMythic(Boolean value);
				Boolean get_hand();
				void set_hand(Boolean value);
				Boolean get_hasBackpack();
				void set_hasBackpack(Boolean value);
				Int32 get_visualShirt();
				void set_visualShirt(Int32 value);
				Int32 get_visualPants();
				void set_visualPants(Int32 value);
				Int32 get_visualHat();
				void set_visualHat(Int32 value);
				Int32 get_visualBackpack();
				void set_visualBackpack(Int32 value);
				Int32 get_visualVest();
				void set_visualVest(Int32 value);
				Int32 get_visualMask();
				void set_visualMask(Int32 value);
				Int32 get_visualGlasses();
				void set_visualGlasses(Int32 value);
				unknown_type get_shirtAsset();
				void set_shirtAsset(unknown_type value);
				unknown_type get_pantsAsset();
				void set_pantsAsset(unknown_type value);
				unknown_type get_hatAsset();
				void set_hatAsset(unknown_type value);
				unknown_type get_backpackAsset();
				void set_backpackAsset(unknown_type value);
				unknown_type get_vestAsset();
				void set_vestAsset(unknown_type value);
				unknown_type get_maskAsset();
				void set_maskAsset(unknown_type value);
				unknown_type get_glassesAsset();
				void set_glassesAsset(unknown_type value);
				unknown_type get_shirtGuid();
				void set_shirtGuid(unknown_type value);
				UInt16 get_shirt();
				void set_shirt(UInt16 value);
				unknown_type get_pantsGuid();
				void set_pantsGuid(unknown_type value);
				UInt16 get_pants();
				void set_pants(UInt16 value);
				unknown_type get_hatGuid();
				void set_hatGuid(unknown_type value);
				UInt16 get_hat();
				void set_hat(UInt16 value);
				unknown_type get_backpackGuid();
				void set_backpackGuid(unknown_type value);
				UInt16 get_backpack();
				void set_backpack(UInt16 value);
				unknown_type get_vestGuid();
				void set_vestGuid(unknown_type value);
				UInt16 get_vest();
				void set_vest(UInt16 value);
				unknown_type get_maskGuid();
				void set_maskGuid(unknown_type value);
				UInt16 get_mask();
				void set_mask(UInt16 value);
				unknown_type get_glassesGuid();
				void set_glassesGuid(unknown_type value);
				UInt16 get_glasses();
				void set_glasses(UInt16 value);
				Byte get_face();
				void set_face(Byte value);
				Byte get_hair();
				void set_hair(Byte value);
				Byte get_beard();
				void set_beard(Byte value);
				unknown_type get_skin();
				void set_skin(unknown_type value);
				unknown_type get_color();
				void set_color(unknown_type value);
				void markAllDirty(Boolean isDirty);
				void ApplyHairOverride(unknown_type itemAsset, UnityEngine::Transform* rootModel);
				void ApplySkinOverride(unknown_type itemAsset, UnityEngine::Transform* rootModel);
				void apply();
				void centerHeadEffect(UnityEngine::Transform* skull, UnityEngine::Transform* model);
				void setCharacterMeshes(Array<unknown_type>* meshes);
				void setCharacterMaterial(unknown_type material);
				void Awake();
				void OnDestroy();
			};
			class Player
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static Player* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static Byte SAVEDATA_VERSION();                                                 // System.Byte
				static void SAVEDATA_VERSION_Set(Byte value);
				static unknown_type onPlayerCreated();                                          // SDG.Unturned.PlayerCreated
				static void onPlayerCreated_Set(unknown_type value);
				unknown_type onPlayerTeleported();                                              // SDG.Unturned.PlayerTeleported
				void onPlayerTeleported_Set(unknown_type value);
				unknown_type onPlayerSpyReady();                                                // SDG.Unturned.PlayerSpyReady
				void onPlayerSpyReady_Set(unknown_type value);
				static unknown_type onSpyReady();                                               // SDG.Unturned.PlayerSpyReady
				static void onSpyReady_Set(unknown_type value);
				unknown_type OnAdminUsageChanged();                                             // SDG.Unturned.AdminUsageFlagsChanged
				void OnAdminUsageChanged_Set(unknown_type value);
				static unknown_type OnAnyPlayerAdminUsageChanged();                             // SDG.Unturned.AdminUsageFlagsChanged
				static void OnAnyPlayerAdminUsageChanged_Set(unknown_type value);
				static unknown_type onPlayerStatIncremented();                                  // SDG.Unturned.Player/PlayerStatIncremented
				static void onPlayerStatIncremented_Set(unknown_type value);
				unknown_type onLocalPluginWidgetFlagsChanged();                                 // SDG.Unturned.Player/PluginWidgetFlagsChanged
				void onLocalPluginWidgetFlagsChanged_Set(unknown_type value);
				static Boolean isLoadingInventory();                                            // System.Boolean
				static void isLoadingInventory_Set(Boolean value);
				static Boolean isLoadingLife();                                                 // System.Boolean
				static void isLoadingLife_Set(Boolean value);
				static Boolean isLoadingClothing();                                             // System.Boolean
				static void isLoadingClothing_Set(Boolean value);
				Int32 agro();                                                                   // System.Int32
				void agro_Set(Int32 value);
				static SDG::Unturned::Player* _player();                                        // SDG.Unturned.Player
				static void _player_Set(SDG::Unturned::Player* value);
				SDG::Unturned::SteamChannel* _channel();                                        // SDG.Unturned.SteamChannel
				void _channel_Set(SDG::Unturned::SteamChannel* value);
				SDG::Unturned::PlayerAnimator* _animator();                                     // SDG.Unturned.PlayerAnimator
				void _animator_Set(SDG::Unturned::PlayerAnimator* value);
				unknown_type _clothing();                                                       // SDG.Unturned.PlayerClothing
				void _clothing_Set(unknown_type value);
				SDG::Unturned::PlayerInventory* _inventory();                                   // SDG.Unturned.PlayerInventory
				void _inventory_Set(SDG::Unturned::PlayerInventory* value);
				SDG::Unturned::PlayerEquipment* _equipment();                                   // SDG.Unturned.PlayerEquipment
				void _equipment_Set(SDG::Unturned::PlayerEquipment* value);
				SDG::Unturned::PlayerLife* _life();                                             // SDG.Unturned.PlayerLife
				void _life_Set(SDG::Unturned::PlayerLife* value);
				unknown_type _crafting();                                                       // SDG.Unturned.PlayerCrafting
				void _crafting_Set(unknown_type value);
				unknown_type _skills();                                                         // SDG.Unturned.PlayerSkills
				void _skills_Set(unknown_type value);
				SDG::Unturned::PlayerMovement* _movement();                                     // SDG.Unturned.PlayerMovement
				void _movement_Set(SDG::Unturned::PlayerMovement* value);
				SDG::Unturned::PlayerLook* _look();                                             // SDG.Unturned.PlayerLook
				void _look_Set(SDG::Unturned::PlayerLook* value);
				unknown_type _stance();                                                         // SDG.Unturned.PlayerStance
				void _stance_Set(unknown_type value);
				unknown_type _input();                                                          // SDG.Unturned.PlayerInput
				void _input_Set(unknown_type value);
				unknown_type _voice();                                                          // SDG.Unturned.PlayerVoice
				void _voice_Set(unknown_type value);
				unknown_type _interact();                                                       // SDG.Unturned.PlayerInteract
				void _interact_Set(unknown_type value);
				unknown_type _workzone();                                                       // SDG.Unturned.PlayerWorkzone
				void _workzone_Set(unknown_type value);
				SDG::Unturned::PlayerQuests* _quests();                                         // SDG.Unturned.PlayerQuests
				void _quests_Set(SDG::Unturned::PlayerQuests* value);
				UnityEngine::Transform* _first();                                               // UnityEngine.Transform
				void _first_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _third();                                               // UnityEngine.Transform
				void _third_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _character();                                           // UnityEngine.Transform
				void _character_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* firstSpot();                                            // UnityEngine.Transform
				void firstSpot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* thirdSpot();                                            // UnityEngine.Transform
				void thirdSpot_Set(UnityEngine::Transform* value);
				Boolean itemOn();                                                               // System.Boolean
				void itemOn_Set(Boolean value);
				unknown_type itemLightConfig();                                                 // SDG.Unturned.PlayerSpotLightConfig
				void itemLightConfig_Set(unknown_type value);
				Boolean headlampOn();                                                           // System.Boolean
				void headlampOn_Set(Boolean value);
				unknown_type headlampLightConfig();                                             // SDG.Unturned.PlayerSpotLightConfig
				void headlampLightConfig_Set(unknown_type value);
				Int32 screenshotsExpected();                                                    // System.Int32
				void screenshotsExpected_Set(Int32 value);
				unknown_type screenshotsDestination();                                          // Steamworks.CSteamID
				void screenshotsDestination_Set(unknown_type value);
				unknown_type screenshotsCallbacks();                                            // System.Collections.Generic.Queue`1<SDG.Unturned.PlayerSpyReady>
				void screenshotsCallbacks_Set(unknown_type value);
				static unknown_type SendScreenshotDestination();                                // SDG.Unturned.ClientInstanceMethod
				static void SendScreenshotDestination_Set(unknown_type value);
				static unknown_type SendScreenshotRelay();                                      // SDG.Unturned.ServerInstanceMethod
				static void SendScreenshotRelay_Set(unknown_type value);
				unknown_type screenshotFinal();                                                 // UnityEngine.Texture2D
				void screenshotFinal_Set(unknown_type value);
				static unknown_type SendTakeScreenshot();                                       // SDG.Unturned.ClientInstanceMethod
				static void SendTakeScreenshot_Set(unknown_type value);
				static unknown_type SendBrowserRequest();                                       // SDG.Unturned.ClientInstanceMethod`2<System.String,System.String>
				static void SendBrowserRequest_Set(unknown_type value);
				static unknown_type SendHintMessage();                                          // SDG.Unturned.ClientInstanceMethod`2<System.String,System.Single>
				static void SendHintMessage_Set(unknown_type value);
				static unknown_type SendRelayToServer();                                        // SDG.Unturned.ClientInstanceMethod`5<System.UInt32,System.UInt16,Steamworks.CSteamID,System.String,System.Boolean>
				static void SendRelayToServer_Set(unknown_type value);
				unknown_type pluginWidgetFlags();                                               // SDG.Unturned.EPluginWidgetFlags
				void pluginWidgetFlags_Set(unknown_type value);
				static unknown_type SendSetPluginWidgetFlags();                                 // SDG.Unturned.ClientInstanceMethod`1<System.UInt32>
				static void SendSetPluginWidgetFlags_Set(unknown_type value);
				unknown_type _adminUsageFlags();                                                // SDG.Unturned.EPlayerAdminUsageFlags
				void _adminUsageFlags_Set(unknown_type value);
				static unknown_type SendAdminUsageFlags();                                      // SDG.Unturned.ServerInstanceMethod`1<System.UInt32>
				static void SendAdminUsageFlags_Set(unknown_type value);
				Boolean wantsBattlEyeLogs();                                                    // System.Boolean
				void wantsBattlEyeLogs_Set(Boolean value);
				static unknown_type SendBattlEyeLogsRequest();                                  // SDG.Unturned.ServerInstanceMethod
				static void SendBattlEyeLogsRequest_Set(unknown_type value);
				static unknown_type SendTerminalRelay();                                        // SDG.Unturned.ClientInstanceMethod`1<System.String>
				static void SendTerminalRelay_Set(unknown_type value);
				static Single TELEPORT_VERTICAL_OFFSET();                                       // System.Single
				static void TELEPORT_VERTICAL_OFFSET_Set(Single value);
				static unknown_type SendTeleport();                                             // SDG.Unturned.ClientInstanceMethod`2<UnityEngine.Vector3,System.Byte>
				static void SendTeleport_Set(unknown_type value);
				static unknown_type SendStat();                                                 // SDG.Unturned.ClientInstanceMethod`1<SDG.Unturned.EPlayerStat>
				static void SendStat_Set(unknown_type value);
				static unknown_type SendAchievementUnlocked();                                  // SDG.Unturned.ClientInstanceMethod`1<System.String>
				static void SendAchievementUnlocked_Set(unknown_type value);
				static unknown_type SendUIMessage();                                            // SDG.Unturned.ClientInstanceMethod`1<SDG.Unturned.EPlayerMessage>
				static void SendUIMessage_Set(unknown_type value);
				UInt32 maxRateLimitedActionsPerSecond();                                        // System.UInt32
				void maxRateLimitedActionsPerSecond_Set(UInt32 value);
				Single rateLimitedActionsCredits();                                             // System.Single
				void rateLimitedActionsCredits_Set(Single value);
				unknown_type _netId();                                                          // SDG.Unturned.NetId
				void _netId_Set(unknown_type value);
				void add_OnAdminUsageChanged(unknown_type value);
				void remove_OnAdminUsageChanged(unknown_type value);
				static void add_OnAnyPlayerAdminUsageChanged(unknown_type value);
				static void remove_OnAnyPlayerAdminUsageChanged(unknown_type value);
				static void add_onPlayerStatIncremented(unknown_type value);
				static void remove_onPlayerStatIncremented(unknown_type value);
				void add_onLocalPluginWidgetFlagsChanged(unknown_type value);
				void remove_onLocalPluginWidgetFlagsChanged(unknown_type value);
				static Boolean get_isLoading();
				static SDG::Unturned::Player* get_player();
				static SDG::Unturned::Player* get_instance();
				SDG::Unturned::SteamChannel* get_channel();
				SDG::Unturned::PlayerAnimator* get_animator();
				unknown_type get_clothing();
				SDG::Unturned::PlayerInventory* get_inventory();
				SDG::Unturned::PlayerEquipment* get_equipment();
				SDG::Unturned::PlayerLife* get_life();
				unknown_type get_crafting();
				unknown_type get_skills();
				SDG::Unturned::PlayerMovement* get_movement();
				SDG::Unturned::PlayerLook* get_look();
				unknown_type get_stance();
				unknown_type get_input();
				unknown_type get_voice();
				unknown_type get_interact();
				unknown_type get_workzone();
				SDG::Unturned::PlayerQuests* get_quests();
				UnityEngine::Transform* get_first();
				UnityEngine::Transform* get_third();
				UnityEngine::Transform* get_character();
				Boolean get_isSpotOn();
				unknown_type get_lightConfig();
				unknown_type PlayAudioReference(unknown_type audioReference);
				unknown_type playSound(unknown_type clip, Single volume, Single pitch, Single deviation);
				unknown_type playSound1(unknown_type clip, Single pitch, Single deviation);
				unknown_type playSound2(unknown_type clip, Single volume);
				unknown_type playSound3(unknown_type clip);
				void tellScreenshotDestination(unknown_type steamID);
				void ReceiveScreenshotDestination(unknown_type context);
				void HandleScreenshotData(Array<Byte>* data);
				void tellScreenshotRelay(unknown_type steamID);
				void ReceiveScreenshotRelay(unknown_type context);
				unknown_type takeScreenshot();
				void askScreenshot(unknown_type steamID);
				void ReceiveTakeScreenshot();
				void sendScreenshot(unknown_type destination, unknown_type callback);
				void askBrowserRequest(unknown_type steamID, String* msg, String* url);
				void ReceiveBrowserRequest(String* msg, String* url);
				void sendBrowserRequest(String* msg, String* url);
				void ReceiveHintMessage(String* message, Single durationSeconds);
				void ServerShowHint(String* message, Single durationSeconds);
				void askRelayToServer(unknown_type steamID, UInt32 ip, UInt16 port, String* password, Boolean shouldShowMenu);
				void ReceiveRelayToServer(UInt32 ip, UInt16 port, unknown_type serverCode, String* password, Boolean shouldShowMenu);
				void sendRelayToServer(UInt32 ip, UInt16 port, String* password, Boolean shouldShowMenu);
				void sendRelayToServer1(unknown_type serverCode, String* password, Boolean shouldShowMenu);
				void sendRelayToServer2(UInt32 ip, UInt16 port, String* password);
				Boolean get_inPluginModal();
				Boolean isPluginWidgetFlagActive(unknown_type flag);
				unknown_type get_pluginWidgetFlags();
				void set_pluginWidgetFlags(unknown_type value);
				void clientsideSetPluginWidgetFlags(unknown_type steamID, UInt32 newFlags);
				void ReceiveSetPluginWidgetFlags(UInt32 newFlags);
				void setAllPluginWidgetFlags(unknown_type newFlags);
				void enablePluginWidgetFlag(unknown_type flag);
				void disablePluginWidgetFlag(unknown_type flag);
				void setPluginWidgetFlag(unknown_type flag, Boolean active);
				void serversideSetPluginModal(Boolean enableModal);
				unknown_type get_AdminUsageFlags();
				void ReceiveAdminUsageFlags(unknown_type context, UInt32 newFlagsBitmask);
				void ClientSetAdminUsageFlags(unknown_type newFlags);
				void ClientSetAdminUsageFlagActive(unknown_type flag, Boolean active);
				Boolean get_wantsBattlEyeLogs();
				void set_wantsBattlEyeLogs(Boolean value);
				void askRequestBattlEyeLogs(unknown_type steamID);
				void ReceiveBattlEyeLogsRequest();
				void tellTerminalRelay(unknown_type steamID, String* internalMessage);
				void ReceiveTerminalRelay(String* internalMessage);
				void sendTerminalRelay(String* internalMessage, String* internalCategory, String* displayCategory);
				void sendTerminalRelay1(String* internalMessage);
				void PostTeleport();
				void askTeleport(unknown_type steamID, UnityEngine::Vector3 position, Byte angle);
				void ReceiveTeleport(UnityEngine::Vector3 position, Byte angle);
				void sendTeleport(UnityEngine::Vector3 position, Byte angle);
				Boolean teleportToPlayer(SDG::Unturned::Player* otherPlayer);
				Boolean teleportToLocation(UnityEngine::Vector3 position, Single yaw);
				Boolean teleportToRandomSpawnPoint();
				Boolean teleportToBed();
				Boolean adjustStanceOrTeleportIfStuck();
				void teleportToLocationUnsafe(UnityEngine::Vector3 position, Single yaw);
				void tellStat(unknown_type steamID, Byte newStat);
				void ReceiveStat(unknown_type stat);
				void tellAchievementUnlocked(unknown_type steamID, String* id);
				void ReceiveAchievementUnlocked(String* id);
				void trackStat(unknown_type stat);
				void sendStat(unknown_type kill);
				void sendStat1(unknown_type stat);
				void sendAchievementUnlocked(String* id);
				void askMessage(unknown_type steamID, Byte message);
				void ReceiveUIMessage(unknown_type message);
				void sendMessage(unknown_type message);
				void enableItemSpotLight(unknown_type config);
				void disableItemSpotLight();
				void updateGlassesLights(Boolean on);
				void enableHeadlamp(unknown_type config);
				void disableHeadlamp();
				void updateLights();
				void onPerspectiveUpdated(unknown_type newPerspective);
				Single get_rateLimitedActionsCredits();
				void set_rateLimitedActionsCredits(Single value);
				Boolean tryToPerformRateLimitedAction();
				void updateRateLimiting();
				void Update();
				void InitializePlayerStart();
				void AssignNetIdBlock(unknown_type baseId);
				void InitializePlayer();
				void SendInitialPlayerState(SDG::Unturned::SteamPlayer* client);
				void SendInitialPlayerState1(List<unknown_type>* transportConnections);
				void ReleaseNetIdBlock();
				void Awake();
				void OnDestroy();
				void save();
				void savePositionAndRotation();
				unknown_type GetNetId();
			};
			class PlayerAnimator
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static PlayerAnimator* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static Byte SAVEDATA_VERSION();                                                 // System.Byte
				static void SAVEDATA_VERSION_Set(Byte value);
				static Single BOB_SPRINT();                                                     // System.Single
				static void BOB_SPRINT_Set(Single value);
				static Single BOB_STAND();                                                      // System.Single
				static void BOB_STAND_Set(Single value);
				static Single BOB_CROUCH();                                                     // System.Single
				static void BOB_CROUCH_Set(Single value);
				static Single BOB_PRONE();                                                      // System.Single
				static void BOB_PRONE_Set(Single value);
				static Single BOB_SWIM();                                                       // System.Single
				static void BOB_SWIM_Set(Single value);
				static Single TILT_SPRINT();                                                    // System.Single
				static void TILT_SPRINT_Set(Single value);
				static Single TILT_STAND();                                                     // System.Single
				static void TILT_STAND_Set(Single value);
				static Single TILT_CROUCH();                                                    // System.Single
				static void TILT_CROUCH_Set(Single value);
				static Single TILT_PRONE();                                                     // System.Single
				static void TILT_PRONE_Set(Single value);
				static Single TILT_SWIM();                                                      // System.Single
				static void TILT_SWIM_Set(Single value);
				static Single SPEED_SPRINT();                                                   // System.Single
				static void SPEED_SPRINT_Set(Single value);
				static Single SPEED_STAND();                                                    // System.Single
				static void SPEED_STAND_Set(Single value);
				static Single SPEED_CROUCH();                                                   // System.Single
				static void SPEED_CROUCH_Set(Single value);
				static Single SPEED_PRONE();                                                    // System.Single
				static void SPEED_PRONE_Set(Single value);
				static Single SPEED_SWIM();                                                     // System.Single
				static void SPEED_SWIM_Set(Single value);
				unknown_type onGestureUpdated();                                                // SDG.Unturned.GestureUpdated
				void onGestureUpdated_Set(unknown_type value);
				static unknown_type OnGestureChanged_Global();                                  // System.Action`2<SDG.Unturned.PlayerAnimator,SDG.Unturned.EPlayerGesture>
				static void OnGestureChanged_Global_Set(unknown_type value);
				UnityEngine::Transform* viewmodelParentTransform();                             // UnityEngine.Transform
				void viewmodelParentTransform_Set(UnityEngine::Transform* value);
				unknown_type firstAnimator();                                                   // SDG.Unturned.CharacterAnimator
				void firstAnimator_Set(unknown_type value);
				unknown_type thirdAnimator();                                                   // SDG.Unturned.CharacterAnimator
				void thirdAnimator_Set(unknown_type value);
				unknown_type characterAnimator();                                               // SDG.Unturned.HumanAnimator
				void characterAnimator_Set(unknown_type value);
				unknown_type firstRenderer_0();                                                 // UnityEngine.SkinnedMeshRenderer
				void firstRenderer_0_Set(unknown_type value);
				unknown_type thirdRenderer_0();                                                 // UnityEngine.SkinnedMeshRenderer
				void thirdRenderer_0_Set(unknown_type value);
				unknown_type thirdRenderer_1();                                                 // UnityEngine.SkinnedMeshRenderer
				void thirdRenderer_1_Set(unknown_type value);
				UnityEngine::Transform* _firstSkeleton();                                       // UnityEngine.Transform
				void _firstSkeleton_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _thirdSkeleton();                                       // UnityEngine.Transform
				void _thirdSkeleton_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* viewmodelCameraTransform();                             // UnityEngine.Transform
				void viewmodelCameraTransform_Set(UnityEngine::Transform* value);
				UnityEngine::Camera* viewmodelCamera();                                         // UnityEngine.Camera
				void viewmodelCamera_Set(UnityEngine::Camera* value);
				UnityEngine::Vector3 viewmodelCameraLocalPositionOffset();                      // UnityEngine.Vector3
				void viewmodelCameraLocalPositionOffset_Set(UnityEngine::Vector3 value);
				UnityEngine::Vector3 turretViewmodelCameraLocalPositionOffset();                // UnityEngine.Vector3
				void turretViewmodelCameraLocalPositionOffset_Set(UnityEngine::Vector3 value);
				UnityEngine::Vector3 scopeSway();                                               // UnityEngine.Vector3
				void scopeSway_Set(UnityEngine::Vector3 value);
				Single blendedViewmodelSwayMultiplier();                                        // System.Single
				void blendedViewmodelSwayMultiplier_Set(Single value);
				Single viewmodelSwayMultiplier();                                               // System.Single
				void viewmodelSwayMultiplier_Set(Single value);
				Single blendedViewmodelOffsetPreferenceMultiplier();                            // System.Single
				void blendedViewmodelOffsetPreferenceMultiplier_Set(Single value);
				Single viewmodelOffsetPreferenceMultiplier();                                   // System.Single
				void viewmodelOffsetPreferenceMultiplier_Set(Single value);
				UnityEngine::Vector3 blendedViewmodelCameraLocalPositionOffset();               // UnityEngine.Vector3
				void blendedViewmodelCameraLocalPositionOffset_Set(UnityEngine::Vector3 value);
				unknown_type recoilViewmodelCameraOffset();                                     // SDG.Unturned.Rk4Spring3
				void recoilViewmodelCameraOffset_Set(unknown_type value);
				unknown_type recoilViewmodelCameraRotation();                                   // SDG.Unturned.Rk4Spring3
				void recoilViewmodelCameraRotation_Set(unknown_type value);
				UnityEngine::Vector3 recoilViewmodelCameraMask();                               // UnityEngine.Vector3
				void recoilViewmodelCameraMask_Set(UnityEngine::Vector3 value);
				UnityEngine::Vector3 bayonetViewmodelCameraOffset();                            // UnityEngine.Vector3
				void bayonetViewmodelCameraOffset_Set(UnityEngine::Vector3 value);
				unknown_type viewmodelMovementOffset();                                         // SDG.Unturned.Rk4Spring2
				void viewmodelMovementOffset_Set(unknown_type value);
				UnityEngine::Vector3 viewmodelCameraLocalPosition();                            // UnityEngine.Vector3
				void viewmodelCameraLocalPosition_Set(UnityEngine::Vector3 value);
				unknown_type viewmodelTargetExplosionLocalRotation();                           // SDG.Unturned.Rk4SpringQ
				void viewmodelTargetExplosionLocalRotation_Set(unknown_type value);
				UnityEngine::Quaternion viewmodelSmoothedExplosionLocalRotation();              // UnityEngine.Quaternion
				void viewmodelSmoothedExplosionLocalRotation_Set(UnityEngine::Quaternion value);
				Single viewmodelExplosionSmoothingSpeed();                                      // System.Single
				void viewmodelExplosionSmoothingSpeed_Set(Single value);
				Boolean isHiddenWaitingForClothing();                                           // System.Boolean
				void isHiddenWaitingForClothing_Set(Boolean value);
				UnityEngine::Vector3 desiredViewmodelCameraLocalPosition();                     // UnityEngine.Vector3
				void desiredViewmodelCameraLocalPosition_Set(UnityEngine::Vector3 value);
				unknown_type viewmodelCameraMovementLocalRotation();                            // SDG.Unturned.Rk4Spring2
				void viewmodelCameraMovementLocalRotation_Set(unknown_type value);
				UnityEngine::Vector3 viewmodelCameraLocalRotation();                            // UnityEngine.Vector3
				void viewmodelCameraLocalRotation_Set(UnityEngine::Vector3 value);
				Single lastFramePitchInput();                                                   // System.Single
				void lastFramePitchInput_Set(Single value);
				Single lastFrameYawInput();                                                     // System.Single
				void lastFrameYawInput_Set(Single value);
				unknown_type rotationInputViewmodelRoll();                                      // SDG.Unturned.Rk4Spring3
				void rotationInputViewmodelRoll_Set(unknown_type value);
				Boolean lastFrameHadItemPosition();                                             // System.Boolean
				void lastFrameHadItemPosition_Set(Boolean value);
				UnityEngine::Vector3 lastFrameItemPosition();                                   // UnityEngine.Vector3
				void lastFrameItemPosition_Set(UnityEngine::Vector3 value);
				unknown_type viewmodelItemInertiaRotation();                                    // SDG.Unturned.Rk4Spring3
				void viewmodelItemInertiaRotation_Set(unknown_type value);
				UnityEngine::Vector3 viewmodelItemInertiaMask();                                // UnityEngine.Vector3
				void viewmodelItemInertiaMask_Set(UnityEngine::Vector3 value);
				Boolean inputWantsToLeanLeft();                                                 // System.Boolean
				void inputWantsToLeanLeft_Set(Boolean value);
				Boolean inputWantsToLeanRight();                                                // System.Boolean
				void inputWantsToLeanRight_Set(Boolean value);
				Boolean leanObstructed();                                                       // System.Boolean
				void leanObstructed_Set(Boolean value);
				Single lastCameraSideInputRealtime();                                           // System.Single
				void lastCameraSideInputRealtime_Set(Single value);
				Int32 lastLean();                                                               // System.Int32
				void lastLean_Set(Int32 value);
				Int32 _lean();                                                                  // System.Int32
				void _lean_Set(Int32 value);
				Single _shoulder();                                                             // System.Single
				void _shoulder_Set(Single value);
				Single _shoulder2();                                                            // System.Single
				void _shoulder2_Set(Single value);
				Boolean inputWantsThirdPersonCameraOnLeftSide();                                // System.Boolean
				void inputWantsThirdPersonCameraOnLeftSide_Set(Boolean value);
				unknown_type _gesture();                                                        // SDG.Unturned.EPlayerGesture
				void _gesture_Set(unknown_type value);
				unknown_type captorID();                                                        // Steamworks.CSteamID
				void captorID_Set(unknown_type value);
				UInt16 captorItem();                                                            // System.UInt16
				void captorItem_Set(UInt16 value);
				UInt16 captorStrength();                                                        // System.UInt16
				void captorStrength_Set(UInt16 value);
				static unknown_type OnLeanChanged_Global();                                     // System.Action`1<SDG.Unturned.PlayerAnimator>
				static void OnLeanChanged_Global_Set(unknown_type value);
				static unknown_type SendLean();                                                 // SDG.Unturned.ClientInstanceMethod`1<System.Byte>
				static void SendLean_Set(unknown_type value);
				static unknown_type SendGesture();                                              // SDG.Unturned.ClientInstanceMethod`1<SDG.Unturned.EPlayerGesture>
				static void SendGesture_Set(unknown_type value);
				unknown_type onInventoryGesture();                                              // SDG.Unturned.PlayerAnimator/InventoryGestureListener
				void onInventoryGesture_Set(unknown_type value);
				static unknown_type SendGestureRequest();                                       // SDG.Unturned.ServerInstanceMethod`1<SDG.Unturned.EPlayerGesture>
				static void SendGestureRequest_Set(unknown_type value);
				static Array<unknown_type>* leanHits();                                         // UnityEngine.Collider[]
				static void leanHits_Set(Array<unknown_type>* value);
				static unknown_type Metal_1_Ref();                                              // SDG.Unturned.AssetReference`1<SDG.Unturned.EffectAsset>
				static void Metal_1_Ref_Set(unknown_type value);
				Boolean hasCalledUpdateLocalPlayerModelVisibility();                            // System.Boolean
				void hasCalledUpdateLocalPlayerModelVisibility_Set(Boolean value);
				Boolean wasLocalPlayerFirstPersonModelVisible();                                // System.Boolean
				void wasLocalPlayerFirstPersonModelVisible_Set(Boolean value);
				Boolean wasLocalPlayerThirdPersonModelVisible();                                // System.Boolean
				void wasLocalPlayerThirdPersonModelVisible_Set(Boolean value);
				Boolean wasLoadCalled();                                                        // System.Boolean
				void wasLoadCalled_Set(Boolean value);
				static void add_OnGestureChanged_Global(unknown_type value);
				static void remove_OnGestureChanged_Global(unknown_type value);
				UnityEngine::Transform* get_firstSkeleton();
				UnityEngine::Transform* get_thirdSkeleton();
				Boolean get_leanLeft();
				Boolean get_leanRight();
				Int32 get_lean();
				Single get_shoulder();
				Single get_shoulder2();
				Boolean get_side();
				unknown_type get_gesture();
				void addAnimation(unknown_type clip);
				void removeAnimation(unknown_type clip);
				void setAnimationSpeed(String* name, Single speed);
				Single getAnimationLength(String* name);
				Single GetAnimationLength(String* name, Boolean scaled);
				Boolean checkExists(String* name);
				void play(String* name, Boolean smooth);
				void stop(String* name);
				void mixAnimation(String* name);
				void mixAnimation1(String* name, Boolean mixLeftShoulder, Boolean mixRightShoulder);
				void mixAnimation2(String* name, Boolean mixLeftShoulder, Boolean mixRightShoulder, Boolean mixSkull);
				void AddRecoilViewmodelCameraOffset(Single shake_x, Single shake_y, Single shake_z);
				void AddRecoilViewmodelCameraRotation(Single cameraYaw, Single cameraPitch);
				void AddBayonetViewmodelCameraOffset(Single fling_x, Single fling_y, Single fling_z);
				void FlinchFromExplosion(UnityEngine::Vector3 worldRotationAxis, Single adjustedMagnitudeDegrees);
				Single get_bob();
				Single get_tilt();
				Single get_roll();
				Single get_speed();
				void onLifeUpdated(Boolean isDead);
				void NotifyClothingIsVisible();
				static void add_OnLeanChanged_Global(unknown_type value);
				static void remove_OnLeanChanged_Global(unknown_type value);
				void tellLean(unknown_type steamID, Byte newLean);
				void ReceiveLean(Byte newLean);
				void tellGesture(unknown_type steamID, Byte id);
				void ReceiveGesture(unknown_type newGesture);
				void askGesture(unknown_type steamID, Byte id);
				void ReceiveGestureRequest(unknown_type newGesture);
				void sendGesture(unknown_type gesture, Boolean all);
				void updateState(unknown_type charAnim);
				void updateHuman(unknown_type humanAnim);
				void onLanded(Single velocity);
				Boolean isLeanSpaceEmpty(UnityEngine::Vector3 direction);
				Boolean ShouldSnapLeanRotationToZero();
				void simulate(UInt32 simulation, Boolean inputLeanLeft, Boolean inputLeanRight);
				void askEmote(unknown_type steamID);
				void SendInitialPlayerState(SDG::Unturned::SteamPlayer* client);
				void SendInitialPlayerState1(List<unknown_type>* transportConnections);
				void UpdateLocalPlayerModelVisibility(Boolean isDead, unknown_type perspective, Boolean isCutsceneModeActive);
				void NotifyLocalPlayerCutsceneModeActiveChanged(Boolean isCutsceneModeActive);
				void onPerspectiveUpdated(unknown_type newPerspective);
				void Update();
				void LateUpdate();
				void InitializePlayer();
				void AddNearDeathViewmodelShake(UnityEngine::Vector3& position);
				void GetAimingViewmodelAlignment(UnityEngine::Vector3& aimingAlignmentOffset, unknown_type aimingInertaMultiplier);
				void load();
				void save();
			};
			class PlayerEquipment
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static PlayerEquipment* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static Byte SAVEDATA_VERSION();                                                 // System.Byte
				static void SAVEDATA_VERSION_Set(Byte value);
				static Single DAMAGE_BARRICADE();                                               // System.Single
				static void DAMAGE_BARRICADE_Set(Single value);
				static Single DAMAGE_STRUCTURE();                                               // System.Single
				static void DAMAGE_STRUCTURE_Set(Single value);
				static Single DAMAGE_VEHICLE();                                                 // System.Single
				static void DAMAGE_VEHICLE_Set(Single value);
				static Single DAMAGE_RESOURCE();                                                // System.Single
				static void DAMAGE_RESOURCE_Set(Single value);
				static Single DAMAGE_OBJECT();                                                  // System.Single
				static void DAMAGE_OBJECT_Set(Single value);
				static unknown_type DAMAGE_PLAYER_MULTIPLIER();                                 // SDG.Unturned.PlayerDamageMultiplier
				static void DAMAGE_PLAYER_MULTIPLIER_Set(unknown_type value);
				static unknown_type DAMAGE_ZOMBIE_MULTIPLIER();                                 // SDG.Unturned.ZombieDamageMultiplier
				static void DAMAGE_ZOMBIE_MULTIPLIER_Set(unknown_type value);
				static unknown_type DAMAGE_ANIMAL_MULTIPLIER();                                 // SDG.Unturned.AnimalDamageMultiplier
				static void DAMAGE_ANIMAL_MULTIPLIER_Set(unknown_type value);
				unknown_type onEquipRequested();                                                // SDG.Unturned.PlayerEquipRequestHandler
				void onEquipRequested_Set(unknown_type value);
				unknown_type onDequipRequested();                                               // SDG.Unturned.PlayerDequipRequestHandler
				void onDequipRequested_Set(unknown_type value);
				static unknown_type OnUseableChanged_Global();                                  // System.Action`1<SDG.Unturned.PlayerEquipment>
				static void OnUseableChanged_Global_Set(unknown_type value);
				static unknown_type OnInspectingUseable_Global();                               // System.Action`1<SDG.Unturned.PlayerEquipment>
				static void OnInspectingUseable_Global_Set(unknown_type value);
				unknown_type skinRagdollEffect();                                               // SDG.Unturned.ERagdollEffect
				void skinRagdollEffect_Set(unknown_type value);
				Array<Byte>* _state();                                                          // System.Byte[]
				void _state_Set(Array<Byte>* value);
				Byte _quality();                                                                // System.Byte
				void _quality_Set(Byte value);
				Array<UnityEngine::Transform*>* thirdSlots();                                   // UnityEngine.Transform[]
				void thirdSlots_Set(Array<UnityEngine::Transform*>* value);
				Array<Boolean>* thirdSkinneds();                                                // System.Boolean[]
				void thirdSkinneds_Set(Array<Boolean>* value);
				Array<List<unknown_type>*>* tempThirdMeshes();                                  // System.Collections.Generic.List`1<UnityEngine.Mesh>[]
				void tempThirdMeshes_Set(Array<List<unknown_type>*>* value);
				Array<unknown_type>* tempThirdMaterials();                                      // UnityEngine.Material[]
				void tempThirdMaterials_Set(Array<unknown_type>* value);
				Array<unknown_type>* thirdMythics();                                            // SDG.Unturned.MythicLockee[]
				void thirdMythics_Set(Array<unknown_type>* value);
				Array<UnityEngine::Transform*>* characterSlots();                               // UnityEngine.Transform[]
				void characterSlots_Set(Array<UnityEngine::Transform*>* value);
				Array<Boolean>* characterSkinneds();                                            // System.Boolean[]
				void characterSkinneds_Set(Array<Boolean>* value);
				Array<List<unknown_type>*>* tempCharacterMeshes();                              // System.Collections.Generic.List`1<UnityEngine.Mesh>[]
				void tempCharacterMeshes_Set(Array<List<unknown_type>*>* value);
				Array<unknown_type>* tempCharacterMaterials();                                  // UnityEngine.Material[]
				void tempCharacterMaterials_Set(Array<unknown_type>* value);
				Array<unknown_type>* characterMythics();                                        // SDG.Unturned.MythicLockee[]
				void characterMythics_Set(Array<unknown_type>* value);
				UnityEngine::Transform* _firstModel();                                          // UnityEngine.Transform
				void _firstModel_Set(UnityEngine::Transform* value);
				Boolean firstSkinned();                                                         // System.Boolean
				void firstSkinned_Set(Boolean value);
				List<unknown_type>* tempFirstMesh();                                            // System.Collections.Generic.List`1<UnityEngine.Mesh>
				void tempFirstMesh_Set(List<unknown_type>* value);
				unknown_type tempFirstMaterial();                                               // UnityEngine.Material
				void tempFirstMaterial_Set(unknown_type value);
				unknown_type firstMythic();                                                     // SDG.Unturned.MythicLockee
				void firstMythic_Set(unknown_type value);
				UnityEngine::Transform* _thirdModel();                                          // UnityEngine.Transform
				void _thirdModel_Set(UnityEngine::Transform* value);
				Boolean thirdSkinned();                                                         // System.Boolean
				void thirdSkinned_Set(Boolean value);
				List<unknown_type>* tempThirdMesh();                                            // System.Collections.Generic.List`1<UnityEngine.Mesh>
				void tempThirdMesh_Set(List<unknown_type>* value);
				unknown_type tempThirdMaterial();                                               // UnityEngine.Material
				void tempThirdMaterial_Set(unknown_type value);
				unknown_type thirdMythic();                                                     // SDG.Unturned.MythicLockee
				void thirdMythic_Set(unknown_type value);
				UnityEngine::Transform* _characterModel();                                      // UnityEngine.Transform
				void _characterModel_Set(UnityEngine::Transform* value);
				Boolean characterSkinned();                                                     // System.Boolean
				void characterSkinned_Set(Boolean value);
				List<unknown_type>* tempCharacterMesh();                                        // System.Collections.Generic.List`1<UnityEngine.Mesh>
				void tempCharacterMesh_Set(List<unknown_type>* value);
				unknown_type tempCharacterMaterial();                                           // UnityEngine.Material
				void tempCharacterMaterial_Set(unknown_type value);
				unknown_type characterMythic();                                                 // SDG.Unturned.MythicLockee
				void characterMythic_Set(unknown_type value);
				SDG::Unturned::ItemAsset* _asset();                                             // SDG.Unturned.ItemAsset
				void _asset_Set(SDG::Unturned::ItemAsset* value);
				unknown_type _useable();                                                        // SDG.Unturned.Useable
				void _useable_Set(unknown_type value);
				UnityEngine::Transform* _thirdPrimaryMeleeSlot();                               // UnityEngine.Transform
				void _thirdPrimaryMeleeSlot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _thirdPrimaryLargeGunSlot();                            // UnityEngine.Transform
				void _thirdPrimaryLargeGunSlot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _thirdPrimarySmallGunSlot();                            // UnityEngine.Transform
				void _thirdPrimarySmallGunSlot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _thirdSecondaryMeleeSlot();                             // UnityEngine.Transform
				void _thirdSecondaryMeleeSlot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _thirdSecondaryGunSlot();                               // UnityEngine.Transform
				void _thirdSecondaryGunSlot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _characterPrimaryMeleeSlot();                           // UnityEngine.Transform
				void _characterPrimaryMeleeSlot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _characterPrimaryLargeGunSlot();                        // UnityEngine.Transform
				void _characterPrimaryLargeGunSlot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _characterPrimarySmallGunSlot();                        // UnityEngine.Transform
				void _characterPrimarySmallGunSlot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _characterSecondaryMeleeSlot();                         // UnityEngine.Transform
				void _characterSecondaryMeleeSlot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _characterSecondaryGunSlot();                           // UnityEngine.Transform
				void _characterSecondaryGunSlot_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _firstLeftHook();                                       // UnityEngine.Transform
				void _firstLeftHook_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _firstRightHook();                                      // UnityEngine.Transform
				void _firstRightHook_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _thirdLeftHook();                                       // UnityEngine.Transform
				void _thirdLeftHook_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _thirdRightHook();                                      // UnityEngine.Transform
				void _thirdRightHook_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _characterLeftHook();                                   // UnityEngine.Transform
				void _characterLeftHook_Set(UnityEngine::Transform* value);
				UnityEngine::Transform* _characterRightHook();                                  // UnityEngine.Transform
				void _characterRightHook_Set(UnityEngine::Transform* value);
				Array<unknown_type>* _hotkeys();                                                // SDG.Unturned.HotkeyInfo[]
				void _hotkeys_Set(Array<unknown_type>* value);
				unknown_type onHotkeysUpdated();                                                // SDG.Unturned.HotkeysUpdated
				void onHotkeysUpdated_Set(unknown_type value);
				Boolean wasTryingToSelect();                                                    // System.Boolean
				void wasTryingToSelect_Set(Boolean value);
				Boolean isTurret();                                                             // System.Boolean
				void isTurret_Set(Boolean value);
				Boolean isBusy();                                                               // System.Boolean
				void isBusy_Set(Boolean value);
				Boolean canEquip();                                                             // System.Boolean
				void canEquip_Set(Boolean value);
				Byte slot();                                                                    // System.Byte
				void slot_Set(Byte value);
				Boolean arePrimaryAndSecondaryInputsReversedByHallucination();                  // System.Boolean
				void arePrimaryAndSecondaryInputsReversedByHallucination_Set(Boolean value);
				Byte _equippedPage();                                                           // System.Byte
				void _equippedPage_Set(Byte value);
				Byte _equipped_x();                                                             // System.Byte
				void _equipped_x_Set(Byte value);
				Byte _equipped_y();                                                             // System.Byte
				void _equipped_y_Set(Byte value);
				Boolean wasUsablePrimaryStarted();                                              // System.Boolean
				void wasUsablePrimaryStarted_Set(Boolean value);
				Boolean wasUsableSecondaryStarted();                                            // System.Boolean
				void wasUsableSecondaryStarted_Set(Boolean value);
				Boolean localWantsToAim();                                                      // System.Boolean
				void localWantsToAim_Set(Boolean value);
				Boolean hasVision();                                                            // System.Boolean
				void hasVision_Set(Boolean value);
				Single lastPunching();                                                          // System.Single
				void lastPunching_Set(Single value);
				Double equipAnimCompletedTime();                                                // System.Double
				void equipAnimCompletedTime_Set(Double value);
				UInt32 equipAnimStartedFrame();                                                 // System.UInt32
				void equipAnimStartedFrame_Set(UInt32 value);
				UInt32 equipAnimLengthFrames();                                                 // System.UInt32
				void equipAnimLengthFrames_Set(UInt32 value);
				Single lastEquip();                                                             // System.Single
				void lastEquip_Set(Single value);
				UInt32 lastPunch();                                                             // System.UInt32
				void lastPunch_Set(UInt32 value);
				static Single lastInspect();                                                    // System.Single
				static void lastInspect_Set(Single value);
				static Single inspectTime();                                                    // System.Single
				static void inspectTime_Set(Single value);
				Boolean localWasPrimaryHeldLastFrame();                                         // System.Boolean
				void localWasPrimaryHeldLastFrame_Set(Boolean value);
				Boolean localWasPrimaryPressedBetweenSimulationFrames();                        // System.Boolean
				void localWasPrimaryPressedBetweenSimulationFrames_Set(Boolean value);
				Boolean localWasPrimaryReleasedBetweenSimulationFrames();                       // System.Boolean
				void localWasPrimaryReleasedBetweenSimulationFrames_Set(Boolean value);
				Boolean localWasSecondaryHeldLastFrame();                                       // System.Boolean
				void localWasSecondaryHeldLastFrame_Set(Boolean value);
				Boolean localWasSecondaryPressedBetweenSimulationFrames();                      // System.Boolean
				void localWasSecondaryPressedBetweenSimulationFrames_Set(Boolean value);
				Boolean localWasSecondaryReleasedBetweenSimulationFrames();                     // System.Boolean
				void localWasSecondaryReleasedBetweenSimulationFrames_Set(Boolean value);
				static unknown_type SendItemHotkeySuggestion();                                 // SDG.Unturned.ClientInstanceMethod`5<System.Byte,System.Guid,System.Byte,System.Byte,System.Byte>
				static void SendItemHotkeySuggestion_Set(unknown_type value);
				unknown_type inspectAudioHandle();                                              // SDG.Unturned.OneShotAudioHandle
				void inspectAudioHandle_Set(unknown_type value);
				unknown_type equipAudioHandle();                                                // SDG.Unturned.OneShotAudioHandle
				void equipAudioHandle_Set(unknown_type value);
				static unknown_type SendToggleVisionRequest();                                  // SDG.Unturned.ServerInstanceMethod
				static void SendToggleVisionRequest_Set(unknown_type value);
				static unknown_type BeepRef();                                                  // SDG.Unturned.AssetReference`1<SDG.Unturned.EffectAsset>
				static void BeepRef_Set(unknown_type value);
				static unknown_type SendToggleVision();                                         // SDG.Unturned.ClientInstanceMethod
				static void SendToggleVision_Set(unknown_type value);
				static unknown_type SendSlot();                                                 // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.UInt16,System.Byte[]>
				static void SendSlot_Set(unknown_type value);
				static unknown_type SendUpdateStateTemp();                                      // SDG.Unturned.ClientInstanceMethod`1<System.Byte[]>
				static void SendUpdateStateTemp_Set(unknown_type value);
				static unknown_type SendUpdateState();                                          // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte[]>
				static void SendUpdateState_Set(unknown_type value);
				static unknown_type SendEquip();                                                // SDG.Unturned.ClientInstanceMethod`7<System.Byte,System.Byte,System.Byte,System.Guid,System.Byte,System.Byte[],SDG.Unturned.NetId>
				static void SendEquip_Set(unknown_type value);
				static unknown_type SendEquipRequest();                                         // SDG.Unturned.ServerInstanceMethod`3<System.Byte,System.Byte,System.Byte>
				static void SendEquipRequest_Set(unknown_type value);
				Byte page_A();                                                                  // System.Byte
				void page_A_Set(Byte value);
				Byte x_A();                                                                     // System.Byte
				void x_A_Set(Byte value);
				Byte y_A();                                                                     // System.Byte
				void y_A_Set(Byte value);
				Byte rot_A();                                                                   // System.Byte
				void rot_A_Set(Byte value);
				Boolean ignoreDequip_A();                                                       // System.Boolean
				void ignoreDequip_A_Set(Boolean value);
				static unknown_type OnPunch_Global();                                           // System.Action`2<SDG.Unturned.PlayerEquipment,SDG.Unturned.EPlayerPunch>
				static void OnPunch_Global_Set(unknown_type value);
				static unknown_type punchClipRef();                                             // SDG.Unturned.MasterBundleReference`1<UnityEngine.AudioClip>
				static void punchClipRef_Set(unknown_type value);
				static void add_OnUseableChanged_Global(unknown_type value);
				static void remove_OnUseableChanged_Global(unknown_type value);
				static void add_OnInspectingUseable_Global(unknown_type value);
				static void remove_OnInspectingUseable_Global(unknown_type value);
				UInt16 get_itemID();
				void set_state(Array<Byte>* value);
				Array<Byte>* get_state();
				Byte get_quality();
				void set_quality(Byte value);
				UnityEngine::Transform* get_firstModel();
				UnityEngine::Transform* get_thirdModel();
				UnityEngine::Transform* get_characterModel();
				SDG::Unturned::ItemAsset* get_asset();
				unknown_type get_useable();
				UnityEngine::Transform* get_thirdPrimaryMeleeSlot();
				UnityEngine::Transform* get_thirdPrimaryLargeGunSlot();
				UnityEngine::Transform* get_thirdPrimarySmallGunSlot();
				UnityEngine::Transform* get_thirdSecondaryMeleeSlot();
				UnityEngine::Transform* get_thirdSecondaryGunSlot();
				UnityEngine::Transform* get_characterPrimaryMeleeSlot();
				UnityEngine::Transform* get_characterPrimaryLargeGunSlot();
				UnityEngine::Transform* get_characterPrimarySmallGunSlot();
				UnityEngine::Transform* get_characterSecondaryMeleeSlot();
				UnityEngine::Transform* get_characterSecondaryGunSlot();
				UnityEngine::Transform* get_firstLeftHook();
				UnityEngine::Transform* get_firstRightHook();
				UnityEngine::Transform* get_thirdLeftHook();
				UnityEngine::Transform* get_thirdRightHook();
				UnityEngine::Transform* get_characterLeftHook();
				UnityEngine::Transform* get_characterRightHook();
				Array<unknown_type>* get_hotkeys();
				Boolean isItemHotkeyed(Byte page, Byte index, unknown_type jar, unknown_type button);
				Boolean get_HasValidUseable();
				Boolean get_IsEquipAnimationFinished();
				Boolean get_isTurret();
				void set_isTurret(Boolean value);
				Boolean get_isUseableShowingMenu();
				Byte get_equippedPage();
				Byte get_equipped_x();
				Byte get_equipped_y();
				Boolean get_primary();
				Boolean get_secondary();
				Single get_lastPunching();
				void set_lastPunching(Single value);
				Boolean get_isInspecting();
				Boolean get_canInspect();
				unknown_type getUseableRagdollEffect();
				void ServerBindItemHotkey(Byte hotkeyIndex, SDG::Unturned::ItemAsset* expectedItem, Byte page, Byte x, Byte y);
				void ServerClearItemHotkey(Byte hotkeyIndex);
				void ReceiveItemHotkeySuggeston(unknown_type context, Byte hotkeyIndex, unknown_type expectedAssetGuid, Byte page, Byte x, Byte y);
				void ClearDuplicateHotkeys(Int32 newHotkeyIndex);
				Boolean getUseableStatTrackerValue(unknown_type type, unknown_type kills);
				Boolean getSlot0StatTrackerValue(unknown_type type, unknown_type kills);
				Boolean getSlot1StatTrackerValue(unknown_type type, unknown_type kills);
				void fixStatTrackerHookScale(UnityEngine::Transform* itemModelTransform);
				void ApplyEquipableLocalScale(SDG::Unturned::ItemAsset* asset, UnityEngine::Transform* itemModelTransform);
				void syncStatTrackTrackerVisibility(UnityEngine::Transform* itemModelTransform);
				void syncAllStatTrackerVisibility();
				void inspect();
				void InvokeOnInspectingUseable();
				void uninspect();
				Boolean checkSelection(Byte page);
				Boolean checkSelection1(Byte page, Byte x, Byte y);
				void applySkinVisual();
				void applyMythicVisual();
				void updateSlot(Byte slot, UInt16 id, Array<Byte>* state);
				void askToggleVision(unknown_type steamID);
				void ReceiveToggleVisionRequest();
				void tellToggleVision(unknown_type steamID);
				void ReceiveToggleVision();
				void tellSlot(unknown_type steamID, Byte slot, UInt16 id, Array<Byte>* state);
				void ReceiveSlot(Byte slot, UInt16 id, Array<Byte>* state);
				void tellUpdateStateTemp(unknown_type steamID, Array<Byte>* newState);
				void ReceiveUpdateStateTemp(Array<Byte>* newState);
				void tellUpdateState(unknown_type steamID, Byte page, Byte index, Array<Byte>* newState);
				void ReceiveUpdateState(Byte page, Byte index, Array<Byte>* newState);
				void tellEquip(unknown_type steamID, Byte page, Byte x, Byte y, UInt16 id, Byte newQuality, Array<Byte>* newState);
				void ReceiveEquip(Byte page, Byte x, Byte y, unknown_type newAssetGuid, Byte newQuality, Array<Byte>* newState, unknown_type useableNetId);
				void tryEquip(Byte page, Byte x, Byte y);
				void tryEquip1(Byte page, Byte x, Byte y, Array<Byte>* hash);
				void ServerEquip(Byte page, Byte x, Byte y);
				void turretEquipClient();
				void turretEquipServer(UInt16 id, Array<Byte>* state);
				void turretDequipClient();
				void turretDequipServer();
				void askEquip(unknown_type steamID, Byte page, Byte x, Byte y, Array<Byte>* hash);
				void ReceiveEquipRequest(Byte page, Byte x, Byte y);
				void askEquipment(unknown_type steamID);
				void SendInitialPlayerState(SDG::Unturned::SteamPlayer* client);
				void SendInitialPlayerState1(List<unknown_type>* transportConnections);
				void updateState();
				void updateQuality();
				void sendUpdateState();
				void sendUpdateQuality();
				void sendSlot(Byte slot);
				void equip(Byte page, Byte x, Byte y);
				void ClientEquipAfterItemDrag(Byte page, Byte x, Byte y);
				void dequip();
				void use();
				void useStepA();
				void useStepB();
				void PlayPunchAudioClip();
				void punch(unknown_type mode);
				Boolean simulate_MustDequip();
				Boolean StartUsablePrimary();
				void StopUsablePrimary();
				Boolean StartUsableSecondary();
				void StopUsableSecondary();
				void simulate_UseableInput(UInt32 simulation, unknown_type inputPrimary, unknown_type inputSecondary, Boolean inputSteady);
				void simulate_PunchInput(UInt32 simulation, unknown_type inputPrimary, unknown_type inputSecondary);
				void simulate(UInt32 simulation, unknown_type inputPrimary, unknown_type inputSecondary, Boolean inputSteady);
				void tock(UInt32 clock);
				void updateVision();
				void onVisionUpdated(Boolean isViewing);
				void onPerspectiveUpdated(unknown_type perspective);
				void onGlassesUpdated(UInt16 id, Byte quality, Array<Byte>* state);
				void OnVisualToggleChanged(unknown_type sender);
				void onLifeUpdated(Boolean isDead);
				void bindHotkey(Byte button);
				void hotkey(Byte button);
				void Update();
				void InitializePlayer();
				void CaptureAttackInputs(unknown_type primaryAttack, unknown_type secondaryAttack);
				void OnDestroy();
				String* GetItemHotkeysFilePath();
				void LogItemHotkeys(String* message);
				void load();
				void save();
				Boolean get_isSelected();
				Boolean get_isEquipped();
			};
			class PlayerInventory
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static PlayerInventory* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static Array<UInt16>* LOADOUT();                                                // System.UInt16[]
				static void LOADOUT_Set(Array<UInt16>* value);
				static Array<UInt16>* HORDE();                                                  // System.UInt16[]
				static void HORDE_Set(Array<UInt16>* value);
				static Array<Array<UInt16>*>* SKILLSETS_SERVER();                               // System.UInt16[][]
				static void SKILLSETS_SERVER_Set(Array<Array<UInt16>*>* value);
				static Array<Array<UInt16>*>* SKILLSETS_CLIENT();                               // System.UInt16[][]
				static void SKILLSETS_CLIENT_Set(Array<Array<UInt16>*>* value);
				static Array<Array<UInt16>*>* SKILLSETS_HERO();                                 // System.UInt16[][]
				static void SKILLSETS_HERO_Set(Array<Array<UInt16>*>* value);
				static Byte SAVEDATA_VERSION();                                                 // System.Byte
				static void SAVEDATA_VERSION_Set(Byte value);
				static Byte SLOTS();                                                            // System.Byte
				static void SLOTS_Set(Byte value);
				static Byte PAGES();                                                            // System.Byte
				static void PAGES_Set(Byte value);
				static Byte BACKPACK();                                                         // System.Byte
				static void BACKPACK_Set(Byte value);
				static Byte VEST();                                                             // System.Byte
				static void VEST_Set(Byte value);
				static Byte SHIRT();                                                            // System.Byte
				static void SHIRT_Set(Byte value);
				static Byte PANTS();                                                            // System.Byte
				static void PANTS_Set(Byte value);
				static Byte STORAGE();                                                          // System.Byte
				static void STORAGE_Set(Byte value);
				static Byte AREA();                                                             // System.Byte
				static void AREA_Set(Byte value);
				static Array<UInt16>* loadout();                                                // System.UInt16[]
				static void loadout_Set(Array<UInt16>* value);
				static Array<Array<UInt16>*>* skillsets();                                      // System.UInt16[][]
				static void skillsets_Set(Array<Array<UInt16>*>* value);
				Array<unknown_type>* items();                                                   // SDG.Unturned.Items[]
				void items_Set(Array<unknown_type>* value);
				Int32 receivedUpdateIndex();                                                    // System.Int32
				void receivedUpdateIndex_Set(Int32 value);
				Boolean isStoring();                                                            // System.Boolean
				void isStoring_Set(Boolean value);
				Boolean isStorageTrunk();                                                       // System.Boolean
				void isStorageTrunk_Set(Boolean value);
				unknown_type storage();                                                         // SDG.Unturned.InteractableStorage
				void storage_Set(unknown_type value);
				Boolean ownerHasInventory();                                                    // System.Boolean
				void ownerHasInventory_Set(Boolean value);
				unknown_type onInventoryResized();                                              // SDG.Unturned.InventoryResized
				void onInventoryResized_Set(unknown_type value);
				unknown_type onInventoryUpdated();                                              // SDG.Unturned.InventoryUpdated
				void onInventoryUpdated_Set(unknown_type value);
				unknown_type onInventoryAdded();                                                // SDG.Unturned.InventoryAdded
				void onInventoryAdded_Set(unknown_type value);
				unknown_type onInventoryRemoved();                                              // SDG.Unturned.InventoryRemoved
				void onInventoryRemoved_Set(unknown_type value);
				unknown_type onInventoryStored();                                               // SDG.Unturned.InventoryStored
				void onInventoryStored_Set(unknown_type value);
				unknown_type onInventoryStateUpdated();                                         // SDG.Unturned.InventoryStateUpdated
				void onInventoryStateUpdated_Set(unknown_type value);
				unknown_type onDropItemRequested();                                             // SDG.Unturned.DropItemRequestHandler
				void onDropItemRequested_Set(unknown_type value);
				static unknown_type SendDragItem();                                             // SDG.Unturned.ServerInstanceMethod`7<System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte>
				static void SendDragItem_Set(unknown_type value);
				static unknown_type SendSwapItem();                                             // SDG.Unturned.ServerInstanceMethod`8<System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte>
				static void SendSwapItem_Set(unknown_type value);
				static unknown_type SendDropItem();                                             // SDG.Unturned.ServerInstanceMethod`3<System.Byte,System.Byte,System.Byte>
				static void SendDropItem_Set(unknown_type value);
				static unknown_type SendUpdateAmount();                                         // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte>
				static void SendUpdateAmount_Set(unknown_type value);
				static unknown_type SendUpdateQuality();                                        // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte>
				static void SendUpdateQuality_Set(unknown_type value);
				static unknown_type SendUpdateInvState();                                       // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte[]>
				static void SendUpdateInvState_Set(unknown_type value);
				static unknown_type SendItemAdd();                                              // SDG.Unturned.ClientInstanceMethod`8<System.Byte,System.Byte,System.Byte,System.Byte,System.UInt16,System.Byte,System.Byte,System.Byte[]>
				static void SendItemAdd_Set(unknown_type value);
				static unknown_type SendItemRemove();                                           // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte>
				static void SendItemRemove_Set(unknown_type value);
				static unknown_type SendSize();                                                 // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte>
				static void SendSize_Set(unknown_type value);
				static unknown_type SendStoraging();                                            // SDG.Unturned.ClientInstanceMethod
				static void SendStoraging_Set(unknown_type value);
				static unknown_type SendInventory();                                            // SDG.Unturned.ClientInstanceMethod
				static void SendInventory_Set(unknown_type value);
				Boolean wasLoadCalled();                                                        // System.Boolean
				void wasLoadCalled_Set(Boolean value);
				Array<unknown_type>* get_items();
				void set_items(Array<unknown_type>* value);
				void incrementUpdateIndex();
				Boolean doesSearchNeedRefresh(unknown_type index);
				Boolean get_shouldInventoryStopGestureCloseStorage();
				Boolean get_shouldInteractCloseStorage();
				Boolean get_shouldStorageOpenDashboard();
				Byte getWidth(Byte page);
				Byte getHeight(Byte page);
				Byte getItemCount(Byte page);
				unknown_type getItem(Byte page, Byte index);
				Byte getIndex(Byte page, Byte x, Byte y);
				Byte findIndex(Byte page, Byte x, Byte y, unknown_type find_x, unknown_type find_y);
				void updateAmount(Byte page, Byte index, Byte newAmount);
				void updateQuality(Byte page, Byte index, Byte newQuality);
				void updateState(Byte page, Byte index, Array<Byte>* newState);
				List<unknown_type>* search(unknown_type type);
				void search1(List<unknown_type>* search, unknown_type type);
				List<unknown_type>* search2(unknown_type type, Array<UInt16>* calibers);
				List<unknown_type>* search3(unknown_type type, Array<UInt16>* calibers, Boolean allowZeroCaliber);
				void search4(List<unknown_type>* search, unknown_type type, UInt16 caliber);
				void search5(List<unknown_type>* search, unknown_type type, UInt16 caliber, Boolean allowZeroCaliber);
				List<unknown_type>* search6(UInt16 id, Boolean findEmpty, Boolean findHealthy);
				void search7(List<unknown_type>* search, UInt16 id, Boolean findEmpty, Boolean findHealthy);
				List<unknown_type>* search8(List<unknown_type>* search);
				unknown_type has(UInt16 id);
				Boolean tryAddItem(unknown_type item, Byte x, Byte y, Byte page, Byte rot);
				Boolean tryAddItem1(unknown_type item, Boolean auto_);
				Boolean tryAddItem2(unknown_type item, Boolean auto_, Boolean playEffect);
				Boolean tryAddItemEquip(unknown_type item, Byte page);
				Boolean tryAddItemAuto(unknown_type item, Boolean autoEquipWeapon, Boolean autoEquipUseable, Boolean autoEquipClothing, Boolean playEffect);
				void forceAddItem(unknown_type item, Boolean auto_);
				void forceAddItemAuto(unknown_type item, Boolean autoEquipWeapon, Boolean autoEquipUseable, Boolean autoEquipClothing);
				void forceAddItem1(unknown_type item, Boolean auto_, Boolean playEffect);
				void forceAddItemAuto1(unknown_type item, Boolean autoEquipWeapon, Boolean autoEquipUseable, Boolean autoEquipClothing, Boolean playEffect);
				void replaceItems(Byte page, unknown_type replacement);
				void removeItem(Byte page, Byte index);
				Boolean checkSpaceEmpty(Byte page, Byte x, Byte y, Byte size_x, Byte size_y, Byte rot);
				Boolean checkSpaceDrag(Byte page, Byte old_x, Byte old_y, Byte oldRot, Byte new_x, Byte new_y, Byte newRot, Byte size_x, Byte size_y, Boolean checkSame);
				Boolean checkSpaceSwap(Byte page, Byte x, Byte y, Byte oldSize_X, Byte oldSize_Y, Byte oldRot, Byte newSize_X, Byte newSize_Y, Byte newRot);
				Boolean tryFindSpace(Byte page, Byte size_x, Byte size_y, unknown_type x, unknown_type y, unknown_type rot);
				Boolean tryFindSpace1(Byte size_x, Byte size_y, unknown_type page, unknown_type x, unknown_type y, unknown_type rot);
				void askDragItem(unknown_type steamID, Byte page_0, Byte x_0, Byte y_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1);
				void ReceiveDragItem(Byte page_0, Byte x_0, Byte y_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1);
				void askSwapItem(unknown_type steamID, Byte page_0, Byte x_0, Byte y_0, Byte rot_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1);
				void ReceiveSwapItem(Byte page_0, Byte x_0, Byte y_0, Byte rot_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1);
				void sendDragItem(Byte page_0, Byte x_0, Byte y_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1);
				void sendSwapItem(Byte page_0, Byte x_0, Byte y_0, Byte rot_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1);
				void askDropItem(unknown_type steamID, Byte page, Byte x, Byte y);
				void ReceiveDropItem(Byte page, Byte x, Byte y);
				void sendDropItem(Byte page, Byte x, Byte y);
				void tellUpdateAmount(unknown_type steamID, Byte page, Byte index, Byte amount);
				void ReceiveUpdateAmount(Byte page, Byte index, Byte amount);
				void tellUpdateQuality(unknown_type steamID, Byte page, Byte index, Byte quality);
				void ReceiveUpdateQuality(Byte page, Byte index, Byte quality);
				void tellUpdateInvState(unknown_type steamID, Byte page, Byte index, Array<Byte>* state);
				void ReceiveUpdateInvState(Byte page, Byte index, Array<Byte>* state);
				void tellItemAdd(unknown_type steamID, Byte page, Byte x, Byte y, Byte rot, UInt16 id, Byte amount, Byte quality, Array<Byte>* state);
				void ReceiveItemAdd(Byte page, Byte x, Byte y, Byte rot, UInt16 id, Byte amount, Byte quality, Array<Byte>* state);
				void tellItemRemove(unknown_type steamID, Byte page, Byte x, Byte y);
				void ReceiveItemRemove(Byte page, Byte x, Byte y);
				void tellSize(unknown_type steamID, Byte page, Byte newWidth, Byte newHeight);
				void ReceiveSize(Byte page, Byte newWidth, Byte newHeight);
				void tellStoraging(unknown_type steamID);
				void ReceiveStoraging(unknown_type context);
				void tellInventory(unknown_type steamID);
				void ReceiveInventory(unknown_type context);
				void askInventory(unknown_type steamID);
				void SendInitialPlayerState(SDG::Unturned::SteamPlayer* client);
				void sendStorage();
				void updateItems(Byte page, unknown_type newItems);
				void sendUpdateAmount(Byte page, Byte x, Byte y, Byte amount);
				void sendUpdateQuality(Byte page, Byte x, Byte y, Byte quality);
				void sendUpdateInvState(Byte page, Byte x, Byte y, Array<Byte>* state);
				void sendItemAdd(Byte page, unknown_type jar);
				void sendItemRemove(Byte page, unknown_type jar);
				void bestowLoadout();
				String* OnGetSpawnLoadoutErrorContext();
				void onShirtUpdated(UInt16 id, Byte quality, Array<Byte>* state);
				void onPantsUpdated(UInt16 id, Byte quality, Array<Byte>* state);
				void onBackpackUpdated(UInt16 id, Byte quality, Array<Byte>* state);
				void onVestUpdated(UInt16 id, Byte quality, Array<Byte>* state);
				void closeDistantStorage();
				void openStorage(unknown_type newStorage);
				void openTrunk(unknown_type trunkItems);
				void closeTrunk();
				void closeStorage();
				void closeStorageAndNotifyClient();
				void onLifeUpdated(Boolean isDead);
				void onItemsResized(Byte page, Byte newWidth, Byte newHeight);
				void onItemUpdated(Byte page, Byte index, unknown_type jar);
				void onItemAdded(Byte page, Byte index, unknown_type jar);
				void onItemRemoved(Byte page, Byte index, unknown_type jar);
				void onItemDiscarded(Byte page, Byte index, unknown_type jar);
				void onItemStateUpdated();
				void OnDestroy();
				void InitializePlayer();
				void load();
				void save();
				void LogRPCFailure(String* format, Array<unknown_type>* args);
				void SendInitialPlayerStateb__112_0(unknown_type writer);
				void sendStorageb__113_0(unknown_type writer);
			};
			class PlayerLifeUpdated
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static PlayerLifeUpdated* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				void Invoke(SDG::Unturned::Player* player);
				unknown_type BeginInvoke(SDG::Unturned::Player* player, unknown_type callback, unknown_type object);
				void EndInvoke(unknown_type result);
			};
			class PlayerLife
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static PlayerLife* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static Byte SAVEDATA_VERSION_LATEST();                                          // System.Byte
				static void SAVEDATA_VERSION_LATEST_Set(Byte value);
				static Byte SAVEDATA_VERSION_WITH_OXYGEN();                                     // System.Byte
				static void SAVEDATA_VERSION_WITH_OXYGEN_Set(Byte value);
				static Byte SAVEDATA_VERSION();                                                 // System.Byte
				static void SAVEDATA_VERSION_Set(Byte value);
				static Single COMBAT_COOLDOWN();                                                // System.Single
				static void COMBAT_COOLDOWN_Set(Single value);
				static SDG::Unturned::PlayerLifeUpdated* onPlayerLifeUpdated();                 // SDG.Unturned.PlayerLifeUpdated
				static void onPlayerLifeUpdated_Set(SDG::Unturned::PlayerLifeUpdated* value);
				static unknown_type OnPreDeath();                                               // System.Action`1<SDG.Unturned.PlayerLife>
				static void OnPreDeath_Set(unknown_type value);
				static unknown_type onPlayerDied();                                             // SDG.Unturned.PlayerLife/PlayerDiedCallback
				static void onPlayerDied_Set(unknown_type value);
				static unknown_type OnTellHealth_Global();                                      // System.Action`1<SDG.Unturned.PlayerLife>
				static void OnTellHealth_Global_Set(unknown_type value);
				static unknown_type OnTellFood_Global();                                        // System.Action`1<SDG.Unturned.PlayerLife>
				static void OnTellFood_Global_Set(unknown_type value);
				static unknown_type OnTellWater_Global();                                       // System.Action`1<SDG.Unturned.PlayerLife>
				static void OnTellWater_Global_Set(unknown_type value);
				static unknown_type OnTellVirus_Global();                                       // System.Action`1<SDG.Unturned.PlayerLife>
				static void OnTellVirus_Global_Set(unknown_type value);
				static unknown_type OnTellBleeding_Global();                                    // System.Action`1<SDG.Unturned.PlayerLife>
				static void OnTellBleeding_Global_Set(unknown_type value);
				static unknown_type OnTellBroken_Global();                                      // System.Action`1<SDG.Unturned.PlayerLife>
				static void OnTellBroken_Global_Set(unknown_type value);
				static unknown_type RocketLegacyOnDeath();                                      // System.Action`4<SDG.Unturned.PlayerLife,SDG.Unturned.EDeathCause,SDG.Unturned.ELimb,Steamworks.CSteamID>
				static void RocketLegacyOnDeath_Set(unknown_type value);
				static unknown_type OnRevived_Global();                                         // System.Action`1<SDG.Unturned.PlayerLife>
				static void OnRevived_Global_Set(unknown_type value);
				static unknown_type OnSelectingRespawnPoint();                                  // SDG.Unturned.PlayerLife/RespawnPointSelector
				static void OnSelectingRespawnPoint_Set(unknown_type value);
				unknown_type onLifeUpdated();                                                   // SDG.Unturned.LifeUpdated
				void onLifeUpdated_Set(unknown_type value);
				unknown_type onHealthUpdated();                                                 // SDG.Unturned.HealthUpdated
				void onHealthUpdated_Set(unknown_type value);
				unknown_type onFoodUpdated();                                                   // SDG.Unturned.FoodUpdated
				void onFoodUpdated_Set(unknown_type value);
				unknown_type onWaterUpdated();                                                  // SDG.Unturned.WaterUpdated
				void onWaterUpdated_Set(unknown_type value);
				unknown_type onVirusUpdated();                                                  // SDG.Unturned.VirusUpdated
				void onVirusUpdated_Set(unknown_type value);
				unknown_type onStaminaUpdated();                                                // SDG.Unturned.StaminaUpdated
				void onStaminaUpdated_Set(unknown_type value);
				unknown_type onVisionUpdated();                                                 // SDG.Unturned.VisionUpdated
				void onVisionUpdated_Set(unknown_type value);
				unknown_type onOxygenUpdated();                                                 // SDG.Unturned.OxygenUpdated
				void onOxygenUpdated_Set(unknown_type value);
				unknown_type onBleedingUpdated();                                               // SDG.Unturned.BleedingUpdated
				void onBleedingUpdated_Set(unknown_type value);
				unknown_type onBrokenUpdated();                                                 // SDG.Unturned.BrokenUpdated
				void onBrokenUpdated_Set(unknown_type value);
				unknown_type onTemperatureUpdated();                                            // SDG.Unturned.TemperatureUpdated
				void onTemperatureUpdated_Set(unknown_type value);
				unknown_type onDamaged();                                                       // SDG.Unturned.Damaged
				void onDamaged_Set(unknown_type value);
				unknown_type onHurt();                                                          // SDG.Unturned.Hurt
				void onHurt_Set(unknown_type value);
				Boolean wasPvPDeath();                                                          // System.Boolean
				void wasPvPDeath_Set(Boolean value);
				static unknown_type _deathCause();                                              // SDG.Unturned.EDeathCause
				static void _deathCause_Set(unknown_type value);
				static SDG::Unturned::ELimb _deathLimb();                                       // SDG.Unturned.ELimb
				static void _deathLimb_Set(SDG::Unturned::ELimb value);
				static unknown_type _deathKiller();                                             // Steamworks.CSteamID
				static void _deathKiller_Set(unknown_type value);
				unknown_type recentKiller();                                                    // Steamworks.CSteamID
				void recentKiller_Set(unknown_type value);
				Single lastTimeAggressive();                                                    // System.Single
				void lastTimeAggressive_Set(Single value);
				Single lastTimeTookDamage();                                                    // System.Single
				void lastTimeTookDamage_Set(Single value);
				Single lastTimeCausedDamage();                                                  // System.Single
				void lastTimeCausedDamage_Set(Single value);
				Boolean _isDead();                                                              // System.Boolean
				void _isDead_Set(Boolean value);
				Byte lastHealth();                                                              // System.Byte
				void lastHealth_Set(Byte value);
				Byte _health();                                                                 // System.Byte
				void _health_Set(Byte value);
				Byte _food();                                                                   // System.Byte
				void _food_Set(Byte value);
				Byte _water();                                                                  // System.Byte
				void _water_Set(Byte value);
				Byte _virus();                                                                  // System.Byte
				void _virus_Set(Byte value);
				Byte _vision();                                                                 // System.Byte
				void _vision_Set(Byte value);
				UInt32 _warmth();                                                               // System.UInt32
				void _warmth_Set(UInt32 value);
				Byte _stamina();                                                                // System.Byte
				void _stamina_Set(Byte value);
				Byte _oxygen();                                                                 // System.Byte
				void _oxygen_Set(Byte value);
				Boolean _isBleeding();                                                          // System.Boolean
				void _isBleeding_Set(Boolean value);
				Boolean _isBroken();                                                            // System.Boolean
				void _isBroken_Set(Boolean value);
				unknown_type _temperature();                                                    // SDG.Unturned.EPlayerTemperature
				void _temperature_Set(unknown_type value);
				UInt32 lastStarve();                                                            // System.UInt32
				void lastStarve_Set(UInt32 value);
				UInt32 lastDehydrate();                                                         // System.UInt32
				void lastDehydrate_Set(UInt32 value);
				UInt32 lastUncleaned();                                                         // System.UInt32
				void lastUncleaned_Set(UInt32 value);
				UInt32 lastView();                                                              // System.UInt32
				void lastView_Set(UInt32 value);
				UInt32 lastTire();                                                              // System.UInt32
				void lastTire_Set(UInt32 value);
				UInt32 lastSuffocate();                                                         // System.UInt32
				void lastSuffocate_Set(UInt32 value);
				UInt32 lastRest();                                                              // System.UInt32
				void lastRest_Set(UInt32 value);
				UInt32 lastBreath();                                                            // System.UInt32
				void lastBreath_Set(UInt32 value);
				UInt32 lastInfect();                                                            // System.UInt32
				void lastInfect_Set(UInt32 value);
				UInt32 lastBleed();                                                             // System.UInt32
				void lastBleed_Set(UInt32 value);
				UInt32 lastBleeding();                                                          // System.UInt32
				void lastBleeding_Set(UInt32 value);
				UInt32 lastBroken();                                                            // System.UInt32
				void lastBroken_Set(UInt32 value);
				UInt32 lastFreeze();                                                            // System.UInt32
				void lastFreeze_Set(UInt32 value);
				UInt32 lastWarm();                                                              // System.UInt32
				void lastWarm_Set(UInt32 value);
				UInt32 lastBurn();                                                              // System.UInt32
				void lastBurn_Set(UInt32 value);
				UInt32 lastCovered();                                                           // System.UInt32
				void lastCovered_Set(UInt32 value);
				UInt32 lastRegenerate();                                                        // System.UInt32
				void lastRegenerate_Set(UInt32 value);
				UInt32 lastRadiate();                                                           // System.UInt32
				void lastRadiate_Set(UInt32 value);
				Boolean wasWarm();                                                              // System.Boolean
				void wasWarm_Set(Boolean value);
				Boolean wasCovered();                                                           // System.Boolean
				void wasCovered_Set(Boolean value);
				Single _lastRespawn();                                                          // System.Single
				void _lastRespawn_Set(Single value);
				Single _lastDeath();                                                            // System.Single
				void _lastDeath_Set(Single value);
				Single lastSuicide();                                                           // System.Single
				void lastSuicide_Set(Single value);
				Single lastAlive();                                                             // System.Single
				void lastAlive_Set(Single value);
				UnityEngine::Vector3 ragdoll();                                                 // UnityEngine.Vector3
				void ragdoll_Set(UnityEngine::Vector3 value);
				unknown_type ragdollEffect();                                                   // SDG.Unturned.ERagdollEffect
				void ragdollEffect_Set(unknown_type value);
				unknown_type spawnpoint();                                                      // SDG.Unturned.PlayerSpawnpoint
				void spawnpoint_Set(unknown_type value);
				static unknown_type SendDeath();                                                // SDG.Unturned.ClientInstanceMethod`3<SDG.Unturned.EDeathCause,SDG.Unturned.ELimb,Steamworks.CSteamID>
				static void SendDeath_Set(unknown_type value);
				static unknown_type SendDead();                                                 // SDG.Unturned.ClientInstanceMethod`2<UnityEngine.Vector3,SDG.Unturned.ERagdollEffect>
				static void SendDead_Set(unknown_type value);
				static unknown_type SendRevive();                                               // SDG.Unturned.ClientInstanceMethod`2<UnityEngine.Vector3,System.Byte>
				static void SendRevive_Set(unknown_type value);
				static unknown_type SendLifeStats();                                            // SDG.Unturned.ClientInstanceMethod`7<System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean,System.Boolean>
				static void SendLifeStats_Set(unknown_type value);
				static unknown_type SendHealth();                                               // SDG.Unturned.ClientInstanceMethod`1<System.Byte>
				static void SendHealth_Set(unknown_type value);
				static unknown_type SendDamagedEvent();                                         // SDG.Unturned.ClientInstanceMethod`2<System.Byte,UnityEngine.Vector3>
				static void SendDamagedEvent_Set(unknown_type value);
				static unknown_type SendFood();                                                 // SDG.Unturned.ClientInstanceMethod`1<System.Byte>
				static void SendFood_Set(unknown_type value);
				static unknown_type SendWater();                                                // SDG.Unturned.ClientInstanceMethod`1<System.Byte>
				static void SendWater_Set(unknown_type value);
				static unknown_type SendVirus();                                                // SDG.Unturned.ClientInstanceMethod`1<System.Byte>
				static void SendVirus_Set(unknown_type value);
				static unknown_type SendBleeding();                                             // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
				static void SendBleeding_Set(unknown_type value);
				static unknown_type SendBroken();                                               // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
				static void SendBroken_Set(unknown_type value);
				static unknown_type SendModifyStamina();                                        // SDG.Unturned.ClientInstanceMethod`1<System.Int16>
				static void SendModifyStamina_Set(unknown_type value);
				static unknown_type SendModifyHallucination();                                  // SDG.Unturned.ClientInstanceMethod`1<System.Int16>
				static void SendModifyHallucination_Set(unknown_type value);
				static unknown_type SendModifyWarmth();                                         // SDG.Unturned.ClientInstanceMethod`1<System.Int16>
				static void SendModifyWarmth_Set(unknown_type value);
				static unknown_type SendRespawnRequest();                                       // SDG.Unturned.ServerInstanceMethod`1<System.Boolean>
				static void SendRespawnRequest_Set(unknown_type value);
				static unknown_type SendSuicideRequest();                                       // SDG.Unturned.ServerInstanceMethod
				static void SendSuicideRequest_Set(unknown_type value);
				Boolean isAsphyxiating();                                                       // System.Boolean
				void isAsphyxiating_Set(Boolean value);
				unknown_type OnIsAsphyxiatingChanged();                                         // System.Action
				void OnIsAsphyxiatingChanged_Set(unknown_type value);
				static unknown_type BonesRef();                                                 // SDG.Unturned.AssetReference`1<SDG.Unturned.EffectAsset>
				static void BonesRef_Set(unknown_type value);
				unknown_type OnFallDamageRequested();                                           // SDG.Unturned.PlayerLife/FallDamageRequestHandler
				void OnFallDamageRequested_Set(unknown_type value);
				Boolean wasLoadCalled();                                                        // System.Boolean
				void wasLoadCalled_Set(Boolean value);
				static void add_OnPreDeath(unknown_type value);
				static void remove_OnPreDeath(unknown_type value);
				static void add_onPlayerDied(unknown_type value);
				static void remove_onPlayerDied(unknown_type value);
				static void broadcastPlayerDied(SDG::Unturned::PlayerLife* sender, unknown_type cause, SDG::Unturned::ELimb limb, unknown_type instigator);
				static void add_OnSelectingRespawnPoint(unknown_type value);
				static void remove_OnSelectingRespawnPoint(unknown_type value);
				void add_onHurt(unknown_type value);
				void remove_onHurt(unknown_type value);
				Boolean get_wasPvPDeath();
				void set_wasPvPDeath(Boolean value);
				static unknown_type get_deathCause();
				static SDG::Unturned::ELimb get_deathLimb();
				static unknown_type get_deathKiller();
				Boolean get_isAggressor();
				void markAggressive(Boolean force, Boolean spreadToGroup);
				Boolean get_isDead();
				Boolean get_IsAlive();
				Byte get_health();
				Byte get_food();
				Byte get_water();
				Byte get_virus();
				Byte get_vision();
				UInt32 get_warmth();
				Byte get_stamina();
				Byte get_oxygen();
				Boolean get_isBleeding();
				Boolean get_isBroken();
				unknown_type get_temperature();
				Single get_lastRespawn();
				Single get_lastDeath();
				void tellDeath(unknown_type steamID, Byte newCause, Byte newLimb, unknown_type newKiller);
				void ReceiveDeath(unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller);
				void tellDead(unknown_type steamID, UnityEngine::Vector3 newRagdoll, Byte newRagdollEffect);
				void ReceiveDead(UnityEngine::Vector3 newRagdoll, unknown_type newRagdollEffect);
				void tellRevive(unknown_type steamID, UnityEngine::Vector3 position, Byte angle);
				void ReceiveRevive(UnityEngine::Vector3 position, Byte angle);
				void tellLife(unknown_type steamID, Byte newHealth, Byte newFood, Byte newWater, Byte newVirus, Boolean newBleeding, Boolean newBroken);
				void tellLifeWithOxygen(unknown_type steamID, Byte newHealth, Byte newFood, Byte newWater, Byte newVirus, Byte newOxygen, Boolean newBleeding, Boolean newBroken);
				void ReceiveLifeStats(Byte newHealth, Byte newFood, Byte newWater, Byte newVirus, Byte newOxygen, Boolean newBleeding, Boolean newBroken);
				void askLife(unknown_type steamID);
				void SendInitialPlayerState(SDG::Unturned::SteamPlayer* client);
				void SendInitialPlayerState1(List<unknown_type>* transportConnections);
				void tellHealth(unknown_type steamID, Byte newHealth);
				void ReceiveHealth(Byte newHealth);
				void ReceiveDamagedEvent(Byte damageAmount, UnityEngine::Vector3 damageDirection);
				void tellFood(unknown_type steamID, Byte newFood);
				void ReceiveFood(Byte newFood);
				void tellWater(unknown_type steamID, Byte newWater);
				void ReceiveWater(Byte newWater);
				void tellVirus(unknown_type steamID, Byte newVirus);
				void ReceiveVirus(Byte newVirus);
				void tellBleeding(unknown_type steamID, Boolean newBleeding);
				void ReceiveBleeding(Boolean newBleeding);
				void tellBroken(unknown_type steamID, Boolean newBroken);
				void ReceiveBroken(Boolean newBroken);
				void askDamage(Byte amount, UnityEngine::Vector3 newRagdoll, unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller, unknown_type kill);
				void askDamage1(Byte amount, UnityEngine::Vector3 newRagdoll, unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller, unknown_type kill, Boolean trackKill, unknown_type newRagdollEffect);
				void askDamage2(Byte amount, UnityEngine::Vector3 newRagdoll, unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller, unknown_type kill, Boolean trackKill, unknown_type newRagdollEffect, Boolean canCauseBleeding);
				void askDamage3(Byte amount, UnityEngine::Vector3 newRagdoll, unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller, unknown_type kill, Boolean trackKill, unknown_type newRagdollEffect, Boolean canCauseBleeding, Boolean bypassSafezone);
				Boolean InternalCanDamage();
				void doDamage(Byte amount, UnityEngine::Vector3 newRagdoll, unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller, unknown_type kill, Boolean trackKill, unknown_type newRagdollEffect, Boolean canCauseBleeding);
				void askHeal(Byte amount, Boolean healBleeding, Boolean healBroken);
				void serverSetBleeding(Boolean newBleeding);
				void serverSetLegsBroken(Boolean newLegsBroken);
				void askStarve(Byte amount);
				void askEat(Byte amount);
				void askDehydrate(Byte amount);
				void askDrink(Byte amount);
				void askInfect(Byte amount);
				void askRadiate(Byte amount);
				void askDisinfect(Byte amount);
				void internalSetStamina(Byte value);
				void askTire(Byte amount);
				void askRest(Byte amount);
				void simulatedModifyStamina(Int16 delta);
				void simulatedModifyStamina1(Single delta);
				void clientModifyStamina(unknown_type senderId, Int16 delta);
				void ReceiveModifyStamina(Int16 delta);
				void serverModifyStamina(Single delta);
				void askView(Byte amount);
				void clientModifyHallucination(unknown_type senderId, Int16 delta);
				void ReceiveModifyHallucination(Int16 delta);
				void serverModifyHallucination(Single delta);
				void tellHallucinate(unknown_type senderId, Byte amount);
				void sendHallucination(Byte amount);
				void simulatedModifyWarmth(Int16 delta);
				void clientModifyWarmth(unknown_type senderId, Int16 delta);
				void ReceiveModifyWarmth(Int16 delta);
				void serverModifyWarmth(Single delta);
				void askBlind(Byte amount);
				void askSuffocate(Byte amount);
				void askBreath(Byte amount);
				void simulatedModifyOxygen(SByte delta);
				void simulatedModifyOxygen1(Single delta);
				void serverModifyHealth(Single delta);
				void serverModifyFood(Single delta);
				void serverModifyWater(Single delta);
				void serverModifyVirus(Single delta);
				void askRespawn(unknown_type steamID, Boolean atHome);
				void ServerRespawn(Boolean atHome);
				void ReceiveRespawnRequest(Boolean atHome);
				void askSuicide(unknown_type steamID);
				void ReceiveSuicideRequest();
				void sendRevive();
				void sendRespawn(Boolean atHome);
				void sendSuicide();
				void SimulateStaminaFrame(UInt32 simulation);
				void SetIsAsphyxiating(Boolean newIsAsphyxiating);
				void add_OnIsAsphyxiatingChanged(unknown_type value);
				void remove_OnIsAsphyxiatingChanged(unknown_type value);
				void SimulateOxygenFrame(UInt32 simulation);
				void simulate(UInt32 simulation);
				void breakLegs();
				void add_OnFallDamageRequested(unknown_type value);
				void remove_OnFallDamageRequested(unknown_type value);
				void onLanded(Single velocity);
				void InitializePlayer();
				void load();
				void save();
			};
			class PlayerLook
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static PlayerLook* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static Single HEIGHT_LOOK_SIT();                                                // System.Single
				static void HEIGHT_LOOK_SIT_Set(Single value);
				static Single HEIGHT_LOOK_STAND();                                              // System.Single
				static void HEIGHT_LOOK_STAND_Set(Single value);
				static Single HEIGHT_LOOK_CROUCH();                                             // System.Single
				static void HEIGHT_LOOK_CROUCH_Set(Single value);
				static Single HEIGHT_LOOK_PRONE();                                              // System.Single
				static void HEIGHT_LOOK_PRONE_Set(Single value);
				static Single HEIGHT_CAMERA_SIT();                                              // System.Single
				static void HEIGHT_CAMERA_SIT_Set(Single value);
				static Single HEIGHT_CAMERA_STAND();                                            // System.Single
				static void HEIGHT_CAMERA_STAND_Set(Single value);
				static Single HEIGHT_CAMERA_CROUCH();                                           // System.Single
				static void HEIGHT_CAMERA_CROUCH_Set(Single value);
				static Single HEIGHT_CAMERA_PRONE();                                            // System.Single
				static void HEIGHT_CAMERA_PRONE_Set(Single value);
				static Single MIN_ANGLE_SIT();                                                  // System.Single
				static void MIN_ANGLE_SIT_Set(Single value);
				static Single MAX_ANGLE_SIT();                                                  // System.Single
				static void MAX_ANGLE_SIT_Set(Single value);
				static Single MIN_ANGLE_CLIMB();                                                // System.Single
				static void MIN_ANGLE_CLIMB_Set(Single value);
				static Single MAX_ANGLE_CLIMB();                                                // System.Single
				static void MAX_ANGLE_CLIMB_Set(Single value);
				static Single MIN_ANGLE_SWIM();                                                 // System.Single
				static void MIN_ANGLE_SWIM_Set(Single value);
				static Single MAX_ANGLE_SWIM();                                                 // System.Single
				static void MAX_ANGLE_SWIM_Set(Single value);
				static Single MIN_ANGLE_STAND();                                                // System.Single
				static void MIN_ANGLE_STAND_Set(Single value);
				static Single MAX_ANGLE_STAND();                                                // System.Single
				static void MAX_ANGLE_STAND_Set(Single value);
				static Single MIN_ANGLE_CROUCH();                                               // System.Single
				static void MIN_ANGLE_CROUCH_Set(Single value);
				static Single MAX_ANGLE_CROUCH();                                               // System.Single
				static void MAX_ANGLE_CROUCH_Set(Single value);
				static Single MIN_ANGLE_PRONE();                                                // System.Single
				static void MIN_ANGLE_PRONE_Set(Single value);
				static Single MAX_ANGLE_PRONE();                                                // System.Single
				static void MAX_ANGLE_PRONE_Set(Single value);
				unknown_type onPerspectiveUpdated();                                            // SDG.Unturned.PerspectiveUpdated
				void onPerspectiveUpdated_Set(unknown_type value);
				UnityEngine::Camera* _characterCamera();                                        // UnityEngine.Camera
				void _characterCamera_Set(UnityEngine::Camera* value);
				UnityEngine::Camera* _scopeCamera();                                            // UnityEngine.Camera
				void _scopeCamera_Set(UnityEngine::Camera* value);
				unknown_type scopeMaterial();                                                   // UnityEngine.Material
				void scopeMaterial_Set(unknown_type value);
				Boolean _isScopeActive();                                                       // System.Boolean
				void _isScopeActive_Set(Boolean value);
				Boolean isOverlayActive();                                                      // System.Boolean
				void isOverlayActive_Set(Boolean value);
				unknown_type scopeVision();                                                     // SDG.Unturned.ELightingVision
				void scopeVision_Set(unknown_type value);
				unknown_type scopeNightvisionColor();                                           // UnityEngine.Color
				void scopeNightvisionColor_Set(unknown_type value);
				Single scopeNightvisionFogIntensity();                                          // System.Single
				void scopeNightvisionFogIntensity_Set(Single value);
				unknown_type tempVision();                                                      // SDG.Unturned.ELightingVision
				void tempVision_Set(unknown_type value);
				unknown_type tempNightvisionColor();                                            // UnityEngine.Color
				void tempNightvisionColor_Set(unknown_type value);
				Single tempNightvisionFogIntensity();                                           // System.Single
				void tempNightvisionFogIntensity_Set(Single value);
				UnityEngine::Transform* _aim();                                                 // UnityEngine.Transform
				void _aim_Set(UnityEngine::Transform* value);
				static Single characterHeight();                                                // System.Single
				static void characterHeight_Set(Single value);
				static Single _characterYaw();                                                  // System.Single
				static void _characterYaw_Set(Single value);
				static Single characterYaw();                                                   // System.Single
				static void characterYaw_Set(Single value);
				static Single killcam();                                                        // System.Single
				static void killcam_Set(Single value);
				Single yawInputMultiplier();                                                    // System.Single
				void yawInputMultiplier_Set(Single value);
				Single pitchInputMultiplier();                                                  // System.Single
				void pitchInputMultiplier_Set(Single value);
				Single _pitch();                                                                // System.Single
				void _pitch_Set(Single value);
				Single _yaw();                                                                  // System.Single
				void _yaw_Set(Single value);
				Single _look_x();                                                               // System.Single
				void _look_x_Set(Single value);
				Single _look_y();                                                               // System.Single
				void _look_y_Set(Single value);
				Single _orbitPitch();                                                           // System.Single
				void _orbitPitch_Set(Single value);
				Single _orbitYaw();                                                             // System.Single
				void _orbitYaw_Set(Single value);
				Single orbitSpeed();                                                            // System.Single
				void orbitSpeed_Set(Single value);
				UnityEngine::Vector3 lockPosition();                                            // UnityEngine.Vector3
				void lockPosition_Set(UnityEngine::Vector3 value);
				UnityEngine::Vector3 orbitPosition();                                           // UnityEngine.Vector3
				void orbitPosition_Set(UnityEngine::Vector3 value);
				Boolean isOrbiting();                                                           // System.Boolean
				void isOrbiting_Set(Boolean value);
				Boolean isTracking();                                                           // System.Boolean
				void isTracking_Set(Boolean value);
				Boolean isLocking();                                                            // System.Boolean
				void isLocking_Set(Boolean value);
				Boolean isFocusing();                                                           // System.Boolean
				void isFocusing_Set(Boolean value);
				Boolean isSmoothing();                                                          // System.Boolean
				void isSmoothing_Set(Boolean value);
				Boolean areSpecStatsVisible();                                                  // System.Boolean
				void areSpecStatsVisible_Set(Boolean value);
				Boolean isIgnoringInput();                                                      // System.Boolean
				void isIgnoringInput_Set(Boolean value);
				UnityEngine::Vector3 smoothPosition();                                          // UnityEngine.Vector3
				void smoothPosition_Set(UnityEngine::Vector3 value);
				UnityEngine::Quaternion smoothRotation();                                       // UnityEngine.Quaternion
				void smoothRotation_Set(UnityEngine::Quaternion value);
				Byte angle();                                                                   // System.Byte
				void angle_Set(Byte value);
				Byte rot();                                                                     // System.Byte
				void rot_Set(Byte value);
				Single recoil_x();                                                              // System.Single
				void recoil_x_Set(Single value);
				Single recoil_y();                                                              // System.Single
				void recoil_y_Set(Single value);
				Byte lastAngle();                                                               // System.Byte
				void lastAngle_Set(Byte value);
				Byte lastRot();                                                                 // System.Byte
				void lastRot_Set(Byte value);
				UnityEngine::Quaternion flinchLocalRotation();                                  // UnityEngine.Quaternion
				void flinchLocalRotation_Set(UnityEngine::Quaternion value);
				unknown_type targetExplosionLocalRotation();                                    // SDG.Unturned.Rk4SpringQ
				void targetExplosionLocalRotation_Set(unknown_type value);
				UnityEngine::Quaternion smoothedExplosionLocalRotation();                       // UnityEngine.Quaternion
				void smoothedExplosionLocalRotation_Set(UnityEngine::Quaternion value);
				Single explosionSmoothingSpeed();                                               // System.Single
				void explosionSmoothingSpeed_Set(Single value);
				Single mainCameraZoomFactor();                                                  // System.Single
				void mainCameraZoomFactor_Set(Single value);
				Single scopeCameraZoomFactor();                                                 // System.Single
				void scopeCameraZoomFactor_Set(Single value);
				Single eyes();                                                                  // System.Single
				void eyes_Set(Single value);
				Single thirdPersonEyeHeight();                                                  // System.Single
				void thirdPersonEyeHeight_Set(Single value);
				Boolean shouldUseZoomFactorForSensitivity();                                    // System.Boolean
				void shouldUseZoomFactorForSensitivity_Set(Boolean value);
				unknown_type _perspective();                                                    // SDG.Unturned.EPlayerPerspective
				void _perspective_Set(unknown_type value);
				unknown_type scopeRenderTexture();                                              // UnityEngine.RenderTexture
				void scopeRenderTexture_Set(unknown_type value);
				Boolean isZoomed();                                                             // System.Boolean
				void isZoomed_Set(Boolean value);
				Boolean allowFreecamWithoutAdmin();                                             // System.Boolean
				void allowFreecamWithoutAdmin_Set(Boolean value);
				Boolean allowWorkzoneWithoutAdmin();                                            // System.Boolean
				void allowWorkzoneWithoutAdmin_Set(Boolean value);
				Boolean allowSpecStatsWithoutAdmin();                                           // System.Boolean
				void allowSpecStatsWithoutAdmin_Set(Boolean value);
				static unknown_type SendFreecamAllowed();                                       // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
				static void SendFreecamAllowed_Set(unknown_type value);
				static unknown_type SendWorkzoneAllowed();                                      // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
				static void SendWorkzoneAllowed_Set(unknown_type value);
				static unknown_type SendSpecStatsAllowed();                                     // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
				static void SendSpecStatsAllowed_Set(unknown_type value);
				static Array<unknown_type>* sweepHits();                                        // UnityEngine.RaycastHit[]
				static void sweepHits_Set(Array<unknown_type>* value);
				static Single NEAR_CLIP_SWEEP_RADIUS();                                         // System.Single
				static void NEAR_CLIP_SWEEP_RADIUS_Set(Single value);
				Single get_heightLook();
				Single get_heightCamera();
				UnityEngine::Camera* get_characterCamera();
				UnityEngine::Camera* get_scopeCamera();
				unknown_type get_scopeMaterial();
				void set_scopeMaterial(unknown_type value);
				Boolean get_isScopeActive();
				UnityEngine::Transform* get_aim();
				Single get_pitch();
				Single get_yaw();
				void TeleportYaw(Single newYaw);
				Single get_look_x();
				Single get_look_y();
				Single get_orbitPitch();
				Single get_orbitYaw();
				Boolean get_areSpecStatsVisible();
				void set_areSpecStatsVisible(Boolean value);
				Boolean get_isCam();
				unknown_type get_perspective();
				UnityEngine::Vector3 getEyesPosition();
				UnityEngine::Vector3 GetEyesPositionWithoutLeaning();
				void updateScope(unknown_type quality);
				void enableScope(Single zoom, unknown_type sightAsset);
				void disableScope();
				void enableOverlay();
				void setPerspective(unknown_type newPerspective);
				void setActivePerspective(unknown_type newPerspective);
				void ApplyScopeVisionToLighting();
				void disableOverlay();
				void RestoreSavedLightingVision();
				void enableZoom(Single zoom);
				void disableZoom();
				void updateRot();
				void updateLook();
				void recoil(Single x, Single y, Single h, Single v);
				void simulate(Single look_x, Single look_y, Single delta);
				void clampPitch();
				void clampYaw();
				void updateAim(Single delta);
				void FlinchFromDamage(Byte damageAmount, UnityEngine::Vector3 worldDirection);
				void FlinchFromExplosion(UnityEngine::Vector3 position, Single radius, Single magnitudeDegrees);
				void onVisionUpdated(Boolean isViewing);
				void onLifeUpdated(Boolean isDead);
				void onSeated(Boolean isDriver, Boolean inVehicle, Boolean wasVehicle, unknown_type oldVehicle, unknown_type newVehicle);
				Boolean get_canUseFreecam();
				Boolean get_canUseWorkzone();
				Boolean get_canUseSpecStats();
				void tellFreecamAllowed(unknown_type senderId, Boolean isAllowed);
				void ReceiveFreecamAllowed(Boolean isAllowed);
				void sendFreecamAllowed(Boolean isAllowed);
				void tellWorkzoneAllowed(unknown_type senderId, Boolean isAllowed);
				void ReceiveWorkzoneAllowed(Boolean isAllowed);
				void sendWorkzoneAllowed(Boolean isAllowed);
				void tellSpecStatsAllowed(unknown_type senderId, Boolean isAllowed);
				void ReceiveSpecStatsAllowed(Boolean isAllowed);
				void sendSpecStatsAllowed(Boolean isAllowed);
				UnityEngine::Vector3 sphereCastCamera(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, Single length, Int32 layerMask);
				void Update();
				void InitializePlayer();
				void OnDestroy();
			};
			class PlayerMovement
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static PlayerMovement* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static Single HEIGHT_STAND();                                                   // System.Single
				static void HEIGHT_STAND_Set(Single value);
				static Single HEIGHT_CROUCH();                                                  // System.Single
				static void HEIGHT_CROUCH_Set(Single value);
				static Single HEIGHT_PRONE();                                                   // System.Single
				static void HEIGHT_PRONE_Set(Single value);
				unknown_type onLanded();                                                        // SDG.Unturned.Landed
				void onLanded_Set(unknown_type value);
				unknown_type onSeated();                                                        // SDG.Unturned.Seated
				void onSeated_Set(unknown_type value);
				unknown_type onVehicleUpdated();                                                // SDG.Unturned.VehicleUpdated
				void onVehicleUpdated_Set(unknown_type value);
				unknown_type onSafetyUpdated();                                                 // SDG.Unturned.SafetyUpdated
				void onSafetyUpdated_Set(unknown_type value);
				unknown_type onRadiationUpdated();                                              // SDG.Unturned.RadiationUpdated
				void onRadiationUpdated_Set(unknown_type value);
				unknown_type onPurchaseUpdated();                                               // SDG.Unturned.PurchaseUpdated
				void onPurchaseUpdated_Set(unknown_type value);
				unknown_type onRegionUpdated();                                                 // SDG.Unturned.PlayerRegionUpdated
				void onRegionUpdated_Set(unknown_type value);
				unknown_type onBoundUpdated();                                                  // SDG.Unturned.PlayerBoundUpdated
				void onBoundUpdated_Set(unknown_type value);
				unknown_type PlayerNavChanged();                                                // SDG.Unturned.PlayerNavChanged
				void PlayerNavChanged_Set(unknown_type value);
				static Single SPEED_CLIMB();                                                    // System.Single
				static void SPEED_CLIMB_Set(Single value);
				static Single SPEED_SWIM();                                                     // System.Single
				static void SPEED_SWIM_Set(Single value);
				static Single SPEED_SPRINT();                                                   // System.Single
				static void SPEED_SPRINT_Set(Single value);
				static Single SPEED_STAND();                                                    // System.Single
				static void SPEED_STAND_Set(Single value);
				static Single SPEED_CROUCH();                                                   // System.Single
				static void SPEED_CROUCH_Set(Single value);
				static Single SPEED_PRONE();                                                    // System.Single
				static void SPEED_PRONE_Set(Single value);
				static Single JUMP();                                                           // System.Single
				static void JUMP_Set(Single value);
				static Single SWIM();                                                           // System.Single
				static void SWIM_Set(Single value);
				unknown_type controller();                                                      // UnityEngine.CharacterController
				void controller_Set(unknown_type value);
				Single _multiplier();                                                           // System.Single
				void _multiplier_Set(Single value);
				Single multiplier();                                                            // System.Single
				void multiplier_Set(Single value);
				Single itemGravityMultiplier();                                                 // System.Single
				void itemGravityMultiplier_Set(Single value);
				Single pluginGravityMultiplier();                                               // System.Single
				void pluginGravityMultiplier_Set(Single value);
				Single pluginSpeedMultiplier();                                                 // System.Single
				void pluginSpeedMultiplier_Set(Single value);
				Single pluginJumpMultiplier();                                                  // System.Single
				void pluginJumpMultiplier_Set(Single value);
				Single lastFootstep();                                                          // System.Single
				void lastFootstep_Set(Single value);
				Boolean _isGrounded();                                                          // System.Boolean
				void _isGrounded_Set(Boolean value);
				Boolean _isSafe();                                                              // System.Boolean
				void _isSafe_Set(Boolean value);
				unknown_type isSafeInfo();                                                      // SDG.Unturned.SafezoneNode
				void isSafeInfo_Set(unknown_type value);
				Boolean _isRadiated();                                                          // System.Boolean
				void _isRadiated_Set(Boolean value);
				unknown_type ActiveDeadzone();                                                  // SDG.Unturned.IDeadzoneNode
				void ActiveDeadzone_Set(unknown_type value);
				unknown_type _purchaseNode();                                                   // SDG.Unturned.HordePurchaseVolume
				void _purchaseNode_Set(unknown_type value);
				unknown_type effectNode();                                                      // SDG.Unturned.IAmbianceNode
				void effectNode_Set(unknown_type value);
				Boolean inRain();                                                               // System.Boolean
				void inRain_Set(Boolean value);
				Boolean inSnow();                                                               // System.Boolean
				void inSnow_Set(Boolean value);
				UInt32 WeatherMask();                                                           // System.UInt32
				void WeatherMask_Set(UInt32 value);
				String* materialName();                                                         // System.String
				void materialName_Set(String* value);
				Boolean materialIsWater();                                                      // System.Boolean
				void materialIsWater_Set(Boolean value);
				unknown_type ground();                                                          // UnityEngine.RaycastHit
				void ground_Set(unknown_type value);
				unknown_type height();                                                          // SDG.Unturned.EPlayerHeight
				void height_Set(unknown_type value);
				Boolean wasSizeAppliedYet();                                                    // System.Boolean
				void wasSizeAppliedYet_Set(Boolean value);
				Boolean _isMoving();                                                            // System.Boolean
				void _isMoving_Set(Boolean value);
				UnityEngine::Vector3 _move();                                                   // UnityEngine.Vector3
				void _move_Set(UnityEngine::Vector3 value);
				Byte _region_x();                                                               // System.Byte
				void _region_x_Set(Byte value);
				Byte _region_y();                                                               // System.Byte
				void _region_y_Set(Byte value);
				Byte _bound();                                                                  // System.Byte
				void _bound_Set(Byte value);
				Byte _nav();                                                                    // System.Byte
				void _nav_Set(Byte value);
				Byte updateRegionOld_X();                                                       // System.Byte
				void updateRegionOld_X_Set(Byte value);
				Byte updateRegionOld_Y();                                                       // System.Byte
				void updateRegionOld_Y_Set(Byte value);
				Byte updateRegionNew_X();                                                       // System.Byte
				void updateRegionNew_X_Set(Byte value);
				Byte updateRegionNew_Y();                                                       // System.Byte
				void updateRegionNew_Y_Set(Byte value);
				Byte updateRegionIndex();                                                       // System.Byte
				void updateRegionIndex_Set(Byte value);
				unknown_type _loadedRegions();                                                  // SDG.Unturned.LoadedRegion[0...,0...]
				void _loadedRegions_Set(unknown_type value);
				Array<unknown_type>* _loadedBounds();                                           // SDG.Unturned.LoadedBound[]
				void _loadedBounds_Set(Array<unknown_type>* value);
				UnityEngine::Vector3 velocity();                                                // UnityEngine.Vector3
				void velocity_Set(UnityEngine::Vector3 value);
				UnityEngine::Vector3 pendingLaunchVelocity();                                   // UnityEngine.Vector3
				void pendingLaunchVelocity_Set(UnityEngine::Vector3 value);
				UnityEngine::Vector3 lastUpdatePos();                                           // UnityEngine.Vector3
				void lastUpdatePos_Set(UnityEngine::Vector3 value);
				unknown_type snapshot();                                                        // SDG.Unturned.PitchYawSnapshotInfo
				void snapshot_Set(unknown_type value);
				unknown_type nsb();                                                             // SDG.Unturned.NetworkSnapshotBuffer`1<SDG.Unturned.PitchYawSnapshotInfo>
				void nsb_Set(unknown_type value);
				Byte _horizontal();                                                             // System.Byte
				void _horizontal_Set(Byte value);
				Byte _vertical();                                                               // System.Byte
				void _vertical_Set(Byte value);
				Int32 warp_x();                                                                 // System.Int32
				void warp_x_Set(Int32 value);
				Int32 warp_y();                                                                 // System.Int32
				void warp_y_Set(Int32 value);
				Int32 input_x();                                                                // System.Int32
				void input_x_Set(Int32 value);
				Int32 input_y();                                                                // System.Int32
				void input_y_Set(Int32 value);
				Boolean _jump();                                                                // System.Boolean
				void _jump_Set(Boolean value);
				Boolean isAllowed();                                                            // System.Boolean
				void isAllowed_Set(Boolean value);
				Boolean isUpdated();                                                            // System.Boolean
				void isUpdated_Set(Boolean value);
				List<unknown_type>* updates();                                                  // System.Collections.Generic.List`1<SDG.Unturned.PlayerStateUpdate>
				void updates_Set(List<unknown_type>* value);
				Boolean canAddSimulationResultsToUpdates();                                     // System.Boolean
				void canAddSimulationResultsToUpdates_Set(Boolean value);
				Boolean bypassUndergroundWhitelist();                                           // System.Boolean
				void bypassUndergroundWhitelist_Set(Boolean value);
				Boolean hasPendingVehicleChange();                                              // System.Boolean
				void hasPendingVehicleChange_Set(Boolean value);
				unknown_type pendingVehicle();                                                  // SDG.Unturned.InteractableVehicle
				void pendingVehicle_Set(unknown_type value);
				Byte pendingSeatIndex();                                                        // System.Byte
				void pendingSeatIndex_Set(Byte value);
				UnityEngine::Transform* pendingSeatTransform();                                 // UnityEngine.Transform
				void pendingSeatTransform_Set(UnityEngine::Transform* value);
				UnityEngine::Vector3 pendingSeatPosition();                                     // UnityEngine.Vector3
				void pendingSeatPosition_Set(UnityEngine::Vector3 value);
				Byte pendingSeatAngle();                                                        // System.Byte
				void pendingSeatAngle_Set(Byte value);
				UnityEngine::Vector3 lastStatPos();                                             // UnityEngine.Vector3
				void lastStatPos_Set(UnityEngine::Vector3 value);
				Single lastStatTime();                                                          // System.Single
				void lastStatTime_Set(Single value);
				unknown_type vehicle();                                                         // SDG.Unturned.InteractableVehicle
				void vehicle_Set(unknown_type value);
				Byte seat();                                                                    // System.Byte
				void seat_Set(Byte value);
				static unknown_type SendPluginGravityMultiplier();                              // SDG.Unturned.ClientInstanceMethod`1<System.Single>
				static void SendPluginGravityMultiplier_Set(unknown_type value);
				static unknown_type SendPluginJumpMultiplier();                                 // SDG.Unturned.ClientInstanceMethod`1<System.Single>
				static void SendPluginJumpMultiplier_Set(unknown_type value);
				static unknown_type SendPluginSpeedMultiplier();                                // SDG.Unturned.ClientInstanceMethod`1<System.Single>
				static void SendPluginSpeedMultiplier_Set(unknown_type value);
				static unknown_type lightWadingAudioRef();                                      // SDG.Unturned.MasterBundleReference`1<SDG.Unturned.OneShotAudioDefinition>
				static void lightWadingAudioRef_Set(unknown_type value);
				static unknown_type mediumWadingAudioRef();                                     // SDG.Unturned.MasterBundleReference`1<SDG.Unturned.OneShotAudioDefinition>
				static void mediumWadingAudioRef_Set(unknown_type value);
				static unknown_type heavyWadingAudioRef();                                      // SDG.Unturned.MasterBundleReference`1<SDG.Unturned.OneShotAudioDefinition>
				static void heavyWadingAudioRef_Set(unknown_type value);
				unknown_type mostRecentControllerColliderHit();                                 // UnityEngine.ControllerColliderHit
				void mostRecentControllerColliderHit_Set(unknown_type value);
				static Boolean get_forceTrustClient();
				static void set_forceTrustClient(Boolean value);
				void add_PlayerNavChanged(unknown_type value);
				void remove_PlayerNavChanged(unknown_type value);
				void TriggerPlayerNavChanged(Byte oldNav, Byte newNav);
				unknown_type get_controller();
				void set_controller(unknown_type value);
				Single get_totalGravityMultiplier();
				Single get_totalSpeedMultiplier();
				unknown_type get_landscapeHoleVolume();
				Boolean get_CanEnterTeleporter();
				void DoTeleport(UnityEngine::Transform* inputTransform, UnityEngine::Transform* outputTransform);
				void EnterCollisionTeleporter(unknown_type teleporter);
				void EnterTeleporterVolume(unknown_type entrance, unknown_type exit);
				void UpdateCharacterControllerEnabled();
				Boolean get_isGrounded();
				Boolean get_isSafe();
				void set_isSafe(Boolean value);
				Boolean get_isRadiated();
				void set_isRadiated(Boolean value);
				unknown_type get_ActiveDeadzone();
				void set_ActiveDeadzone(unknown_type value);
				unknown_type get_purchaseNode();
				void set_purchaseNode(unknown_type value);
				unknown_type get_effectNode();
				void set_effectNode(unknown_type value);
				UInt32 get_WeatherMask();
				void set_WeatherMask(UInt32 value);
				void setSize(unknown_type newHeight);
				void applySize();
				Boolean get_isMoving();
				Single get_speed();
				UnityEngine::Vector3 get_move();
				Byte get_region_x();
				Byte get_region_y();
				Byte get_bound();
				Byte get_nav();
				unknown_type get_loadedRegions();
				Array<unknown_type>* get_loadedBounds();
				Single get_fall();
				UnityEngine::Vector3 get_real();
				Byte get_horizontal();
				Byte get_vertical();
				Boolean get_jump();
				unknown_type getVehicle();
				unknown_type getVehicleSeat();
				Byte getSeat();
				void updateVehicle();
				void setVehicle(unknown_type newVehicle, Byte newSeat, UnityEngine::Transform* newSeatingTransform, UnityEngine::Vector3 newSeatingPosition, Byte newSeatingAngle, Boolean forceUpdate);
				void tellPluginGravityMultiplier(unknown_type steamID, Single newPluginGravityMultiplier);
				void ReceivePluginGravityMultiplier(Single newPluginGravityMultiplier);
				void sendPluginGravityMultiplier(Single newPluginGravityMultiplier);
				void tellPluginJumpMultiplier(unknown_type steamID, Single newPluginJumpMultiplier);
				void ReceivePluginJumpMultiplier(Single newPluginJumpMultiplier);
				void sendPluginJumpMultiplier(Single newPluginJumpMultiplier);
				void tellPluginSpeedMultiplier(unknown_type steamID, Single newPluginSpeedMultiplier);
				void ReceivePluginSpeedMultiplier(Single newPluginSpeedMultiplier);
				void sendPluginSpeedMultiplier(Single newPluginSpeedMultiplier);
				void tellState(UnityEngine::Vector3 newPosition, Byte newPitch, Byte newYaw);
				void updateMovement();
				void checkGround(UnityEngine::Vector3 position);
				Boolean PlayLandAudioClip();
				void PlayFootstepAudioClip();
				void PlaySwimAudioClip();
				void onVisionUpdated(Boolean isViewing);
				Boolean forceRemoveFromVehicle();
				void simulate();
				void simulate1(UInt32 simulation, Int32 recov, Boolean inputBrake, Boolean inputStamina, UnityEngine::Vector3 point, UnityEngine::Quaternion rotation, Single speed, Single physicsSpeed, Int32 turn, Single delta);
				void simulate2(UInt32 simulation, Int32 recov, Int32 input_x, Int32 input_y, Single look_x, Single look_y, Boolean inputJump, Boolean inputSprint, Single deltaTime);
				void Update();
				void updateRegionAndBound();
				void InitializePlayer();
				void OnControllerColliderHit(unknown_type hit);
				void OnDrawGizmos();
				void OnDestroy();
			};
			class PlayerQuests
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static PlayerQuests* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static Byte SAVEDATA_VERSION_ADDED_NPC_SPAWN_ID();                              // System.Byte
				static void SAVEDATA_VERSION_ADDED_NPC_SPAWN_ID_Set(Byte value);
				static Byte SAVEDATA_VERSION_ADDED_TRACKED_QUEST_GUID();                        // System.Byte
				static void SAVEDATA_VERSION_ADDED_TRACKED_QUEST_GUID_Set(Byte value);
				static Byte SAVEDATA_VERSION_ADDED_QUEST_LIST_GUIDS();                          // System.Byte
				static void SAVEDATA_VERSION_ADDED_QUEST_LIST_GUIDS_Set(Byte value);
				static Byte SAVEDATA_VERSION_ADDED_NPC_CUTSCENE_MODE();                         // System.Byte
				static void SAVEDATA_VERSION_ADDED_NPC_CUTSCENE_MODE_Set(Byte value);
				static Byte SAVEDATA_VERSION_NEWEST();                                          // System.Byte
				static void SAVEDATA_VERSION_NEWEST_Set(Byte value);
				static Byte SAVEDATA_VERSION();                                                 // System.Byte
				static void SAVEDATA_VERSION_Set(Byte value);
				static UInt32 DEFAULT_RADIO_FREQUENCY();                                        // System.UInt32
				static void DEFAULT_RADIO_FREQUENCY_Set(UInt32 value);
				static unknown_type flagComparator();                                           // SDG.Unturned.PlayerQuestFlagComparator
				static void flagComparator_Set(unknown_type value);
				static unknown_type questComparator();                                          // SDG.Unturned.PlayerQuestComparator
				static void questComparator_Set(unknown_type value);
				unknown_type checkNPC();                                                        // SDG.Unturned.InteractableObjectNPC
				void checkNPC_Set(unknown_type value);
				unknown_type serverCurrentDialogueAsset();                                      // SDG.Unturned.DialogueAsset
				void serverCurrentDialogueAsset_Set(unknown_type value);
				unknown_type serverCurrentVendorAsset();                                        // SDG.Unturned.VendorAsset
				void serverCurrentVendorAsset_Set(unknown_type value);
				unknown_type serverCurrentDialogueMessage();                                    // SDG.Unturned.DialogueMessage
				void serverCurrentDialogueMessage_Set(unknown_type value);
				unknown_type serverDefaultNextDialogueAsset();                                  // SDG.Unturned.DialogueAsset
				void serverDefaultNextDialogueAsset_Set(unknown_type value);
				unknown_type flagsMap();                                                        // System.Collections.Generic.Dictionary`2<System.UInt16,SDG.Unturned.PlayerQuestFlag>
				void flagsMap_Set(unknown_type value);
				unknown_type onExternalConditionsUpdated();                                     // SDG.Unturned.ExternalConditionsUpdated
				void onExternalConditionsUpdated_Set(unknown_type value);
				unknown_type onFlagsUpdated();                                                  // SDG.Unturned.FlagsUpdated
				void onFlagsUpdated_Set(unknown_type value);
				unknown_type onFlagUpdated();                                                   // SDG.Unturned.FlagUpdated
				void onFlagUpdated_Set(unknown_type value);
				unknown_type OnLocalPlayerQuestsChanged();                                      // System.Action`1<System.UInt16>
				void OnLocalPlayerQuestsChanged_Set(unknown_type value);
				static unknown_type onAnyFlagChanged();                                         // SDG.Unturned.PlayerQuests/AnyFlagChangedHandler
				static void onAnyFlagChanged_Set(unknown_type value);
				static unknown_type onGroupChanged();                                           // SDG.Unturned.PlayerQuests/GroupChangedCallback
				static void onGroupChanged_Set(unknown_type value);
				static unknown_type groupUpdated();                                             // SDG.Unturned.GroupUpdatedHandler
				static void groupUpdated_Set(unknown_type value);
				unknown_type TrackedQuestUpdated();                                             // SDG.Unturned.TrackedQuestUpdated
				void TrackedQuestUpdated_Set(unknown_type value);
				unknown_type groupIDChanged();                                                  // SDG.Unturned.GroupIDChangedHandler
				void groupIDChanged_Set(unknown_type value);
				unknown_type groupRankChanged();                                                // SDG.Unturned.GroupRankChangedHandler
				void groupRankChanged_Set(unknown_type value);
				unknown_type groupInvitesChanged();                                             // SDG.Unturned.GroupInvitesChangedHandler
				void groupInvitesChanged_Set(unknown_type value);
				unknown_type questCompleted();                                                  // SDG.Unturned.QuestCompletedHandler
				void questCompleted_Set(unknown_type value);
				List<unknown_type>* flagsList();                                                // System.Collections.Generic.List`1<SDG.Unturned.PlayerQuestFlag>
				void flagsList_Set(List<unknown_type>* value);
				unknown_type _trackedQuest();                                                   // SDG.Unturned.QuestAsset
				void _trackedQuest_Set(unknown_type value);
				List<unknown_type>* questsList();                                               // System.Collections.Generic.List`1<SDG.Unturned.PlayerQuest>
				void questsList_Set(List<unknown_type>* value);
				Boolean _isMarkerPlaced();                                                      // System.Boolean
				void _isMarkerPlaced_Set(Boolean value);
				UnityEngine::Vector3 _markerPosition();                                         // UnityEngine.Vector3
				void _markerPosition_Set(UnityEngine::Vector3 value);
				String* _markerTextOverride();                                                  // System.String
				void _markerTextOverride_Set(String* value);
				UInt32 _radioFrequency();                                                       // System.UInt32
				void _radioFrequency_Set(UInt32 value);
				unknown_type _groupID();                                                        // Steamworks.CSteamID
				void _groupID_Set(unknown_type value);
				unknown_type _groupRank();                                                      // SDG.Unturned.EPlayerGroupRank
				void _groupRank_Set(unknown_type value);
				unknown_type groupInvites();                                                    // System.Collections.Generic.HashSet`1<Steamworks.CSteamID>
				void groupInvites_Set(unknown_type value);
				Boolean inMainGroup();                                                          // System.Boolean
				void inMainGroup_Set(Boolean value);
				String* npcSpawnId();                                                           // System.String
				void npcSpawnId_Set(String* value);
				Boolean npcCutsceneMode();                                                      // System.Boolean
				void npcCutsceneMode_Set(Boolean value);
				static unknown_type SendCutsceneMode();                                         // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
				static void SendCutsceneMode_Set(unknown_type value);
				static unknown_type SendMarkerState();                                          // SDG.Unturned.ClientInstanceMethod`3<System.Boolean,UnityEngine.Vector3,System.String>
				static void SendMarkerState_Set(unknown_type value);
				static unknown_type SendSetMarkerRequest();                                     // SDG.Unturned.ServerInstanceMethod`2<System.Boolean,UnityEngine.Vector3>
				static void SendSetMarkerRequest_Set(unknown_type value);
				static unknown_type SendRadioFrequencyState();                                  // SDG.Unturned.ClientInstanceMethod`1<System.UInt32>
				static void SendRadioFrequencyState_Set(unknown_type value);
				static unknown_type SendSetRadioFrequencyRequest();                             // SDG.Unturned.ServerInstanceMethod`1<System.UInt32>
				static void SendSetRadioFrequencyRequest_Set(unknown_type value);
				static unknown_type SendGroupState();                                           // SDG.Unturned.ClientInstanceMethod`2<Steamworks.CSteamID,SDG.Unturned.EPlayerGroupRank>
				static void SendGroupState_Set(unknown_type value);
				static unknown_type SendAcceptGroupInvitationRequest();                         // SDG.Unturned.ServerInstanceMethod`1<Steamworks.CSteamID>
				static void SendAcceptGroupInvitationRequest_Set(unknown_type value);
				static unknown_type SendDeclineGroupInvitationRequest();                        // SDG.Unturned.ServerInstanceMethod`1<Steamworks.CSteamID>
				static void SendDeclineGroupInvitationRequest_Set(unknown_type value);
				Single lastLeaveGroupRequestRealtime();                                         // System.Single
				void lastLeaveGroupRequestRealtime_Set(Single value);
				static unknown_type SendLeaveGroupRequest();                                    // SDG.Unturned.ServerInstanceMethod
				static void SendLeaveGroupRequest_Set(unknown_type value);
				static unknown_type SendDeleteGroupRequest();                                   // SDG.Unturned.ServerInstanceMethod
				static void SendDeleteGroupRequest_Set(unknown_type value);
				static unknown_type SendCreateGroupRequest();                                   // SDG.Unturned.ServerInstanceMethod
				static void SendCreateGroupRequest_Set(unknown_type value);
				static unknown_type SendAddGroupInviteClient();                                 // SDG.Unturned.ClientInstanceMethod`1<Steamworks.CSteamID>
				static void SendAddGroupInviteClient_Set(unknown_type value);
				static unknown_type SendRemoveGroupInviteClient();                              // SDG.Unturned.ClientInstanceMethod`1<Steamworks.CSteamID>
				static void SendRemoveGroupInviteClient_Set(unknown_type value);
				static unknown_type SendAddGroupInviteRequest();                                // SDG.Unturned.ServerInstanceMethod`1<Steamworks.CSteamID>
				static void SendAddGroupInviteRequest_Set(unknown_type value);
				static unknown_type SendPromoteRequest();                                       // SDG.Unturned.ServerInstanceMethod`1<Steamworks.CSteamID>
				static void SendPromoteRequest_Set(unknown_type value);
				static unknown_type SendDemoteRequest();                                        // SDG.Unturned.ServerInstanceMethod`1<Steamworks.CSteamID>
				static void SendDemoteRequest_Set(unknown_type value);
				static unknown_type SendKickFromGroup();                                        // SDG.Unturned.ServerInstanceMethod`1<Steamworks.CSteamID>
				static void SendKickFromGroup_Set(unknown_type value);
				static unknown_type SendRenameGroupRequest();                                   // SDG.Unturned.ServerInstanceMethod`1<System.String>
				static void SendRenameGroupRequest_Set(unknown_type value);
				static unknown_type SendSellToVendor();                                         // SDG.Unturned.ServerInstanceMethod`3<System.Guid,System.Byte,System.Boolean>
				static void SendSellToVendor_Set(unknown_type value);
				static unknown_type SendBuyFromVendor();                                        // SDG.Unturned.ServerInstanceMethod`3<System.Guid,System.Byte,System.Boolean>
				static void SendBuyFromVendor_Set(unknown_type value);
				static unknown_type SendSetFlag();                                              // SDG.Unturned.ClientInstanceMethod`2<System.UInt16,System.Int16>
				static void SendSetFlag_Set(unknown_type value);
				static unknown_type SendRemoveFlag();                                           // SDG.Unturned.ClientInstanceMethod`1<System.UInt16>
				static void SendRemoveFlag_Set(unknown_type value);
				static unknown_type SendAddQuest();                                             // SDG.Unturned.ClientInstanceMethod`1<System.Guid>
				static void SendAddQuest_Set(unknown_type value);
				static unknown_type SendRemoveQuest();                                          // SDG.Unturned.ClientInstanceMethod`2<System.Guid,System.Boolean>
				static void SendRemoveQuest_Set(unknown_type value);
				static unknown_type SendTrackQuest();                                           // SDG.Unturned.ServerInstanceMethod`1<System.Guid>
				static void SendTrackQuest_Set(unknown_type value);
				static unknown_type SendAbandonQuestRequest();                                  // SDG.Unturned.ServerInstanceMethod`1<System.Guid>
				static void SendAbandonQuestRequest_Set(unknown_type value);
				static unknown_type SendChooseDialogueResponseRequest();                        // SDG.Unturned.ServerInstanceMethod`2<System.Guid,System.Byte>
				static void SendChooseDialogueResponseRequest_Set(unknown_type value);
				static unknown_type SendChooseDefaultNextDialogueRequest();                     // SDG.Unturned.ServerInstanceMethod`2<System.Guid,System.Byte>
				static void SendChooseDefaultNextDialogueRequest_Set(unknown_type value);
				static unknown_type SendQuests();                                               // SDG.Unturned.ClientInstanceMethod
				static void SendQuests_Set(unknown_type value);
				static unknown_type SendTalkWithNpcResponse();                                  // SDG.Unturned.ClientInstanceMethod`4<SDG.Unturned.NetId,System.Guid,System.Byte,System.Boolean>
				static void SendTalkWithNpcResponse_Set(unknown_type value);
				static unknown_type SendOpenDialogue();                                         // SDG.Unturned.ClientInstanceMethod`3<System.Guid,System.Byte,System.Boolean>
				static void SendOpenDialogue_Set(unknown_type value);
				static unknown_type SendOpenVendor();                                           // SDG.Unturned.ClientInstanceMethod`4<System.Guid,System.Guid,System.Byte,System.Boolean>
				static void SendOpenVendor_Set(unknown_type value);
				UnityEngine::GameObject* delayedRewardsGameObject();                            // UnityEngine.GameObject
				void delayedRewardsGameObject_Set(UnityEngine::GameObject* value);
				unknown_type delayedRewardsComponent();                                         // SDG.Unturned.PlayerDelayedQuestRewardsComponent
				void delayedRewardsComponent_Set(unknown_type value);
				Boolean hasCreatedDelayedRewards();                                             // System.Boolean
				void hasCreatedDelayedRewards_Set(Boolean value);
				Boolean wasLoadCalled();                                                        // System.Boolean
				void wasLoadCalled_Set(Boolean value);
				Single lastVehiclePurchaseRealtime();                                           // System.Single
				void lastVehiclePurchaseRealtime_Set(Single value);
				void add_OnLocalPlayerQuestsChanged(unknown_type value);
				void remove_OnLocalPlayerQuestsChanged(unknown_type value);
				static void add_onAnyFlagChanged(unknown_type value);
				static void remove_onAnyFlagChanged(unknown_type value);
				static void add_onGroupChanged(unknown_type value);
				static void remove_onGroupChanged(unknown_type value);
				static void broadcastGroupChanged(SDG::Unturned::PlayerQuests* sender, unknown_type oldGroupID, unknown_type oldGroupRank, unknown_type newGroupID, unknown_type newGroupRank);
				static void triggerGroupUpdated(SDG::Unturned::PlayerQuests* sender);
				void add_TrackedQuestUpdated(unknown_type value);
				void remove_TrackedQuestUpdated(unknown_type value);
				void TriggerTrackedQuestUpdated();
				void add_groupIDChanged(unknown_type value);
				void remove_groupIDChanged(unknown_type value);
				void triggerGroupIDChanged(unknown_type oldGroupID, unknown_type newGroupID);
				void add_groupRankChanged(unknown_type value);
				void remove_groupRankChanged(unknown_type value);
				void triggerGroupRankChanged(unknown_type oldGroupRank, unknown_type newGroupRank);
				void add_groupInvitesChanged(unknown_type value);
				void remove_groupInvitesChanged(unknown_type value);
				void triggerGroupInvitesChanged();
				void add_questCompleted(unknown_type value);
				void remove_questCompleted(unknown_type value);
				void triggerQuestCompleted(unknown_type asset);
				List<unknown_type>* get_flagsList();
				void set_flagsList(List<unknown_type>* value);
				unknown_type GetTrackedQuest();
				UInt16 get_TrackedQuestID();
				List<unknown_type>* get_questsList();
				void set_questsList(List<unknown_type>* value);
				Boolean get_isMarkerPlaced();
				void set_isMarkerPlaced(Boolean value);
				UnityEngine::Vector3 get_markerPosition();
				void set_markerPosition(UnityEngine::Vector3 value);
				String* get_markerTextOverride();
				void set_markerTextOverride(String* value);
				UInt32 get_radioFrequency();
				void set_radioFrequency(UInt32 value);
				unknown_type get_groupID();
				void set_groupID(unknown_type value);
				unknown_type get_groupRank();
				void set_groupRank(unknown_type value);
				unknown_type get_groupInvites();
				void set_groupInvites(unknown_type value);
				Boolean get_useMaxGroupMembersLimit();
				Boolean get_hasSpaceForMoreMembersInGroup();
				Boolean get_canChangeGroupMembership();
				Boolean get_hasPermissionToChangeName();
				Boolean get_hasPermissionToChangeRank();
				Boolean get_hasPermissionToInviteMembers();
				Boolean get_hasPermissionToKickMembers();
				Boolean get_hasPermissionToCreateGroup();
				Boolean get_hasPermissionToLeaveGroup();
				Boolean get_hasPermissionToDeleteGroup();
				Boolean get_canBeKickedFromGroup();
				Boolean get_isMemberOfAGroup();
				Boolean IsCutsceneModeActive();
				void ServerSetCutsceneModeActive(Boolean active);
				Boolean isMemberOfGroup(unknown_type groupID);
				Boolean isMemberOfSameGroupAs(SDG::Unturned::Player* player);
				void tellSetMarker(unknown_type steamID, Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition, String* newMarkerTextOverride);
				void ReceiveCutsceneMode(Boolean newCutsceneMode);
				void ReceiveMarkerState(Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition, String* newMarkerTextOverride);
				void askSetMarker(unknown_type steamID, Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition);
				void ReceiveSetMarkerRequest(Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition);
				void replicateSetMarker(Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition, String* newMarkerTextOverride);
				void sendSetMarker(Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition);
				void tellSetRadioFrequency(unknown_type steamID, UInt32 newRadioFrequency);
				void ReceiveRadioFrequencyState(UInt32 newRadioFrequency);
				void askSetRadioFrequency(unknown_type steamID, UInt32 newRadioFrequency);
				void ReceiveSetRadioFrequencyRequest(UInt32 newRadioFrequency);
				void sendSetRadioFrequency(UInt32 newRadioFrequency);
				void tellSetGroup(unknown_type steamID, unknown_type newGroupID, Byte newGroupRank);
				void ReceiveGroupState(unknown_type newGroupID, unknown_type newGroupRank);
				Boolean removeGroupInvite(unknown_type newGroupID);
				void changeRank(unknown_type newRank);
				void askJoinGroupInvite(unknown_type steamID, unknown_type newGroupID);
				void ServerAssignToMainGroup();
				Boolean ServerAssignToGroup(unknown_type newGroupID, unknown_type newRank, Boolean bypassMemberLimit);
				void ReceiveAcceptGroupInvitationRequest(unknown_type newGroupID);
				void SendAcceptGroupInvitation(unknown_type newGroupID);
				void askIgnoreGroupInvite(unknown_type steamID, unknown_type newGroupID);
				void ReceiveDeclineGroupInvitationRequest(unknown_type newGroupID);
				void SendDeclineGroupInvitation(unknown_type newGroupID);
				void leaveGroup(Boolean force);
				void askLeaveGroup(unknown_type steamID);
				void ReceiveLeaveGroupRequest();
				void sendLeaveGroup();
				void deleteGroup();
				void askDeleteGroup(unknown_type steamID);
				void ReceiveDeleteGroupRequest();
				void sendDeleteGroup();
				void askCreateGroup(unknown_type steamID);
				void ReceiveCreateGroupRequest();
				void sendCreateGroup();
				void addGroupInvite(unknown_type newGroupID);
				void tellAddGroupInvite(unknown_type steamID, unknown_type newGroupID);
				void ReceiveAddGroupInviteClient(unknown_type newGroupID);
				void ReceiveRemoveGroupInviteClient(unknown_type newGroupID);
				Boolean ServerRemoveGroupInvitation(unknown_type groupId);
				void sendAddGroupInvite(unknown_type newGroupID);
				void askAddGroupInvite(unknown_type steamID, unknown_type targetID);
				void ReceiveAddGroupInviteRequest(unknown_type targetID);
				void sendAskAddGroupInvite(unknown_type targetID);
				void askPromote(unknown_type steamID, unknown_type targetID);
				void ReceivePromoteRequest(unknown_type targetID);
				void sendPromote(unknown_type targetID);
				void askDemote(unknown_type steamID, unknown_type targetID);
				void ReceiveDemoteRequest(unknown_type targetID);
				void sendDemote(unknown_type targetID);
				void askKickFromGroup(unknown_type steamID, unknown_type targetID);
				void ReceiveKickFromGroup(unknown_type targetID);
				void sendKickFromGroup(unknown_type targetID);
				void askRenameGroup(unknown_type steamID, String* newName);
				void ReceiveRenameGroupRequest(String* newName);
				void sendRenameGroup(String* newName);
				void setFlag(UInt16 id, Int16 value);
				Boolean getFlag(UInt16 id, unknown_type value);
				void removeFlag(UInt16 id);
				Int32 countValidQuests();
				void AddQuest(unknown_type questAsset);
				void addQuest(UInt16 id);
				Boolean getQuest(UInt16 id, unknown_type quest);
				unknown_type GetQuestStatus(unknown_type questAsset);
				unknown_type getQuestStatus(UInt16 id);
				void RemoveQuest(unknown_type questAsset, Boolean wasCompleted);
				void removeQuest(UInt16 id);
				void trackHordeKill();
				void trackZombieKill(unknown_type zombie);
				void trackObjectKill(unknown_type objectGuid, Byte nav);
				void trackTreeKill(unknown_type treeGuid);
				void trackAnimalKill(unknown_type animal);
				void trackPlayerKill(SDG::Unturned::Player* enemyPlayer);
				void CompleteQuest(unknown_type questAsset, Boolean ignoreNPC);
				void completeQuest(UInt16 id, Boolean ignoreNPC);
				void askSellToVendor(unknown_type steamID, UInt16 id, Byte index);
				void ReceiveSellToVendor(unknown_type context, unknown_type assetGuid, Byte index, Boolean asManyAsPossible);
				void sendSellToVendor(unknown_type assetGuid, Byte index, Boolean asManyAsPossible);
				void sendSellToVendor1(UInt16 id, Byte index);
				void askBuyFromVendor(unknown_type steamID, UInt16 id, Byte index);
				void ReceiveBuyFromVendor(unknown_type context, unknown_type assetGuid, Byte index, Boolean asManyAsPossible);
				void sendBuyFromVendor(unknown_type assetGuid, Byte index, Boolean asManyAsPossible);
				void sendBuyFromVendor1(UInt16 id, Byte index);
				void tellSetFlag(unknown_type steamID, UInt16 id, Int16 value);
				void ReceiveSetFlag(UInt16 id, Int16 value);
				void sendSetFlag(UInt16 id, Int16 value);
				void tellRemoveFlag(unknown_type steamID, UInt16 id);
				void ReceiveRemoveFlag(UInt16 id);
				void sendRemoveFlag(UInt16 id);
				void tellAddQuest(unknown_type steamID, UInt16 id);
				void ReceiveAddQuest(unknown_type assetGuid);
				void ServerAddQuest(unknown_type questAsset);
				void sendAddQuest(UInt16 id);
				void tellRemoveQuest(unknown_type steamID, UInt16 id);
				void ReceiveRemoveQuest(unknown_type assetGuid, Boolean wasCompleted);
				void ServerRemoveQuest(unknown_type questAsset);
				void ServerRemoveQuest1(unknown_type questAsset, Boolean wasCompleted);
				void sendRemoveQuest(UInt16 id);
				void TrackQuest(unknown_type questAsset);
				void trackQuest(UInt16 id);
				void askTrackQuest(unknown_type steamID, UInt16 id);
				void ReceiveTrackQuest(unknown_type assetGuid);
				void ClientTrackQuest(unknown_type questAsset);
				void sendTrackQuest(UInt16 id);
				void AbandonQuest(unknown_type questAsset);
				void abandonQuest(UInt16 id);
				void askAbandonQuest(unknown_type steamID, UInt16 id);
				void ReceiveAbandonQuestRequest(unknown_type assetGuid);
				void ClientAbandonQuest(unknown_type questAsset);
				void sendAbandonQuest(UInt16 id);
				void ReceiveChooseDialogueResponseRequest(unknown_type context, unknown_type assetGuid, Byte index);
				void ReceiveChooseDefaultNextDialogueRequest(unknown_type context, unknown_type assetGuid, Byte index);
				void ClientChooseDialogueResponse(unknown_type assetGuid, Byte index);
				void ClientChooseNextDialogue(unknown_type assetGuid, Byte index);
				void tellQuests(unknown_type steamID);
				void ReceiveQuests(unknown_type context);
				void askQuests(unknown_type steamID);
				void WriteAllState(unknown_type writer);
				void WriteOwnerState(unknown_type writer);
				void SendInitialPlayerState(SDG::Unturned::SteamPlayer* client);
				void SendInitialPlayerState1(List<unknown_type>* transportConnections);
				void OnPlayerNavChanged(SDG::Unturned::PlayerMovement* sender, Byte oldNav, Byte newNav);
				void onExperienceUpdated(UInt32 experience);
				void onReputationUpdated(Int32 reputation);
				void onInventoryStateUpdated();
				void onTimeOfDayChanged();
				void ReceiveTalkWithNpcResponse(unknown_type context, unknown_type targetNpcNetId, unknown_type dialogueAssetGuid, Byte messageIndex, Boolean hasNextDialogue);
				void ApproveTalkWithNpcRequest(unknown_type targetNpc, unknown_type rootDialogueAsset);
				void ClearActiveNpc();
				void ReceiveOpenDialogue(unknown_type context, unknown_type dialogueAssetGuid, Byte messageIndex, Boolean hasNextDialogue);
				void ReceiveOpenVendor(unknown_type context, unknown_type vendorAssetGuid, unknown_type dialogueAssetGuid, Byte messageIndex, Boolean hasNextDialogue);
				unknown_type GetOrCreateDelayedQuestRewards();
				void StopDelayedQuestRewards();
				void OnLifeUpdated(Boolean isDead);
				void InitializePlayer();
				void Start();
				void OnDestroy();
				void load();
				void loadMainGroup();
				Int32 FindIndexOfQuest(unknown_type asset);
				void save();
				void SendInitialPlayerStateb__273_0(unknown_type writer);
			};
			class Provider
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static Provider* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static String* STEAM_IC();                                                      // System.String
				static void STEAM_IC_Set(String* value);
				static String* STEAM_DC();                                                      // System.String
				static void STEAM_DC_Set(String* value);
				static unknown_type APP_ID();                                                   // Steamworks.AppId_t
				static void APP_ID_Set(unknown_type value);
				static unknown_type PRO_ID();                                                   // Steamworks.AppId_t
				static void PRO_ID_Set(unknown_type value);
				static String* APP_VERSION();                                                   // System.String
				static void APP_VERSION_Set(String* value);
				static UInt32 APP_VERSION_PACKED();                                             // System.UInt32
				static void APP_VERSION_PACKED_Set(UInt32 value);
				static String* APP_NAME();                                                      // System.String
				static void APP_NAME_Set(String* value);
				static String* APP_AUTHOR();                                                    // System.String
				static void APP_AUTHOR_Set(String* value);
				static Int32 CLIENT_TIMEOUT();                                                  // System.Int32
				static void CLIENT_TIMEOUT_Set(Int32 value);
				static Single PING_REQUEST_INTERVAL();                                          // System.Single
				static void PING_REQUEST_INTERVAL_Set(Single value);
				static Boolean isCapturingScreenshot();                                         // System.Boolean
				static void isCapturingScreenshot_Set(Boolean value);
				static unknown_type screenshotBlitMaterial();                                   // SDG.Unturned.StaticResourceRef`1<UnityEngine.Material>
				static void screenshotBlitMaterial_Set(unknown_type value);
				static unknown_type screenshotRequestedCallback();                              // Steamworks.Callback`1<Steamworks.ScreenshotRequested_t>
				static void screenshotRequestedCallback_Set(unknown_type value);
				static String* privateLanguage();                                               // System.String
				static void privateLanguage_Set(String* value);
				static Boolean languageIsEnglish();                                             // System.Boolean
				static void languageIsEnglish_Set(Boolean value);
				static String* _path();                                                         // System.String
				static void _path_Set(String* value);
				static String* localizationRoot();                                              // System.String
				static void localizationRoot_Set(String* value);
				static unknown_type localization();                                             // SDG.Unturned.Local
				static void localization_Set(unknown_type value);
				static List<String*>* streamerNames();                                          // System.Collections.Generic.List`1<System.String>
				static void streamerNames_Set(List<String*>* value);
				static IntPtr battlEyeClientHandle();                                           // System.IntPtr
				static void battlEyeClientHandle_Set(IntPtr value);
				static unknown_type battlEyeClientInitData();                                   // BattlEye.BEClient/BECL_GAME_DATA
				static void battlEyeClientInitData_Set(unknown_type value);
				static unknown_type battlEyeClientRunData();                                    // BattlEye.BEClient/BECL_BE_DATA
				static void battlEyeClientRunData_Set(unknown_type value);
				static Boolean battlEyeHasRequiredRestart();                                    // System.Boolean
				static void battlEyeHasRequiredRestart_Set(Boolean value);
				static unknown_type battlEyeBufferSize();                                       // SDG.NetPak.NetLength
				static void battlEyeBufferSize_Set(unknown_type value);
				static IntPtr battlEyeServerHandle();                                           // System.IntPtr
				static void battlEyeServerHandle_Set(IntPtr value);
				static unknown_type battlEyeServerInitData();                                   // BattlEye.BEServer/BESV_GAME_DATA
				static void battlEyeServerInitData_Set(unknown_type value);
				static unknown_type battlEyeServerRunData();                                    // BattlEye.BEServer/BESV_BE_DATA
				static void battlEyeServerRunData_Set(unknown_type value);
				static unknown_type onBattlEyeKick();                                           // SDG.Unturned.Provider/BattlEyeKickCallback
				static void onBattlEyeKick_Set(unknown_type value);
				static UInt32 _bytesSent();                                                     // System.UInt32
				static void _bytesSent_Set(UInt32 value);
				static UInt32 _bytesReceived();                                                 // System.UInt32
				static void _bytesReceived_Set(UInt32 value);
				static UInt32 _packetsSent();                                                   // System.UInt32
				static void _packetsSent_Set(UInt32 value);
				static UInt32 _packetsReceived();                                               // System.UInt32
				static void _packetsReceived_Set(UInt32 value);
				static unknown_type _currentServerAdvertisement();                              // SDG.Unturned.SteamServerAdvertisement
				static void _currentServerAdvertisement_Set(unknown_type value);
				static unknown_type _currentServerConnectParameters();                          // SDG.Unturned.ServerConnectParameters
				static void _currentServerConnectParameters_Set(unknown_type value);
				static unknown_type _server();                                                  // Steamworks.CSteamID
				static void _server_Set(unknown_type value);
				static unknown_type _client();                                                  // Steamworks.CSteamID
				static void _client_Set(unknown_type value);
				static unknown_type _user();                                                    // Steamworks.CSteamID
				static void _user_Set(unknown_type value);
				static Array<Byte>* _clientHash();                                              // System.Byte[]
				static void _clientHash_Set(Array<Byte>* value);
				static String* _clientName();                                                   // System.String
				static void _clientName_Set(String* value);
				static List<SDG::Unturned::SteamPlayer*>* _clients();                           // System.Collections.Generic.List`1<SDG.Unturned.SteamPlayer>
				static void _clients_Set(List<SDG::Unturned::SteamPlayer*>* value);
				static List<unknown_type>* pending();                                           // System.Collections.Generic.List`1<SDG.Unturned.SteamPending>
				static void pending_Set(List<unknown_type>* value);
				static Boolean _isServer();                                                     // System.Boolean
				static void _isServer_Set(Boolean value);
				static Boolean _isClient();                                                     // System.Boolean
				static void _isClient_Set(Boolean value);
				static Boolean _isPro();                                                        // System.Boolean
				static void _isPro_Set(Boolean value);
				static Boolean _isConnected();                                                  // System.Boolean
				static void _isConnected_Set(Boolean value);
				static Boolean isWaitingForWorkshopResponse();                                  // System.Boolean
				static void isWaitingForWorkshopResponse_Set(Boolean value);
				static Boolean isWaitingForAuthenticationResponse();                            // System.Boolean
				static void isWaitingForAuthenticationResponse_Set(Boolean value);
				static Double sentAuthenticationRequestTime();                                  // System.Double
				static void sentAuthenticationRequestTime_Set(Double value);
				static List<unknown_type>* waitingForExpectedWorkshopItems();                   // System.Collections.Generic.List`1<Steamworks.PublishedFileId_t>
				static void waitingForExpectedWorkshopItems_Set(List<unknown_type>* value);
				static unknown_type authorityHoliday();                                         // SDG.Unturned.ENPCHoliday
				static void authorityHoliday_Set(unknown_type value);
				static unknown_type currentServerWorkshopResponse();                            // SDG.Unturned.Provider/CachedWorkshopResponse
				static void currentServerWorkshopResponse_Set(unknown_type value);
				static List<UInt64>* _serverWorkshopFileIDs();                                  // System.Collections.Generic.List`1<System.UInt64>
				static void _serverWorkshopFileIDs_Set(List<UInt64>* value);
				static List<unknown_type>* serverRequiredWorkshopFiles();                       // System.Collections.Generic.List`1<SDG.Unturned.Provider/ServerRequiredWorkshopFile>
				static void serverRequiredWorkshopFiles_Set(List<unknown_type>* value);
				static Boolean isLoadingUGC();                                                  // System.Boolean
				static void isLoadingUGC_Set(Boolean value);
				static Boolean isLoadingInventory();                                            // System.Boolean
				static void isLoadingInventory_Set(Boolean value);
				static Int32 nextPlayerChannelId();                                             // System.Int32
				static void nextPlayerChannelId_Set(Int32 value);
				static unknown_type _connectionFailureInfo();                                   // SDG.Unturned.ESteamConnectionFailureInfo
				static void _connectionFailureInfo_Set(unknown_type value);
				static String* _connectionFailureReason();                                      // System.String
				static void _connectionFailureReason_Set(String* value);
				static UInt32 _connectionFailureDuration();                                     // System.UInt32
				static void _connectionFailureDuration_Set(UInt32 value);
				static List<SDG::Unturned::SteamChannel*>* _receivers();                        // System.Collections.Generic.List`1<SDG.Unturned.SteamChannel>
				static void _receivers_Set(List<SDG::Unturned::SteamChannel*>* value);
				static Array<Byte>* buffer();                                                   // System.Byte[]
				static void buffer_Set(Array<Byte>* value);
				static List<unknown_type>* critMods();                                          // System.Collections.Generic.List`1<SDG.Framework.Modules.Module>
				static void critMods_Set(List<unknown_type>* value);
				static unknown_type modBuilder();                                               // System.Text.StringBuilder
				static void modBuilder_Set(unknown_type value);
				static Int32 nextBattlEyePlayerId();                                            // System.Int32
				static void nextBattlEyePlayerId_Set(Int32 value);
				static unknown_type onLoginSpawning();                                          // SDG.Unturned.Provider/LoginSpawningHandler
				static void onLoginSpawning_Set(unknown_type value);
				static Boolean isWaitingForConnectResponse();                                   // System.Boolean
				static void isWaitingForConnectResponse_Set(Boolean value);
				static Single sentConnectRequestTime();                                         // System.Single
				static void sentConnectRequestTime_Set(Single value);
				static Boolean canCurrentlyHandleClientTransportFailure();                      // System.Boolean
				static void canCurrentlyHandleClientTransportFailure_Set(Boolean value);
				static Boolean hasPendingClientTransportFailure();                              // System.Boolean
				static void hasPendingClientTransportFailure_Set(Boolean value);
				static String* pendingClientTransportFailureMessage();                          // System.String
				static void pendingClientTransportFailureMessage_Set(String* value);
				static unknown_type MAX_SKINS_LENGTH();                                         // SDG.NetPak.NetLength
				static void MAX_SKINS_LENGTH_Set(unknown_type value);
				static unknown_type clientTransport();                                          // SDG.NetTransport.IClientTransport
				static void clientTransport_Set(unknown_type value);
				static unknown_type serverTransport();                                          // SDG.NetTransport.IServerTransport
				static void serverTransport_Set(unknown_type value);
				static unknown_type onCommenceShutdown();                                       // SDG.Unturned.Provider/CommenceShutdownHandler
				static void onCommenceShutdown_Set(unknown_type value);
				static Int32 countShutdownTimer();                                              // System.Int32
				static void countShutdownTimer_Set(Int32 value);
				static String* shutdownMessage();                                               // System.String
				static void shutdownMessage_Set(String* value);
				static Single lastTimerMessage();                                               // System.Single
				static void lastTimerMessage_Set(Single value);
				static Boolean didServerShutdownTimerReachZero();                               // System.Boolean
				static void didServerShutdownTimerReachZero_Set(Boolean value);
				static Boolean isVacActive();                                                   // System.Boolean
				static void isVacActive_Set(Boolean value);
				static Boolean isBattlEyeActive();                                              // System.Boolean
				static void isBattlEyeActive_Set(Boolean value);
				static Boolean hasSetIsBattlEyeActive();                                        // System.Boolean
				static void hasSetIsBattlEyeActive_Set(Boolean value);
				static Boolean isServerConnectedToSteam();                                      // System.Boolean
				static void isServerConnectedToSteam_Set(Boolean value);
				static unknown_type autoShutdownManager();                                      // SDG.Unturned.BuiltinAutoShutdown
				static void autoShutdownManager_Set(unknown_type value);
				static unknown_type dswUpdateMonitor();                                         // SDG.Unturned.IDedicatedWorkshopUpdateMonitor
				static void dswUpdateMonitor_Set(unknown_type value);
				static Boolean isDedicatedUGCInstalled();                                       // System.Boolean
				static void isDedicatedUGCInstalled_Set(Boolean value);
				static Int32 STEAM_KEYVALUE_MAX_VALUE_LENGTH();                                 // System.Int32
				static void STEAM_KEYVALUE_MAX_VALUE_LENGTH_Set(Int32 value);
				static unknown_type onServerWritingPacket();                                    // SDG.Unturned.Provider/ServerWritingPacketHandler
				static void onServerWritingPacket_Set(unknown_type value);
				static List<unknown_type>* workshopRequests();                                  // System.Collections.Generic.List`1<SDG.Unturned.Provider/WorkshopRequestLog>
				static void workshopRequests_Set(List<unknown_type>* value);
				static List<unknown_type>* cachedWorkshopResponses();                           // System.Collections.Generic.List`1<SDG.Unturned.Provider/CachedWorkshopResponse>
				static void cachedWorkshopResponses_Set(List<unknown_type>* value);
				static List<unknown_type>* netIgnoredSteamIDs();                                // System.Collections.Generic.List`1<Steamworks.CSteamID>
				static void netIgnoredSteamIDs_Set(List<unknown_type>* value);
				static unknown_type _constNetEvents();                                          // SDG.Unturned.CommandLineFlag
				static void _constNetEvents_Set(unknown_type value);
				static unknown_type onServerReadingPacket();                                    // SDG.Unturned.Provider/ServerReadingPacketHandler
				static void onServerReadingPacket_Set(unknown_type value);
				List<SDG::Unturned::SteamPlayer*>* clientsWithBadConnecion();                   // System.Collections.Generic.List`1<SDG.Unturned.SteamPlayer>
				void clientsWithBadConnecion_Set(List<SDG::Unturned::SteamPlayer*>* value);
				static unknown_type onServerConnected();                                        // SDG.Unturned.Provider/ServerConnected
				static void onServerConnected_Set(unknown_type value);
				static unknown_type onServerDisconnected();                                     // SDG.Unturned.Provider/ServerDisconnected
				static void onServerDisconnected_Set(unknown_type value);
				static unknown_type onServerHosted();                                           // SDG.Unturned.Provider/ServerHosted
				static void onServerHosted_Set(unknown_type value);
				static unknown_type onServerShutdown();                                         // SDG.Unturned.Provider/ServerShutdown
				static void onServerShutdown_Set(unknown_type value);
				static unknown_type p2pSessionConnectFail();                                    // Steamworks.Callback`1<Steamworks.P2PSessionConnectFail_t>
				static void p2pSessionConnectFail_Set(unknown_type value);
				static unknown_type onCheckValid();                                             // SDG.Unturned.Provider/CheckValid
				static void onCheckValid_Set(unknown_type value);
				static unknown_type onCheckValidWithExplanation();                              // SDG.Unturned.Provider/CheckValidWithExplanation
				static void onCheckValidWithExplanation_Set(unknown_type value);
				static unknown_type onCheckBanStatus();                                         // SDG.Unturned.Provider/CheckBanStatusHandler
				static void onCheckBanStatus_Set(unknown_type value);
				static unknown_type onCheckBanStatusWithHWID();                                 // SDG.Unturned.Provider/CheckBanStatusWithHWIDHandler
				static void onCheckBanStatusWithHWID_Set(unknown_type value);
				static unknown_type onBanPlayerRequested();                                     // SDG.Unturned.Provider/RequestBanPlayerHandler
				static void onBanPlayerRequested_Set(unknown_type value);
				static unknown_type onBanPlayerRequestedV2();                                   // SDG.Unturned.Provider/RequestBanPlayerHandlerV2
				static void onBanPlayerRequestedV2_Set(unknown_type value);
				static unknown_type onUnbanPlayerRequested();                                   // SDG.Unturned.Provider/RequestUnbanPlayerHandler
				static void onUnbanPlayerRequested_Set(unknown_type value);
				static unknown_type validateAuthTicketResponse();                               // Steamworks.Callback`1<Steamworks.ValidateAuthTicketResponse_t>
				static void validateAuthTicketResponse_Set(unknown_type value);
				static unknown_type clientGroupStatus();                                        // Steamworks.Callback`1<Steamworks.GSClientGroupStatus_t>
				static void clientGroupStatus_Set(unknown_type value);
				static unknown_type clMaxPlayersLimit();                                        // SDG.Unturned.CommandLineInt
				static void clMaxPlayersLimit_Set(unknown_type value);
				static Byte _maxPlayers();                                                      // System.Byte
				static void _maxPlayers_Set(Byte value);
				static Byte queueSize();                                                        // System.Byte
				static void queueSize_Set(Byte value);
				static Byte _queuePosition();                                                   // System.Byte
				static void _queuePosition_Set(Byte value);
				static unknown_type onQueuePositionUpdated();                                   // SDG.Unturned.Provider/QueuePositionUpdated
				static void onQueuePositionUpdated_Set(unknown_type value);
				static String* _serverName();                                                   // System.String
				static void _serverName_Set(String* value);
				static UInt32 ip();                                                             // System.UInt32
				static void ip_Set(UInt32 value);
				static String* bindAddress();                                                   // System.String
				static void bindAddress_Set(String* value);
				static UInt16 port();                                                           // System.UInt16
				static void port_Set(UInt16 value);
				static Array<Byte>* _serverPasswordHash();                                      // System.Byte[]
				static void _serverPasswordHash_Set(Array<Byte>* value);
				static String* _serverPassword();                                               // System.String
				static void _serverPassword_Set(String* value);
				static String* map();                                                           // System.String
				static void map_Set(String* value);
				static Boolean isPvP();                                                         // System.Boolean
				static void isPvP_Set(Boolean value);
				static Boolean isWhitelisted();                                                 // System.Boolean
				static void isWhitelisted_Set(Boolean value);
				static Boolean hideAdmins();                                                    // System.Boolean
				static void hideAdmins_Set(Boolean value);
				static Boolean hasCheats();                                                     // System.Boolean
				static void hasCheats_Set(Boolean value);
				static Boolean filterName();                                                    // System.Boolean
				static void filterName_Set(Boolean value);
				static unknown_type mode();                                                     // SDG.Unturned.EGameMode
				static void mode_Set(unknown_type value);
				static Boolean isGold();                                                        // System.Boolean
				static void isGold_Set(Boolean value);
				static unknown_type gameMode();                                                 // SDG.Unturned.GameMode
				static void gameMode_Set(unknown_type value);
				static unknown_type cameraMode();                                               // SDG.Unturned.ECameraMode
				static void cameraMode_Set(unknown_type value);
				static unknown_type _statusData();                                              // SDG.Unturned.StatusData
				static void _statusData_Set(unknown_type value);
				static unknown_type _preferenceData();                                          // SDG.Unturned.PreferenceData
				static void _preferenceData_Set(unknown_type value);
				static unknown_type _configData();                                              // SDG.Unturned.ConfigData
				static void _configData_Set(unknown_type value);
				static unknown_type _modeConfigData();                                          // SDG.Unturned.ModeConfigData
				static void _modeConfigData_Set(unknown_type value);
				static unknown_type onRejectingPlayer();                                        // SDG.Unturned.Provider/RejectingPlayerCallback
				static void onRejectingPlayer_Set(unknown_type value);
				Int32 clientsKickedForTransportConnectionFailureCount();                        // System.Int32
				void clientsKickedForTransportConnectionFailureCount_Set(Int32 value);
				static UInt32 STEAM_FAVORITE_FLAG_FAVORITE();                                   // System.UInt32
				static void STEAM_FAVORITE_FLAG_FAVORITE_Set(UInt32 value);
				static UInt32 STEAM_FAVORITE_FLAG_HISTORY();                                    // System.UInt32
				static void STEAM_FAVORITE_FLAG_HISTORY_Set(UInt32 value);
				static List<unknown_type>* cachedFavorites();                                   // System.Collections.Generic.List`1<SDG.Unturned.Provider/CachedFavorite>
				static void cachedFavorites_Set(List<unknown_type>* value);
				static unknown_type onClientConnected();                                        // SDG.Unturned.Provider/ClientConnected
				static void onClientConnected_Set(unknown_type value);
				static unknown_type onClientDisconnected();                                     // SDG.Unturned.Provider/ClientDisconnected
				static void onClientDisconnected_Set(unknown_type value);
				static unknown_type onEnemyConnected();                                         // SDG.Unturned.Provider/EnemyConnected
				static void onEnemyConnected_Set(unknown_type value);
				static unknown_type onEnemyDisconnected();                                      // SDG.Unturned.Provider/EnemyDisconnected
				static void onEnemyDisconnected_Set(unknown_type value);
				static unknown_type personaStateChange();                                       // Steamworks.Callback`1<Steamworks.PersonaStateChange_t>
				static void personaStateChange_Set(unknown_type value);
				static unknown_type getTicketForWebApiResponseCallback();                       // Steamworks.Callback`1<Steamworks.GetTicketForWebApiResponse_t>
				static void getTicketForWebApiResponseCallback_Set(unknown_type value);
				static unknown_type gameServerChangeRequested();                                // Steamworks.Callback`1<Steamworks.GameServerChangeRequested_t>
				static void gameServerChangeRequested_Set(unknown_type value);
				static unknown_type gameRichPresenceJoinRequested();                            // Steamworks.Callback`1<Steamworks.GameRichPresenceJoinRequested_t>
				static void gameRichPresenceJoinRequested_Set(unknown_type value);
				static unknown_type ticketHandle();                                             // Steamworks.HAuthTicket
				static void ticketHandle_Set(unknown_type value);
				static unknown_type pluginTicketHandles();                                      // System.Collections.Generic.Dictionary`2<Steamworks.HAuthTicket,System.String>
				static void pluginTicketHandles_Set(unknown_type value);
				static Single lastPingRequestTime();                                            // System.Single
				static void lastPingRequestTime_Set(Single value);
				static Single lastQueueNotificationTime();                                      // System.Single
				static void lastQueueNotificationTime_Set(Single value);
				static Single timeLastPacketWasReceivedFromServer();                            // System.Single
				static void timeLastPacketWasReceivedFromServer_Set(Single value);
				static Single timeLastPingRequestWasSentToServer();                             // System.Single
				static void timeLastPingRequestWasSentToServer_Set(Single value);
				static Single EPSILON();                                                        // System.Single
				static void EPSILON_Set(Single value);
				static Single UPDATE_TIME();                                                    // System.Single
				static void UPDATE_TIME_Set(Single value);
				static Single UPDATE_DELAY();                                                   // System.Single
				static void UPDATE_DELAY_Set(Single value);
				static Single UPDATE_DISTANCE();                                                // System.Single
				static void UPDATE_DISTANCE_Set(Single value);
				static UInt32 UPDATES();                                                        // System.UInt32
				static void UPDATES_Set(UInt32 value);
				static Single LERP();                                                           // System.Single
				static void LERP_Set(Single value);
				static Single INTERP_SPEED();                                                   // System.Single
				static void INTERP_SPEED_Set(Single value);
				static Array<Single>* pings();                                                  // System.Single[]
				static void pings_Set(Array<Single>* value);
				static Single _ping();                                                          // System.Single
				static void _ping_Set(Single value);
				static SDG::Unturned::Provider* steam();                                        // SDG.Unturned.Provider
				static void steam_Set(SDG::Unturned::Provider* value);
				static unknown_type provider();                                                 // SDG.Provider.IProvider
				static void provider_Set(unknown_type value);
				static Boolean _isInitialized();                                                // System.Boolean
				static void _isInitialized_Set(Boolean value);
				static UInt32 timeOffset();                                                     // System.UInt32
				static void timeOffset_Set(UInt32 value);
				static UInt32 _time();                                                          // System.UInt32
				static void _time_Set(UInt32 value);
				static UInt32 initialBackendRealtimeSeconds();                                  // System.UInt32
				static void initialBackendRealtimeSeconds_Set(UInt32 value);
				static Single initialLocalRealtime();                                           // System.Single
				static void initialLocalRealtime_Set(Single value);
				static unknown_type unixEpochDateTime();                                        // System.DateTime
				static void unixEpochDateTime_Set(unknown_type value);
				static unknown_type onBackendRealtimeAvailable();                               // SDG.Unturned.Provider/BackendRealtimeAvailableHandler
				static void onBackendRealtimeAvailable_Set(unknown_type value);
				static unknown_type apiWarningMessageHook();                                    // Steamworks.SteamAPIWarningMessageHook_t
				static void apiWarningMessageHook_Set(unknown_type value);
				static Int32 debugUpdates();                                                    // System.Int32
				static void debugUpdates_Set(Int32 value);
				static Int32 debugUPS();                                                        // System.Int32
				static void debugUPS_Set(Int32 value);
				static Single debugLastUpdate();                                                // System.Single
				static void debugLastUpdate_Set(Single value);
				static Int32 debugTicks();                                                      // System.Int32
				static void debugTicks_Set(Int32 value);
				static Int32 debugTPS();                                                        // System.Int32
				static void debugTPS_Set(Int32 value);
				static Single debugLastTick();                                                  // System.Single
				static void debugLastTick_Set(Single value);
				static unknown_type downloadedIconCache();                                      // System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
				static void downloadedIconCache_Set(unknown_type value);
				static unknown_type pendingCachableIconRequests();                              // System.Collections.Generic.Dictionary`2<System.String,SDG.Unturned.Provider/PendingIconRequest>
				static void pendingCachableIconRequests_Set(unknown_type value);
				static unknown_type allowWebRequests();                                         // SDG.Unturned.CommandLineFlag
				static void allowWebRequests_Set(unknown_type value);
				static Boolean isApplicationQuitting();                                         // System.Boolean
				static void isApplicationQuitting_Set(Boolean value);
				static Boolean wasQuitGameCalled();                                             // System.Boolean
				static void wasQuitGameCalled_Set(Boolean value);
				static unknown_type shouldCheckForGoldUpgrade();                                // SDG.Unturned.CommandLineFlag
				static void shouldCheckForGoldUpgrade_Set(unknown_type value);
				static String* get_APP_VERSION();
				static void set_APP_VERSION(String* value);
				static UInt32 get_APP_VERSION_PACKED();
				static void set_APP_VERSION_PACKED(UInt32 value);
				unknown_type CaptureScreenshot();
				static void RequestScreenshot();
				static void OnSteamScreenshotRequested(unknown_type callback);
				static String* get_language();
				static void set_language(String* value);
				static String* get_path();
				static String* get_localizationRoot();
				static void set_localizationRoot(String* value);
				static List<String*>* get_streamerNames();
				static void set_streamerNames(List<String*>* value);
				static void battlEyeClientPrintMessage(String* message);
				static void battlEyeClientRequestRestart(Int32 reason);
				static void battlEyeClientSendPacket(IntPtr packetHandle, Int32 length);
				static void battlEyeServerPrintMessage(String* message);
				static void add_onBattlEyeKick(unknown_type value);
				static void remove_onBattlEyeKick(unknown_type value);
				static void broadcastBattlEyeKick(SDG::Unturned::SteamPlayer* client, String* reason);
				static void battlEyeServerKickPlayer(Int32 playerID, String* reason);
				static void battlEyeServerSendPacket(Int32 playerID, IntPtr packetHandle, Int32 length);
				static void updateRichPresence();
				static void updateSteamRichPresence();
				static UInt32 get_bytesSent();
				static UInt32 get_bytesReceived();
				static UInt32 get_packetsSent();
				static UInt32 get_packetsReceived();
				static unknown_type get_CurrentServerAdvertisement();
				static unknown_type get_CurrentServerConnectParameters();
				static Boolean get_IsVacActiveOnCurrentServer();
				static Boolean get_IsBattlEyeActiveOnCurrentServer();
				static unknown_type get_server();
				static unknown_type get_client();
				static unknown_type get_user();
				static Array<Byte>* get_clientHash();
				static String* get_clientName();
				static List<SDG::Unturned::SteamPlayer*>* get_clients();
				static unknown_type GatherClientConnections();
				static unknown_type EnumerateClients();
				static unknown_type GatherClientConnectionsMatchingPredicate(unknown_type predicate);
				static unknown_type EnumerateClients_Predicate(unknown_type predicate);
				static unknown_type GatherClientConnectionsWithinSphere(UnityEngine::Vector3 position, Single radius);
				static unknown_type EnumerateClients_WithinSphere(UnityEngine::Vector3 position, Single radius);
				static unknown_type GatherRemoteClientConnectionsWithinSphere(UnityEngine::Vector3 position, Single radius);
				static unknown_type EnumerateClients_RemoteWithinSphere(UnityEngine::Vector3 position, Single radius);
				static unknown_type GatherRemoteClientConnections();
				static unknown_type EnumerateClients_Remote();
				static unknown_type GatherRemoteClientConnectionsMatchingPredicate(unknown_type predicate);
				static unknown_type EnumerateClients_RemotePredicate(unknown_type predicate);
				static List<SDG::Unturned::SteamPlayer*>* get_players();
				static Boolean get_isServer();
				static Boolean get_isClient();
				static Boolean get_isPro();
				static Boolean get_isConnected();
				static Boolean doServerItemsMatchAdvertisement(List<unknown_type>* pendingWorkshopItems);
				static void receiveWorkshopResponse(unknown_type response);
				static List<UInt64>* getServerWorkshopFileIDs();
				static void registerServerUsingWorkshopFileId(UInt64 id);
				static void registerServerUsingWorkshopFileId1(UInt64 id, UInt32 timestamp);
				static Boolean get_isLoading();
				static Int32 get_channels();
				static Int32 allocPlayerChannelId();
				static unknown_type get_connectionFailureInfo();
				static void set_connectionFailureInfo(unknown_type value);
				static String* get_connectionFailureReason();
				static void set_connectionFailureReason(String* value);
				static UInt32 get_connectionFailureDuration();
				static List<SDG::Unturned::SteamChannel*>* get_receivers();
				static Int32 allocBattlEyePlayerId();
				static void resetConnectionFailure();
				static void LogNetChannel(String* format, Array<unknown_type>* args);
				static void openChannel(SDG::Unturned::SteamChannel* receiver);
				static void closeChannel(SDG::Unturned::SteamChannel* receiver);
				static SDG::Unturned::SteamChannel* findChannelComponent(Int32 id);
				static Boolean get_hasRoomForNewConnection();
				static unknown_type findPendingPlayer(unknown_type transportConnection);
				static unknown_type findPendingPlayerBySteamId(unknown_type steamId);
				static SDG::Unturned::SteamPlayer* findPlayer(unknown_type transportConnection);
				static unknown_type findTransportConnection(unknown_type steamId);
				static unknown_type findTransportConnectionSteamId(unknown_type transportConnection);
				static unknown_type ClaimNetIdBlockForNewPlayer();
				static SDG::Unturned::SteamPlayer* addPlayer(unknown_type transportConnection, unknown_type netId, SDG::Unturned::SteamPlayerID* playerID, UnityEngine::Vector3 point, Byte angle, Boolean isPro, Boolean isAdmin, Int32 channel, Byte face, Byte hair, Byte beard, unknown_type skin, unknown_type color, unknown_type markerColor, Boolean hand, Int32 shirtItem, Int32 pantsItem, Int32 hatItem, Int32 backpackItem, Int32 vestItem, Int32 maskItem, Int32 glassesItem, Array<Int32>* skinItems, Array<String*>* skinTags, Array<String*>* skinDynamicProps, unknown_type skillset, String* language, unknown_type lobbyID, unknown_type clientPlatform);
				static void removePlayer(Byte index);
				static void replicateRemovePlayer(unknown_type skipSteamID, Byte removalIndex);
				static void verifyNextPlayerInQueue();
				static Boolean isUnreliable(unknown_type type);
				static Boolean isChunk(unknown_type packet);
				static Boolean isUpdate(unknown_type packet);
				static void resetChannels();
				static void loadPlayerSpawn(SDG::Unturned::SteamPlayerID* playerID, UnityEngine::Vector3& point, unknown_type angle, unknown_type initialStance);
				static void ResetClientTransportFailure();
				static void TriggerDisconnectFromClientTransportFailure();
				static void onLevelLoaded(Int32 level);
				static void connect(unknown_type parameters, unknown_type advertisement, List<unknown_type>* expectedWorkshopItems);
				static void onClientTransportReady();
				static void onClientTransportFailure(String* message);
				static Boolean CompareClientAndServerWorkshopFileTimestamps();
				static void launch();
				static void loadGameMode();
				static void unloadGameMode();
				static void singleplayer(unknown_type singleplayerMode, Boolean singleplayerCheats);
				static void host();
				static void add_onCommenceShutdown(unknown_type value);
				static void remove_onCommenceShutdown(unknown_type value);
				static void broadcastCommenceShutdown();
				static void shutdown();
				static void shutdown1(Int32 timer);
				static void shutdown2(Int32 timer, String* explanation);
				static Boolean get_IsBattlEyeEnabled();
				static void RequestDisconnect(String* reason);
				static void disconnect();
				static void sendGUIDTable(unknown_type player);
				static Boolean initializeBattlEyeServer();
				static void handleServerReady();
				static void initializeDedicatedUGC();
				static String* getModeTagAbbreviation(unknown_type gm);
				static String* getCameraModeTagAbbreviation(unknown_type cm);
				static String* GetMonetizationTagAbbreviation(unknown_type monetization);
				static void maybeLogCuratedMapFallback(String* attemptedMap);
				static void onDedicatedUGCInstalled();
				static void AdvertiseFullDescription(String* message);
				static void AdvertiseConfig();
				static void send(unknown_type steamID, unknown_type type, Array<Byte>* packet, Int32 size, Int32 channel);
				static Boolean remapSteamPacketType(unknown_type type);
				static void sendToClient(unknown_type transportConnection, unknown_type type, Array<Byte>* packet, Int32 size);
				static Boolean shouldNetIgnoreSteamId(unknown_type id);
				static void refuseGarbageConnection(unknown_type remoteId, String* reason);
				static void refuseGarbageConnection1(unknown_type transportConnection, String* reason);
				static Boolean get_useConstNetEvents();
				static Boolean hasNetBufferChanged(Array<Byte>* original, Array<Byte>* copy, Int32 offset, Int32 size);
				static Boolean getChannelHeader(Array<Byte>* packet, Int32 size, Int32 offset, unknown_type channel);
				static Boolean canClientVersionJoinServer(UInt32 version);
				static void legacyReceiveClient(Array<Byte>* packet, Int32 offset, Int32 size);
				static void listenServer();
				static void listenClient();
				void SendPingRequestToAllClients();
				void NotifyClientsInQueueOfPosition();
				void KickClientsWithBadConnection();
				void KickClientsBlockingUpQueue();
				static void listen();
				static void broadcastServerDisconnected(unknown_type steamID);
				static void broadcastServerHosted();
				static void broadcastServerShutdown();
				static void onP2PSessionConnectFail(unknown_type callback);
				static void checkBanStatus(SDG::Unturned::SteamPlayerID* playerID, UInt32 remoteIP, unknown_type isBanned, unknown_type banReason, unknown_type banRemainingDuration);
				static Boolean requestBanPlayer(unknown_type instigator, unknown_type playerToBan, UInt32 ipToBan, String* reason, UInt32 duration);
				static Boolean requestBanPlayer1(unknown_type instigator, unknown_type playerToBan, UInt32 ipToBan, unknown_type hwidsToBan, String* reason, UInt32 duration);
				static Boolean requestUnbanPlayer(unknown_type instigator, unknown_type playerToUnban);
				static void handleValidateAuthTicketResponse(unknown_type callback);
				static void onValidateAuthTicketResponse(unknown_type callback);
				static void handleClientGroupStatus(unknown_type callback);
				static void onClientGroupStatus(unknown_type callback);
				static Byte get_maxPlayers();
				static void set_maxPlayers(Byte value);
				static Byte get_queuePosition();
				static String* get_serverName();
				static void set_serverName(String* value);
				static String* get_serverID();
				static void set_serverID(String* value);
				static UInt16 GetServerConnectionPort();
				static Array<Byte>* get_serverPasswordHash();
				static String* get_serverPassword();
				static void set_serverPassword(String* value);
				static unknown_type get_statusData();
				static unknown_type get_preferenceData();
				static unknown_type get_configData();
				static unknown_type get_modeConfigData();
				static void resetConfig();
				static void applyLevelConfigOverride(unknown_type field, unknown_type targetObject, unknown_type defaultTargetObject, unknown_type levelOverride);
				static void applyLevelModeConfigOverrides();
				static void accept(unknown_type player);
				static void WriteConnectedMessage(unknown_type writer, SDG::Unturned::SteamPlayer* aboutPlayer, SDG::Unturned::SteamPlayer* forPlayer);
				static void SendInitialGlobalState(SDG::Unturned::SteamPlayer* client);
				static void accept1(SDG::Unturned::SteamPlayerID* playerID, Boolean isPro, Boolean isAdmin, Byte face, Byte hair, Byte beard, unknown_type skin, unknown_type color, unknown_type markerColor, Boolean hand, Int32 shirtItem, Int32 pantsItem, Int32 hatItem, Int32 backpackItem, Int32 vestItem, Int32 maskItem, Int32 glassesItem, Array<Int32>* skinItems, Array<String*>* skinTags, Array<String*>* skinDynamicProps, unknown_type skillset, String* language, unknown_type lobbyID);
				static void accept2(SDG::Unturned::SteamPlayerID* playerID, Boolean isPro, Boolean isAdmin, Byte face, Byte hair, Byte beard, unknown_type skin, unknown_type color, unknown_type markerColor, Boolean hand, Int32 shirtItem, Int32 pantsItem, Int32 hatItem, Int32 backpackItem, Int32 vestItem, Int32 maskItem, Int32 glassesItem, Array<Int32>* skinItems, Array<String*>* skinTags, Array<String*>* skinDynamicProps, unknown_type skillset, String* language, unknown_type lobbyID, unknown_type clientPlatform);
				static void add_onRejectingPlayer(unknown_type value);
				static void remove_onRejectingPlayer(unknown_type value);
				static void broadcastRejectingPlayer(unknown_type steamID, unknown_type rejection, String* explanation);
				static void reject(unknown_type steamID, unknown_type rejection);
				static void reject1(unknown_type steamID, unknown_type rejection, String* explanation);
				static void reject2(unknown_type transportConnection, unknown_type rejection);
				static void reject3(unknown_type transportConnection, unknown_type rejection, String* explanation);
				static void notifyClientPending(unknown_type transportConnection);
				static Boolean findClientForKickBanDismiss(unknown_type steamID, SDG::Unturned::SteamPlayer*& foundClient, unknown_type foundIndex);
				static void validateDisconnectedMaintainedIndex(unknown_type steamID, Byte index);
				static void notifyKickedInternal(unknown_type transportConnection, String* reason);
				static void kick(unknown_type steamID, String* reason);
				static void notifyBannedInternal(unknown_type transportConnection, String* reason, UInt32 duration);
				static void ban(unknown_type steamID, String* reason, UInt32 duration);
				static void dismiss(unknown_type steamID);
				static void OnServerTransportConnectionFailure(unknown_type transportConnection, String* debugString, Boolean isError);
				static Boolean verifyTicket(unknown_type steamID, Array<Byte>* ticket);
				static void openGameServer();
				static void closeGameServer();
				static Boolean GetServerIsFavorited(UInt32 ip, UInt16 queryPort);
				static void SetServerIsFavorited(UInt32 ip, UInt16 connectionPort, UInt16 queryPort, Boolean newFavorited);
				static void openURL(String* url);
				static Boolean get_CanFavoriteCurrentServer();
				static Boolean get_CanBookmarkCurrentServer();
				static Boolean get_isCurrentServerFavorited();
				static Boolean get_IsCurrentServerBookmarked();
				static void toggleCurrentServerFavorited();
				static void ToggleCurrentServerBookmarked();
				static void broadcastEnemyConnected(SDG::Unturned::SteamPlayer* player);
				static void broadcastEnemyDisconnected(SDG::Unturned::SteamPlayer* player);
				static void onPersonaStateChange(unknown_type callback);
				static void OnGetTicketForWebApiResponse(unknown_type callback);
				static void onGameServerChangeRequested(unknown_type callback);
				static void onGameRichPresenceJoinRequested(unknown_type callback);
				static Single get_timeLastPacketWasReceivedFromServer();
				static void set_timeLastPacketWasReceivedFromServer(Single value);
				static Single get_ping();
				static void lag(Single value);
				static Array<Byte>* openTicket(unknown_type serverIdentity);
				static void RequestSteamAuthTicketForWebApi(String* identity);
				static void CancelAllSteamAuthTickets();
				static unknown_type get_provider();
				static void set_provider(unknown_type value);
				static Boolean get_isInitialized();
				static UInt32 get_time();
				static void set_time(UInt32 value);
				static UInt32 get_backendRealtimeSeconds();
				static void set_backendRealtimeSeconds(UInt32 value);
				static unknown_type get_backendRealtimeDate();
				static Boolean get_isBackendRealtimeAvailable();
				unknown_type QuitAfterDelay(Single seconds);
				static void onAPIWarningMessage(Int32 severity, unknown_type warning);
				void updateDebug();
				void tickDebug();
				unknown_type downloadIcon(unknown_type iconQueryParams);
				static void destroyCachedIcon(String* url);
				static void refreshIcon(unknown_type iconQueryParams);
				void Update();
				void FixedUpdate();
				static void initAutoSubscribeMaps();
				void WriteSteamAppIdFileAndEnvironmentVariables();
				static unknown_type LoadStatusData();
				void LoadPreferences();
				void awake();
				void start();
				void LogSystemInfo();
				static Boolean get_isApplicationQuitting();
				static void set_isApplicationQuitting(Boolean value);
				void onApplicationQuitting();
				static void QuitGame(String* reason);
				Boolean onApplicationWantsToQuit();
			};
			class SteamChannel
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static SteamChannel* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static Int32 CHANNEL_ID_HEADER_SIZE();                                          // System.Int32
				static void CHANNEL_ID_HEADER_SIZE_Set(Int32 value);
				static Int32 RPC_HEADER_SIZE();                                                 // System.Int32
				static void RPC_HEADER_SIZE_Set(Int32 value);
				static Int32 VOICE_HEADER_SIZE();                                               // System.Int32
				static void VOICE_HEADER_SIZE_Set(Int32 value);
				static Int32 VOICE_DATA_OFFSET();                                               // System.Int32
				static void VOICE_DATA_OFFSET_Set(Int32 value);
				Array<unknown_type>* calls();                                                   // SDG.Unturned.SteamChannelMethod[]
				void calls_Set(Array<unknown_type>* value);
				Int32 id();                                                                     // System.Int32
				void id_Set(Int32 value);
				SDG::Unturned::SteamPlayer* owner();                                            // SDG.Unturned.SteamPlayer
				void owner_Set(SDG::Unturned::SteamPlayer* value);
				static unknown_type onTriggerReceive();                                         // SDG.Unturned.TriggerReceive
				static void onTriggerReceive_Set(unknown_type value);
				static Boolean warnedAboutTriggerReceive();                                     // System.Boolean
				static void warnedAboutTriggerReceive_Set(Boolean value);
				static unknown_type onTriggerSend();                                            // SDG.Unturned.TriggerSend
				static void onTriggerSend_Set(unknown_type value);
				static Boolean warnedAboutTriggerSend();                                        // System.Boolean
				static void warnedAboutTriggerSend_Set(Boolean value);
				Boolean callArrayDirty();                                                       // System.Boolean
				void callArrayDirty_Set(Boolean value);
				static List<unknown_type>* workingCalls();                                      // System.Collections.Generic.List`1<SDG.Unturned.SteamChannelMethod>
				static void workingCalls_Set(List<unknown_type>* value);
				static List<UnityEngine::Component*>* workingComponents();                      // System.Collections.Generic.List`1<UnityEngine.Component>
				static void workingComponents_Set(List<UnityEngine::Component*>* value);
				Boolean isOwner();                                                              // System.Boolean
				void isOwner_Set(Boolean value);
				Array<unknown_type>* get_calls();
				void set_calls(Array<unknown_type>* value);
				Boolean get_IsLocalPlayer();
				void set_IsLocalPlayer(Boolean value);
				unknown_type GetOwnerTransportConnection();
				Boolean checkServer(unknown_type steamID);
				Boolean checkOwner(unknown_type steamID);
				unknown_type GatherRemoteClientConnectionsExcludingOwner();
				unknown_type EnumerateClients_RemoteNotOwner();
				unknown_type GatherRemoteClientConnectionsWithinSphereExcludingOwner(UnityEngine::Vector3 position, Single radius);
				unknown_type EnumerateClients_RemoteNotOwnerWithinSphere(UnityEngine::Vector3 position, Single radius);
				unknown_type GatherOwnerAndClientConnectionsWithinSphere(UnityEngine::Vector3 position, Single radius);
				unknown_type EnumerateClients_WithinSphereOrOwner(UnityEngine::Vector3 position, Single radius);
				Boolean receive(unknown_type steamID, Array<Byte>* packet, Int32 offset, Int32 size);
				unknown_type read(unknown_type type);
				Array<unknown_type>* read1(unknown_type type_0, unknown_type type_1, unknown_type type_2);
				Array<unknown_type>* read2(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3);
				Array<unknown_type>* read3(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3, unknown_type type_4, unknown_type type_5);
				Array<unknown_type>* read4(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3, unknown_type type_4, unknown_type type_5, unknown_type type_6);
				Array<unknown_type>* read5(Array<unknown_type>* types);
				void write(unknown_type objects);
				void write1(unknown_type object_0, unknown_type object_1, unknown_type object_2);
				void write2(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3);
				void write3(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3, unknown_type object_4, unknown_type object_5);
				void write4(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3, unknown_type object_4, unknown_type object_5, unknown_type object_6);
				void write5(Array<unknown_type>* objects);
				Boolean get_longBinaryData();
				void set_longBinaryData(Boolean value);
				void openWrite();
				void closeWrite(String* name, unknown_type steamID, unknown_type type);
				void closeWrite1(String* name, unknown_type mode, Byte bound, unknown_type type);
				void closeWrite2(String* name, unknown_type mode, Byte x, Byte y, Byte area, unknown_type type);
				void closeWrite3(String* name, unknown_type mode, unknown_type type);
				void send(String* name, unknown_type steamID, unknown_type type, Array<unknown_type>* arguments);
				void sendAside(String* name, unknown_type steamID, unknown_type type, Array<unknown_type>* arguments);
				void send1(unknown_type mode, Byte bound, unknown_type type, Int32 size, Array<Byte>* packet);
				void send2(String* name, unknown_type mode, Byte bound, unknown_type type, Array<unknown_type>* arguments);
				void send3(unknown_type mode, Byte x, Byte y, Byte area, unknown_type type, Int32 size, Array<Byte>* packet);
				void send4(String* name, unknown_type mode, Byte x, Byte y, Byte area, unknown_type type, Array<unknown_type>* arguments);
				void send5(unknown_type mode, unknown_type type, Int32 size, Array<Byte>* packet);
				void send6(String* name, unknown_type mode, unknown_type type, Array<unknown_type>* arguments);
				void send7(unknown_type mode, UnityEngine::Vector3 point, Single radius, unknown_type type, Int32 size, Array<Byte>* packet);
				void send8(String* name, unknown_type mode, UnityEngine::Vector3 point, Single radius, unknown_type type, Array<unknown_type>* arguments);
				void markDirty();
				void buildCallArray();
				void buildCallArrayIfDirty();
				void setup();
				void encodeChannelId(Array<Byte>* packet);
				void getPacket(unknown_type type, Int32 index, unknown_type size, unknown_type packet);
				void encodeVoicePacket(Byte callIndex, unknown_type size, unknown_type packet, Array<Byte>* bytes, UInt16 length, Boolean usingWalkieTalkie);
				void decodeVoicePacket(Array<Byte>* packet, unknown_type compressedSize, unknown_type usingWalkieTalkie);
				void sendVoicePacket(SDG::Unturned::SteamPlayer* player, Array<Byte>* packet, Int32 packetSize);
				void getPacket1(unknown_type type, Int32 index, unknown_type size, unknown_type packet, Array<unknown_type>* arguments);
				Int32 getCall(String* name);
				void OnDestroy();
			};
			class SteamPlayer
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static SteamPlayer* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static unknown_type OnSteamAuthTicketForWebApiReceived();                       // System.Action`3<SDG.Unturned.SteamPlayer,System.String,System.Byte[]>
				static void OnSteamAuthTicketForWebApiReceived_Set(unknown_type value);
				unknown_type _netId();                                                          // SDG.Unturned.NetId
				void _netId_Set(unknown_type value);
				SDG::Unturned::SteamPlayerID* _playerID();                                      // SDG.Unturned.SteamPlayerID
				void _playerID_Set(SDG::Unturned::SteamPlayerID* value);
				UnityEngine::Transform* _model();                                               // UnityEngine.Transform
				void _model_Set(UnityEngine::Transform* value);
				SDG::Unturned::Player* _player();                                               // SDG.Unturned.Player
				void _player_Set(SDG::Unturned::Player* value);
				Boolean _isPro();                                                               // System.Boolean
				void _isPro_Set(Boolean value);
				Int32 _channel();                                                               // System.Int32
				void _channel_Set(Int32 value);
				Int32 battlEyeId();                                                             // System.Int32
				void battlEyeId_Set(Int32 value);
				Boolean _isAdmin();                                                             // System.Boolean
				void _isAdmin_Set(Boolean value);
				Array<Single>* pings();                                                         // System.Single[]
				void pings_Set(Array<Single>* value);
				Single _ping();                                                                 // System.Single
				void _ping_Set(Single value);
				Single _joined();                                                               // System.Single
				void _joined_Set(Single value);
				Byte face();                                                                    // System.Byte
				void face_Set(Byte value);
				Byte _hair();                                                                   // System.Byte
				void _hair_Set(Byte value);
				Byte _beard();                                                                  // System.Byte
				void _beard_Set(Byte value);
				unknown_type _skin();                                                           // UnityEngine.Color
				void _skin_Set(unknown_type value);
				unknown_type _color();                                                          // UnityEngine.Color
				void _color_Set(unknown_type value);
				unknown_type _markerColor();                                                    // UnityEngine.Color
				void _markerColor_Set(unknown_type value);
				Boolean _hand();                                                                // System.Boolean
				void _hand_Set(Boolean value);
				Int32 shirtItem();                                                              // System.Int32
				void shirtItem_Set(Int32 value);
				Int32 pantsItem();                                                              // System.Int32
				void pantsItem_Set(Int32 value);
				Int32 hatItem();                                                                // System.Int32
				void hatItem_Set(Int32 value);
				Int32 backpackItem();                                                           // System.Int32
				void backpackItem_Set(Int32 value);
				Int32 vestItem();                                                               // System.Int32
				void vestItem_Set(Int32 value);
				Int32 maskItem();                                                               // System.Int32
				void maskItem_Set(Int32 value);
				Int32 glassesItem();                                                            // System.Int32
				void glassesItem_Set(Int32 value);
				Array<Int32>* skinItems();                                                      // System.Int32[]
				void skinItems_Set(Array<Int32>* value);
				Array<String*>* skinTags();                                                     // System.String[]
				void skinTags_Set(Array<String*>* value);
				Array<String*>* skinDynamicProps();                                             // System.String[]
				void skinDynamicProps_Set(Array<String*>* value);
				unknown_type itemSkins();                                                       // System.Collections.Generic.Dictionary`2<System.UInt16,System.Int32>
				void itemSkins_Set(unknown_type value);
				unknown_type vehicleSkins();                                                    // System.Collections.Generic.Dictionary`2<System.UInt16,System.Int32>
				void vehicleSkins_Set(unknown_type value);
				unknown_type modifiedItems();                                                   // System.Collections.Generic.HashSet`1<System.UInt16>
				void modifiedItems_Set(unknown_type value);
				Boolean submittedModifiedItems();                                               // System.Boolean
				void submittedModifiedItems_Set(Boolean value);
				unknown_type _skillset();                                                       // SDG.Unturned.EPlayerSkillset
				void _skillset_Set(unknown_type value);
				String* _language();                                                            // System.String
				void _language_Set(String* value);
				unknown_type lobbyID();                                                         // Steamworks.CSteamID
				void lobbyID_Set(unknown_type value);
				Single timeLastPacketWasReceivedFromClient();                                   // System.Single
				void timeLastPacketWasReceivedFromClient_Set(Single value);
				Single timeLastPingRequestWasSentToClient();                                    // System.Single
				void timeLastPingRequestWasSentToClient_Set(Single value);
				Single lastChat();                                                              // System.Single
				void lastChat_Set(Single value);
				Single nextVote();                                                              // System.Single
				void nextVote_Set(Single value);
				Boolean isVoiceChatLocallyMuted();                                              // System.Boolean
				void isVoiceChatLocallyMuted_Set(Boolean value);
				Boolean isTextChatLocallyMuted();                                               // System.Boolean
				void isTextChatLocallyMuted_Set(Boolean value);
				Boolean IsLocalServerHost();                                                    // System.Boolean
				void IsLocalServerHost_Set(Boolean value);
				Single rpcCredits();                                                            // System.Single
				void rpcCredits_Set(Single value);
				Single lastReceivedPingRequestRealtime();                                       // System.Single
				void lastReceivedPingRequestRealtime_Set(Single value);
				Array<Single>* rpcAllowedTimes();                                               // System.Single[]
				void rpcAllowedTimes_Set(Array<Single>* value);
				Array<Int32>* rpcHitCount();                                                    // System.Int32[]
				void rpcHitCount_Set(Array<Int32>* value);
				unknown_type clientPlatform();                                                  // SDG.Unturned.EClientPlatform
				void clientPlatform_Set(unknown_type value);
				static unknown_type SendGetSteamAuthTicketForWebApiRequest();                   // SDG.Unturned.ClientStaticMethod`1<System.String>
				static void SendGetSteamAuthTicketForWebApiRequest_Set(unknown_type value);
				static unknown_type SendGetSteamAuthTicketForWebApiResponse();                  // SDG.Unturned.ServerStaticMethod
				static void SendGetSteamAuthTicketForWebApiResponse_Set(unknown_type value);
				unknown_type validatedGuids();                                                  // System.Collections.Generic.HashSet`1<System.Guid>
				void validatedGuids_Set(unknown_type value);
				unknown_type requestedSteamAuthTicketIdentities();                              // System.Collections.Generic.HashSet`1<System.String>
				void requestedSteamAuthTicketIdentities_Set(unknown_type value);
				unknown_type receivedSteamAuthTicketIdentities();                               // System.Collections.Generic.HashSet`1<System.String>
				void receivedSteamAuthTicketIdentities_Set(unknown_type value);
				unknown_type GetNetId();
				SDG::Unturned::SteamPlayerID* get_playerID();
				UnityEngine::Transform* get_model();
				SDG::Unturned::Player* get_player();
				Boolean get_isPro();
				Int32 get_channel();
				Boolean get_isAdmin();
				void set_isAdmin(Boolean value);
				Single get_ping();
				Single get_joined();
				Byte get_hair();
				Byte get_beard();
				unknown_type get_skin();
				unknown_type get_color();
				unknown_type get_markerColor();
				Boolean get_IsLeftHanded();
				Boolean get_hand();
				unknown_type get_skillset();
				String* get_language();
				unknown_type get_lobbyID();
				void set_lobbyID(unknown_type value);
				Boolean get_IsLocalServerHost();
				void set_IsLocalServerHost(Boolean value);
				void SetVoiceChatLocallyMuted(Boolean newVoiceChatLocallyMuted);
				void SetTextChatLocallyMuted(Boolean newTextChatLocallyMuted);
				Boolean getItemSkinItemDefID(UInt16 itemID, unknown_type itemdefid);
				Boolean getVehicleSkinItemDefID(UInt16 vehicleID, unknown_type itemdefid);
				Boolean getTagsAndDynamicPropsForItem(Int32 item, unknown_type tags, unknown_type dynamic_props);
				Boolean getDynamicEconDetails(UInt16 itemID, unknown_type details);
				Boolean getDynamicEconDetailsForItemDef(Int32 itemdefid, unknown_type details);
				Boolean getStatTrackerValue(UInt16 itemID, unknown_type type, unknown_type kills);
				Boolean getRagdollEffect(UInt16 itemID, unknown_type effect);
				UInt16 getParticleEffectForItemDef(Int32 itemdefid);
				void incrementStatTrackerValue(UInt16 itemID, unknown_type stat);
				void commitModifiedDynamicProps();
				void lag(Single value);
				Boolean isMemberOfSameGroupAs(SDG::Unturned::Player* other);
				Boolean isMemberOfSameGroupAs1(SDG::Unturned::SteamPlayer* other);
				Boolean getIPv4Address(unknown_type address);
				UInt32 getIPv4AddressOrZero();
				unknown_type getAddress();
				String* getAddressString(Boolean withPort);
				Boolean Equals(SDG::Unturned::SteamPlayer* otherClient);
				Boolean Equals1(unknown_type obj);
				Int32 GetHashCode();
				String* GetLocalDisplayName();
				void RequestSteamAuthTicketForWebApi(String* identity);
				static void ReceiveGetSteamAuthTicketForWebApiRequest(String* identity);
				static void ReceiveGetSteamAuthTicketForWebApiResponse(unknown_type context);
			};
			class SteamPlayerID
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static SteamPlayerID* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				unknown_type _steamID();                                                        // Steamworks.CSteamID
				void _steamID_Set(unknown_type value);
				Byte characterID();                                                             // System.Byte
				void characterID_Set(Byte value);
				String* _playerName();                                                          // System.String
				void _playerName_Set(String* value);
				String* _characterName();                                                       // System.String
				void _characterName_Set(String* value);
				String* _nickName();                                                            // System.String
				void _nickName_Set(String* value);
				unknown_type group();                                                           // Steamworks.CSteamID
				void group_Set(unknown_type value);
				Array<Array<Byte>*>* hwids();                                                   // System.Byte[][]
				void hwids_Set(Array<Array<Byte>*>* value);
				unknown_type get_steamID();
				String* get_streamerName();
				String* get_playerName();
				String* get_characterName();
				void set_characterName(String* value);
				String* get_nickName();
				void set_nickName(String* value);
				Array<Byte>* get_hwid();
				unknown_type GetHwids();
				Boolean get_BypassIntegrityChecks();
				String* ToString();
				static Boolean op_Equality(SDG::Unturned::SteamPlayerID* playerID_0, SDG::Unturned::SteamPlayerID* playerID_1);
				static Boolean op_Inequality(SDG::Unturned::SteamPlayerID* playerID_0, SDG::Unturned::SteamPlayerID* playerID_1);
				static String* op_Addition(SDG::Unturned::SteamPlayerID* playerID, String* text);
				Boolean Equals(SDG::Unturned::SteamPlayerID* otherPlayerID);
				Int32 GetHashCode();
				Boolean Equals1(unknown_type obj);
			};
			class InputEx
			{
				Runtime::MonoVTable* GetInstanceVTable();
				static uintptr_t StaticInstance();
			public:
				static Runtime::MonoClass* MonoClass();
				static InputEx* CreateObjectInstance();
				bool IsOfType(Runtime::MonoClass* klass);
				MONO_OBJECT_ISNULL_DEC();

				static unknown_type keyGuard();                                                 // SDG.Unturned.OncePerFrameGuard
				static void keyGuard_Set(unknown_type value);
				static Boolean GetKey(unknown_type key);
				static Boolean GetKeyDown(unknown_type key);
				static Boolean GetKeyUp(unknown_type key);
				static Boolean ConsumeKeyDown(SDK::UnityEngine::KeyCode key);
				static UnityEngine::Vector2 get_NormalizedMousePosition();
			};
		}
	}
	namespace UnityEngine
	{
		class Camera
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static Camera* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			static unknown_type onPreCull();                                                // UnityEngine.Camera/CameraCallback
			static void onPreCull_Set(unknown_type value);
			static unknown_type onPreRender();                                              // UnityEngine.Camera/CameraCallback
			static void onPreRender_Set(unknown_type value);
			static unknown_type onPostRender();                                             // UnityEngine.Camera/CameraCallback
			static void onPostRender_Set(unknown_type value);
			Single get_nearClipPlane();
			void set_nearClipPlane(Single value);
			Single get_farClipPlane();
			void set_farClipPlane(Single value);
			Single get_fieldOfView();
			void set_fieldOfView(Single value);
			unknown_type get_renderingPath();
			void set_renderingPath(unknown_type value);
			unknown_type get_actualRenderingPath();
			void Reset();
			Boolean get_allowHDR();
			void set_allowHDR(Boolean value);
			Boolean get_allowMSAA();
			void set_allowMSAA(Boolean value);
			Boolean get_allowDynamicResolution();
			void set_allowDynamicResolution(Boolean value);
			Boolean get_forceIntoRenderTexture();
			void set_forceIntoRenderTexture(Boolean value);
			Single get_orthographicSize();
			void set_orthographicSize(Single value);
			Boolean get_orthographic();
			void set_orthographic(Boolean value);
			unknown_type get_opaqueSortMode();
			void set_opaqueSortMode(unknown_type value);
			unknown_type get_transparencySortMode();
			void set_transparencySortMode(unknown_type value);
			UnityEngine::Vector3 get_transparencySortAxis();
			void set_transparencySortAxis(UnityEngine::Vector3 value);
			void ResetTransparencySortSettings();
			Single get_depth();
			void set_depth(Single value);
			Single get_aspect();
			void set_aspect(Single value);
			void ResetAspect();
			UnityEngine::Vector3 get_velocity();
			Int32 get_cullingMask();
			void set_cullingMask(Int32 value);
			Int32 get_eventMask();
			void set_eventMask(Int32 value);
			Boolean get_layerCullSpherical();
			void set_layerCullSpherical(Boolean value);
			unknown_type get_cameraType();
			void set_cameraType(unknown_type value);
			unknown_type get_skyboxMaterial();
			UInt64 get_overrideSceneCullingMask();
			void set_overrideSceneCullingMask(UInt64 value);
			UInt64 get_sceneCullingMask();
			Array<Single>* GetLayerCullDistances();
			void SetLayerCullDistances(Array<Single>* d);
			Array<Single>* get_layerCullDistances();
			void set_layerCullDistances(Array<Single>* value);
			static Int32 get_PreviewCullingLayer();
			Boolean get_useOcclusionCulling();
			void set_useOcclusionCulling(Boolean value);
			unknown_type get_cullingMatrix();
			void set_cullingMatrix(unknown_type value);
			void ResetCullingMatrix();
			unknown_type get_backgroundColor();
			void set_backgroundColor(unknown_type value);
			unknown_type get_clearFlags();
			void set_clearFlags(unknown_type value);
			unknown_type get_depthTextureMode();
			void set_depthTextureMode(unknown_type value);
			Boolean get_clearStencilAfterLightingPass();
			void set_clearStencilAfterLightingPass(Boolean value);
			void SetReplacementShader(unknown_type shader, String* replacementTag);
			void ResetReplacementShader();
			unknown_type get_projectionMatrixMode();
			Boolean get_usePhysicalProperties();
			void set_usePhysicalProperties(Boolean value);
			UnityEngine::Vector2 get_sensorSize();
			void set_sensorSize(UnityEngine::Vector2 value);
			UnityEngine::Vector2 get_lensShift();
			void set_lensShift(UnityEngine::Vector2 value);
			Single get_focalLength();
			void set_focalLength(Single value);
			unknown_type get_gateFit();
			void set_gateFit(unknown_type value);
			Single GetGateFittedFieldOfView();
			UnityEngine::Vector2 GetGateFittedLensShift();
			UnityEngine::Vector3 GetLocalSpaceAim();
			unknown_type get_rect();
			void set_rect(unknown_type value);
			unknown_type get_pixelRect();
			void set_pixelRect(unknown_type value);
			Int32 get_pixelWidth();
			Int32 get_pixelHeight();
			Int32 get_scaledPixelWidth();
			Int32 get_scaledPixelHeight();
			unknown_type get_targetTexture();
			void set_targetTexture(unknown_type value);
			unknown_type get_activeTexture();
			Int32 get_targetDisplay();
			void set_targetDisplay(Int32 value);
			void SetTargetBuffersImpl(unknown_type color, unknown_type depth);
			void SetTargetBuffers(unknown_type colorBuffer, unknown_type depthBuffer);
			void SetTargetBuffersMRTImpl(Array<unknown_type>* color, unknown_type depth);
			void SetTargetBuffers1(Array<unknown_type>* colorBuffer, unknown_type depthBuffer);
			Array<String*>* GetCameraBufferWarnings();
			unknown_type get_cameraToWorldMatrix();
			unknown_type get_worldToCameraMatrix();
			void set_worldToCameraMatrix(unknown_type value);
			unknown_type get_projectionMatrix();
			void set_projectionMatrix(unknown_type value);
			unknown_type get_nonJitteredProjectionMatrix();
			void set_nonJitteredProjectionMatrix(unknown_type value);
			Boolean get_useJitteredProjectionMatrixForTransparentRendering();
			void set_useJitteredProjectionMatrixForTransparentRendering(Boolean value);
			unknown_type get_previousViewProjectionMatrix();
			void ResetWorldToCameraMatrix();
			void ResetProjectionMatrix();
			unknown_type CalculateObliqueMatrix(unknown_type clipPlane);
			UnityEngine::Vector3 WorldToScreenPoint(UnityEngine::Vector3 position, unknown_type eye);
			UnityEngine::Vector3 WorldToViewportPoint(UnityEngine::Vector3 position, unknown_type eye);
			UnityEngine::Vector3 ViewportToWorldPoint(UnityEngine::Vector3 position, unknown_type eye);
			UnityEngine::Vector3 ScreenToWorldPoint(UnityEngine::Vector3 position, unknown_type eye);
			UnityEngine::Vector3 WorldToScreenPoint1(UnityEngine::Vector3 position);
			UnityEngine::Vector3 WorldToViewportPoint1(UnityEngine::Vector3 position);
			UnityEngine::Vector3 ViewportToWorldPoint1(UnityEngine::Vector3 position);
			UnityEngine::Vector3 ScreenToWorldPoint1(UnityEngine::Vector3 position);
			UnityEngine::Vector3 ScreenToViewportPoint(UnityEngine::Vector3 position);
			UnityEngine::Vector3 ViewportToScreenPoint(UnityEngine::Vector3 position);
			UnityEngine::Vector2 GetFrustumPlaneSizeAt(Single distance);
			unknown_type ViewportPointToRay(UnityEngine::Vector2 pos, unknown_type eye);
			unknown_type ViewportPointToRay1(UnityEngine::Vector3 pos, unknown_type eye);
			unknown_type ViewportPointToRay2(UnityEngine::Vector3 pos);
			unknown_type ScreenPointToRay(UnityEngine::Vector2 pos, unknown_type eye);
			unknown_type ScreenPointToRay1(UnityEngine::Vector3 pos, unknown_type eye);
			unknown_type ScreenPointToRay2(UnityEngine::Vector3 pos);
			void CalculateFrustumCornersInternal(unknown_type viewport, Single z, unknown_type eye, Array<UnityEngine::Vector3>* outCorners);
			void CalculateFrustumCorners(unknown_type viewport, Single z, unknown_type eye, Array<UnityEngine::Vector3>* outCorners);
			static void CalculateProjectionMatrixFromPhysicalPropertiesInternal(unknown_type output, Single focalLength, UnityEngine::Vector2 sensorSize, UnityEngine::Vector2 lensShift, Single nearClip, Single farClip, Single gateAspect, unknown_type gateFitMode);
			static void CalculateProjectionMatrixFromPhysicalProperties(unknown_type output, Single focalLength, UnityEngine::Vector2 sensorSize, UnityEngine::Vector2 lensShift, Single nearClip, Single farClip, unknown_type gateFitParameters);
			static Single FocalLengthToFieldOfView(Single focalLength, Single sensorSize);
			static Single FieldOfViewToFocalLength(Single fieldOfView, Single sensorSize);
			static Single HorizontalToVerticalFieldOfView(Single horizontalFieldOfView, Single aspectRatio);
			static Single VerticalToHorizontalFieldOfView(Single verticalFieldOfView, Single aspectRatio);
			static UnityEngine::Camera* get_main();
			static UnityEngine::Camera* get_current();
			unknown_type get_scene();
			void set_scene(unknown_type value);
			Boolean get_stereoEnabled();
			Single get_stereoSeparation();
			void set_stereoSeparation(Single value);
			Single get_stereoConvergence();
			void set_stereoConvergence(Single value);
			Boolean get_areVRStereoViewMatricesWithinSingleCullTolerance();
			unknown_type get_stereoTargetEye();
			void set_stereoTargetEye(unknown_type value);
			unknown_type get_stereoActiveEye();
			unknown_type GetStereoNonJitteredProjectionMatrix(unknown_type eye);
			unknown_type GetStereoViewMatrix(unknown_type eye);
			void CopyStereoDeviceProjectionMatrixToNonJittered(unknown_type eye);
			unknown_type GetStereoProjectionMatrix(unknown_type eye);
			void SetStereoProjectionMatrix(unknown_type eye, unknown_type matrix);
			void ResetStereoProjectionMatrices();
			void SetStereoViewMatrix(unknown_type eye, unknown_type matrix);
			void ResetStereoViewMatrices();
			static Int32 GetAllCamerasCount();
			static Int32 GetAllCamerasImpl(Array<UnityEngine::Camera*>* cam);
			static Int32 get_allCamerasCount();
			static Array<UnityEngine::Camera*>* get_allCameras();
			static Int32 GetAllCameras(Array<UnityEngine::Camera*>* cameras);
			Boolean RenderToCubemapImpl(unknown_type tex, Int32 faceMask);
			Boolean RenderToCubemap(unknown_type cubemap, Int32 faceMask);
			Boolean RenderToCubemap1(unknown_type cubemap);
			Boolean RenderToCubemap2(unknown_type cubemap, Int32 faceMask);
			Boolean RenderToCubemap3(unknown_type cubemap);
			Int32 GetFilterMode();
			unknown_type get_sceneViewFilterMode();
			Boolean RenderToCubemapEyeImpl(unknown_type cubemap, Int32 faceMask, unknown_type stereoEye);
			Boolean RenderToCubemap4(unknown_type cubemap, Int32 faceMask, unknown_type stereoEye);
			void Render();
			void RenderWithShader(unknown_type shader, String* replacementTag);
			void RenderDontRestore();
			void SubmitRenderRequests(List<unknown_type>* renderRequests);
			void SubmitRenderRequestsInternal(unknown_type requests);
			static void SetupCurrent(UnityEngine::Camera* cur);
			void CopyFrom(UnityEngine::Camera* other);
			Int32 get_commandBufferCount();
			void RemoveCommandBuffers(unknown_type evt);
			void RemoveAllCommandBuffers();
			void AddCommandBufferImpl(unknown_type evt, unknown_type buffer);
			void AddCommandBufferAsyncImpl(unknown_type evt, unknown_type buffer, unknown_type queueType);
			void RemoveCommandBufferImpl(unknown_type evt, unknown_type buffer);
			void AddCommandBuffer(unknown_type evt, unknown_type buffer);
			void AddCommandBufferAsync(unknown_type evt, unknown_type buffer, unknown_type queueType);
			void RemoveCommandBuffer(unknown_type evt, unknown_type buffer);
			Array<unknown_type>* GetCommandBuffers(unknown_type evt);
			static void FireOnPreCull(UnityEngine::Camera* cam);
			static void FireOnPreRender(UnityEngine::Camera* cam);
			static void FireOnPostRender(UnityEngine::Camera* cam);
			void OnlyUsedForTesting1();
			void OnlyUsedForTesting2();
			Boolean TryGetCullingParameters(unknown_type cullingParameters);
			Boolean TryGetCullingParameters1(Boolean stereoAware, unknown_type cullingParameters);
			static Boolean GetCullingParameters_Internal(UnityEngine::Camera* camera, Boolean stereoAware, unknown_type cullingParameters, Int32 managedCullingParametersSize);
			void get_transparencySortAxis_Injected(UnityEngine::Vector3& ret);
			void set_transparencySortAxis_Injected(UnityEngine::Vector3& value);
			void get_velocity_Injected(UnityEngine::Vector3& ret);
			void get_cullingMatrix_Injected(unknown_type ret);
			void set_cullingMatrix_Injected(unknown_type value);
			void get_backgroundColor_Injected(unknown_type ret);
			void set_backgroundColor_Injected(unknown_type value);
			void get_sensorSize_Injected(UnityEngine::Vector2& ret);
			void set_sensorSize_Injected(UnityEngine::Vector2& value);
			void get_lensShift_Injected(UnityEngine::Vector2& ret);
			void set_lensShift_Injected(UnityEngine::Vector2& value);
			void GetGateFittedLensShift_Injected(UnityEngine::Vector2& ret);
			void GetLocalSpaceAim_Injected(UnityEngine::Vector3& ret);
			void get_rect_Injected(unknown_type ret);
			void set_rect_Injected(unknown_type value);
			void get_pixelRect_Injected(unknown_type ret);
			void set_pixelRect_Injected(unknown_type value);
			void SetTargetBuffersImpl_Injected(unknown_type color, unknown_type depth);
			void SetTargetBuffersMRTImpl_Injected(Array<unknown_type>* color, unknown_type depth);
			void get_cameraToWorldMatrix_Injected(unknown_type ret);
			void get_worldToCameraMatrix_Injected(unknown_type ret);
			void set_worldToCameraMatrix_Injected(unknown_type value);
			void get_projectionMatrix_Injected(unknown_type ret);
			void set_projectionMatrix_Injected(unknown_type value);
			void get_nonJitteredProjectionMatrix_Injected(unknown_type ret);
			void set_nonJitteredProjectionMatrix_Injected(unknown_type value);
			void get_previousViewProjectionMatrix_Injected(unknown_type ret);
			void CalculateObliqueMatrix_Injected(unknown_type clipPlane, unknown_type ret);
			void WorldToScreenPoint_Injected(UnityEngine::Vector3& position, unknown_type eye, UnityEngine::Vector3& ret);
			void WorldToViewportPoint_Injected(UnityEngine::Vector3& position, unknown_type eye, UnityEngine::Vector3& ret);
			void ViewportToWorldPoint_Injected(UnityEngine::Vector3& position, unknown_type eye, UnityEngine::Vector3& ret);
			void ScreenToWorldPoint_Injected(UnityEngine::Vector3& position, unknown_type eye, UnityEngine::Vector3& ret);
			void ScreenToViewportPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret);
			void ViewportToScreenPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret);
			void GetFrustumPlaneSizeAt_Injected(Single distance, UnityEngine::Vector2& ret);
			void ViewportPointToRay_Injected(UnityEngine::Vector2& pos, unknown_type eye, unknown_type ret);
			void ScreenPointToRay_Injected(UnityEngine::Vector2& pos, unknown_type eye, unknown_type ret);
			void CalculateFrustumCornersInternal_Injected(unknown_type viewport, Single z, unknown_type eye, Array<UnityEngine::Vector3>* outCorners);
			static void CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(unknown_type output, Single focalLength, UnityEngine::Vector2& sensorSize, UnityEngine::Vector2& lensShift, Single nearClip, Single farClip, Single gateAspect, unknown_type gateFitMode);
			void get_scene_Injected(unknown_type ret);
			void set_scene_Injected(unknown_type value);
			void GetStereoNonJitteredProjectionMatrix_Injected(unknown_type eye, unknown_type ret);
			void GetStereoViewMatrix_Injected(unknown_type eye, unknown_type ret);
			void GetStereoProjectionMatrix_Injected(unknown_type eye, unknown_type ret);
			void SetStereoProjectionMatrix_Injected(unknown_type eye, unknown_type matrix);
			void SetStereoViewMatrix_Injected(unknown_type eye, unknown_type matrix);
		};
		class Screen
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static Screen* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			static Int32 get_width();
			static Int32 get_height();
			static Single get_dpi();
			static void RequestOrientation(unknown_type orient);
			static unknown_type GetScreenOrientation();
			static unknown_type get_orientation();
			static void set_orientation(unknown_type value);
			static Int32 get_sleepTimeout();
			static void set_sleepTimeout(Int32 value);
			static Boolean IsOrientationEnabled(unknown_type orient);
			static void SetOrientationEnabled(unknown_type orient, Boolean enabled);
			static Boolean get_autorotateToPortrait();
			static void set_autorotateToPortrait(Boolean value);
			static Boolean get_autorotateToPortraitUpsideDown();
			static void set_autorotateToPortraitUpsideDown(Boolean value);
			static Boolean get_autorotateToLandscapeLeft();
			static void set_autorotateToLandscapeLeft(Boolean value);
			static Boolean get_autorotateToLandscapeRight();
			static void set_autorotateToLandscapeRight(Boolean value);
			static UnityEngine::Resolution get_currentResolution();
			static Boolean get_fullScreen();
			static void set_fullScreen(Boolean value);
			static unknown_type get_fullScreenMode();
			static void set_fullScreenMode(unknown_type value);
			static unknown_type get_safeArea();
			static Array<unknown_type>* get_cutouts();
			static void SetResolution(Int32 width, Int32 height, unknown_type fullscreenMode, Int32 preferredRefreshRate);
			static void SetResolution1(Int32 width, Int32 height, unknown_type fullscreenMode);
			static void SetResolution2(Int32 width, Int32 height, Boolean fullscreen, Int32 preferredRefreshRate);
			static void SetResolution3(Int32 width, Int32 height, Boolean fullscreen);
			static unknown_type get_mainWindowPosition();
			static unknown_type get_mainWindowDisplayInfo();
			static void GetDisplayLayout(List<unknown_type>* displayLayout);
			static unknown_type MoveMainWindowTo(unknown_type display, unknown_type position);
			static unknown_type GetMainWindowPosition();
			static unknown_type GetMainWindowDisplayInfo();
			static void GetDisplayLayoutImpl(List<unknown_type>* displayLayout);
			static unknown_type MoveMainWindowImpl(unknown_type display, unknown_type position);
			static Array<UnityEngine::Resolution>* get_resolutions();
			static Single get_brightness();
			static void set_brightness(Single value);
			static Boolean get_lockCursor();
			static void set_lockCursor(Boolean value);
			static void get_currentResolution_Injected(UnityEngine::Resolution& ret);
			static void get_safeArea_Injected(unknown_type ret);
			static void GetMainWindowPosition_Injected(unknown_type ret);
			static void GetMainWindowDisplayInfo_Injected(unknown_type ret);
			static unknown_type MoveMainWindowImpl_Injected(unknown_type display, unknown_type position);
		};
		class Cursor
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static Cursor* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			static void SetCursor(unknown_type texture, unknown_type cursorMode);
			static void SetCursor1(unknown_type texture, UnityEngine::Vector2 hotspot, unknown_type cursorMode);
			static Boolean get_visible();
			static void set_visible(Boolean value);
			static UnityEngine::CursorLockMode get_lockState();
			static void set_lockState(UnityEngine::CursorLockMode value);
			static void SetCursor_Injected(unknown_type texture, UnityEngine::Vector2& hotspot, unknown_type cursorMode);
		};
		class Component
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static Component* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			UnityEngine::Transform* get_transform();
			UnityEngine::GameObject* get_gameObject();
			UnityEngine::Component* GetComponent(unknown_type type);
			void GetComponentFastPath(unknown_type type, IntPtr oneFurtherThanResultValue);
			Boolean TryGetComponent(unknown_type type, UnityEngine::Component*& component);
			UnityEngine::Component* GetComponent1(String* type);
			UnityEngine::Component* GetComponentInChildren(unknown_type t, Boolean includeInactive);
			UnityEngine::Component* GetComponentInChildren1(unknown_type t);
			Array<UnityEngine::Component*>* GetComponentsInChildren(unknown_type t, Boolean includeInactive);
			Array<UnityEngine::Component*>* GetComponentsInChildren1(unknown_type t);
			UnityEngine::Component* GetComponentInParent(unknown_type t, Boolean includeInactive);
			UnityEngine::Component* GetComponentInParent1(unknown_type t);
			Array<UnityEngine::Component*>* GetComponentsInParent(unknown_type t, Boolean includeInactive);
			Array<UnityEngine::Component*>* GetComponentsInParent1(unknown_type t);
			Array<UnityEngine::Component*>* GetComponents(unknown_type type);
			void GetComponentsForListInternal(unknown_type searchType, unknown_type resultList);
			void GetComponents1(unknown_type type, List<UnityEngine::Component*>* results);
			String* get_tag();
			void set_tag(String* value);
			Boolean CompareTag(String* tag);
			void SendMessageUpwards(String* methodName, unknown_type value, unknown_type options);
			void SendMessageUpwards1(String* methodName, unknown_type value);
			void SendMessageUpwards2(String* methodName);
			void SendMessageUpwards3(String* methodName, unknown_type options);
			void SendMessage(String* methodName, unknown_type value);
			void SendMessage1(String* methodName);
			void SendMessage2(String* methodName, unknown_type value, unknown_type options);
			void SendMessage3(String* methodName, unknown_type options);
			void BroadcastMessage(String* methodName, unknown_type parameter, unknown_type options);
			void BroadcastMessage1(String* methodName, unknown_type parameter);
			void BroadcastMessage2(String* methodName);
			void BroadcastMessage3(String* methodName, unknown_type options);
		};
		class GameObject
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static GameObject* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			static UnityEngine::GameObject* CreatePrimitive(unknown_type type);
			UnityEngine::Component* GetComponent(unknown_type type);
			void GetComponentFastPath(unknown_type type, IntPtr oneFurtherThanResultValue);
			UnityEngine::Component* GetComponentByName(String* type);
			UnityEngine::Component* GetComponent1(String* type);
			UnityEngine::Component* GetComponentInChildren(unknown_type type, Boolean includeInactive);
			UnityEngine::Component* GetComponentInChildren1(unknown_type type);
			UnityEngine::Component* GetComponentInParent(unknown_type type, Boolean includeInactive);
			UnityEngine::Component* GetComponentInParent1(unknown_type type);
			unknown_type GetComponentsInternal(unknown_type type, Boolean useSearchTypeAsArrayReturnType, Boolean recursive, Boolean includeInactive, Boolean reverse, unknown_type resultList);
			Array<UnityEngine::Component*>* GetComponents(unknown_type type);
			void GetComponents1(unknown_type type, List<UnityEngine::Component*>* results);
			Array<UnityEngine::Component*>* GetComponentsInChildren(unknown_type type);
			Array<UnityEngine::Component*>* GetComponentsInChildren1(unknown_type type, Boolean includeInactive);
			Array<UnityEngine::Component*>* GetComponentsInParent(unknown_type type);
			Array<UnityEngine::Component*>* GetComponentsInParent1(unknown_type type, Boolean includeInactive);
			Boolean TryGetComponent(unknown_type type, UnityEngine::Component*& component);
			UnityEngine::Component* TryGetComponentInternal(unknown_type type);
			void TryGetComponentFastPath(unknown_type type, IntPtr oneFurtherThanResultValue);
			static UnityEngine::GameObject* FindWithTag(String* tag);
			void SendMessageUpwards(String* methodName, unknown_type options);
			void SendMessage(String* methodName, unknown_type options);
			void BroadcastMessage(String* methodName, unknown_type options);
			UnityEngine::Component* AddComponentInternal(String* className);
			UnityEngine::Component* Internal_AddComponentWithType(unknown_type componentType);
			UnityEngine::Component* AddComponent(unknown_type componentType);
			UnityEngine::Transform* get_transform();
			Int32 get_layer();
			void set_layer(Int32 value);
			Boolean get_active();
			void set_active(Boolean value);
			void SetActive(Boolean value);
			Boolean get_activeSelf();
			Boolean get_activeInHierarchy();
			void SetActiveRecursively(Boolean state);
			Boolean get_isStatic();
			void set_isStatic(Boolean value);
			Boolean get_isStaticBatchable();
			String* get_tag();
			void set_tag(String* value);
			Boolean CompareTag(String* tag);
			static UnityEngine::GameObject* FindGameObjectWithTag(String* tag);
			static Array<UnityEngine::GameObject*>* FindGameObjectsWithTag(String* tag);
			void SendMessageUpwards1(String* methodName, unknown_type value, unknown_type options);
			void SendMessageUpwards2(String* methodName, unknown_type value);
			void SendMessageUpwards3(String* methodName);
			void SendMessage1(String* methodName, unknown_type value, unknown_type options);
			void SendMessage2(String* methodName, unknown_type value);
			void SendMessage3(String* methodName);
			void BroadcastMessage1(String* methodName, unknown_type parameter, unknown_type options);
			void BroadcastMessage2(String* methodName, unknown_type parameter);
			void BroadcastMessage3(String* methodName);
			static void Internal_CreateGameObject(UnityEngine::GameObject* self, String* name);
			static UnityEngine::GameObject* Find(String* name);
			unknown_type get_scene();
			UInt64 get_sceneCullingMask();
			UnityEngine::GameObject* get_gameObject();
			void get_scene_Injected(unknown_type ret);
		};
		class Transform //: public UnityEngine::Component
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static Transform* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			UnityEngine::Vector3 get_position();
			void set_position(UnityEngine::Vector3 value);
			UnityEngine::Vector3 get_localPosition();
			void set_localPosition(UnityEngine::Vector3 value);
			UnityEngine::Vector3 GetLocalEulerAngles(unknown_type order);
			void SetLocalEulerAngles(UnityEngine::Vector3 euler, unknown_type order);
			void SetLocalEulerHint(UnityEngine::Vector3 euler);
			UnityEngine::Vector3 get_eulerAngles();
			void set_eulerAngles(UnityEngine::Vector3 value);
			UnityEngine::Vector3 get_localEulerAngles();
			void set_localEulerAngles(UnityEngine::Vector3 value);
			UnityEngine::Vector3 get_right();
			void set_right(UnityEngine::Vector3 value);
			UnityEngine::Vector3 get_up();
			void set_up(UnityEngine::Vector3 value);
			UnityEngine::Vector3 get_forward();
			void set_forward(UnityEngine::Vector3 value);
			UnityEngine::Quaternion get_rotation();
			void set_rotation(UnityEngine::Quaternion value);
			UnityEngine::Quaternion get_localRotation();
			void set_localRotation(UnityEngine::Quaternion value);
			unknown_type get_rotationOrder();
			void set_rotationOrder(unknown_type value);
			Int32 GetRotationOrderInternal();
			void SetRotationOrderInternal(unknown_type rotationOrder);
			UnityEngine::Vector3 get_localScale();
			void set_localScale(UnityEngine::Vector3 value);
			UnityEngine::Transform* get_parent();
			void set_parent(UnityEngine::Transform* value);
			UnityEngine::Transform* get_parentInternal();
			void set_parentInternal(UnityEngine::Transform* value);
			UnityEngine::Transform* GetParent();
			void SetParent(UnityEngine::Transform* p);
			void SetParent1(UnityEngine::Transform* parent, Boolean worldPositionStays);
			unknown_type get_worldToLocalMatrix();
			unknown_type get_localToWorldMatrix();
			void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
			void SetLocalPositionAndRotation(UnityEngine::Vector3 localPosition, UnityEngine::Quaternion localRotation);
			void GetPositionAndRotation(UnityEngine::Vector3& position, UnityEngine::Quaternion& rotation);
			void GetLocalPositionAndRotation(UnityEngine::Vector3& localPosition, UnityEngine::Quaternion& localRotation);
			void Translate(UnityEngine::Vector3 translation, unknown_type relativeTo);
			void Translate1(UnityEngine::Vector3 translation);
			void Translate2(Single x, Single y, Single z, unknown_type relativeTo);
			void Translate3(Single x, Single y, Single z);
			void Translate4(UnityEngine::Vector3 translation, UnityEngine::Transform* relativeTo);
			void Translate5(Single x, Single y, Single z, UnityEngine::Transform* relativeTo);
			void Rotate(UnityEngine::Vector3 eulers, unknown_type relativeTo);
			void Rotate1(UnityEngine::Vector3 eulers);
			void Rotate2(Single xAngle, Single yAngle, Single zAngle, unknown_type relativeTo);
			void Rotate3(Single xAngle, Single yAngle, Single zAngle);
			void RotateAroundInternal(UnityEngine::Vector3 axis, Single angle);
			void Rotate4(UnityEngine::Vector3 axis, Single angle, unknown_type relativeTo);
			void Rotate5(UnityEngine::Vector3 axis, Single angle);
			void RotateAround(UnityEngine::Vector3 point, UnityEngine::Vector3 axis, Single angle);
			void LookAt(UnityEngine::Transform* target, UnityEngine::Vector3 worldUp);
			void LookAt1(UnityEngine::Transform* target);
			void LookAt2(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp);
			void LookAt3(UnityEngine::Vector3 worldPosition);
			void Internal_LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp);
			UnityEngine::Vector3 TransformDirection(UnityEngine::Vector3 direction);
			UnityEngine::Vector3 TransformDirection1(Single x, Single y, Single z);
			UnityEngine::Vector3 InverseTransformDirection(UnityEngine::Vector3 direction);
			UnityEngine::Vector3 InverseTransformDirection1(Single x, Single y, Single z);
			UnityEngine::Vector3 TransformVector(UnityEngine::Vector3 vector);
			UnityEngine::Vector3 TransformVector1(Single x, Single y, Single z);
			UnityEngine::Vector3 InverseTransformVector(UnityEngine::Vector3 vector);
			UnityEngine::Vector3 InverseTransformVector1(Single x, Single y, Single z);
			UnityEngine::Vector3 TransformPoint(UnityEngine::Vector3 position);
			UnityEngine::Vector3 TransformPoint1(Single x, Single y, Single z);
			UnityEngine::Vector3 InverseTransformPoint(UnityEngine::Vector3 position);
			UnityEngine::Vector3 InverseTransformPoint1(Single x, Single y, Single z);
			UnityEngine::Transform* get_root();
			UnityEngine::Transform* GetRoot();
			Int32 get_childCount();
			void DetachChildren();
			void SetAsFirstSibling();
			void SetAsLastSibling();
			void SetSiblingIndex(Int32 index);
			void MoveAfterSibling(UnityEngine::Transform* transform, Boolean notifyEditorAndMarkDirty);
			Int32 GetSiblingIndex();
			static UnityEngine::Transform* FindRelativeTransformWithPath(UnityEngine::Transform* transform, String* path, Boolean isActiveOnly);
			UnityEngine::Transform* Find(String* n);
			void SendTransformChangedScale();
			UnityEngine::Vector3 get_lossyScale();
			Boolean IsChildOf(UnityEngine::Transform* parent);
			Boolean get_hasChanged();
			void set_hasChanged(Boolean value);
			UnityEngine::Transform* FindChild(String* n);
			unknown_type GetEnumerator();
			void RotateAround1(UnityEngine::Vector3 axis, Single angle);
			void RotateAroundLocal(UnityEngine::Vector3 axis, Single angle);
			UnityEngine::Transform* GetChild(Int32 index);
			Int32 GetChildCount();
			Int32 get_hierarchyCapacity();
			void set_hierarchyCapacity(Int32 value);
			Int32 internal_getHierarchyCapacity();
			void internal_setHierarchyCapacity(Int32 value);
			Int32 get_hierarchyCount();
			Int32 internal_getHierarchyCount();
			Boolean IsNonUniformScaleTransform();
			Boolean get_constrainProportionsScale();
			void set_constrainProportionsScale(Boolean value);
			void SetConstrainProportionsScale(Boolean isLinked);
			Boolean IsConstrainProportionsScale();
			void get_position_Injected(UnityEngine::Vector3& ret);
			void set_position_Injected(UnityEngine::Vector3& value);
			void get_localPosition_Injected(UnityEngine::Vector3& ret);
			void set_localPosition_Injected(UnityEngine::Vector3& value);
			void GetLocalEulerAngles_Injected(unknown_type order, UnityEngine::Vector3& ret);
			void SetLocalEulerAngles_Injected(UnityEngine::Vector3& euler, unknown_type order);
			void SetLocalEulerHint_Injected(UnityEngine::Vector3& euler);
			void get_rotation_Injected(UnityEngine::Quaternion& ret);
			void set_rotation_Injected(UnityEngine::Quaternion& value);
			void get_localRotation_Injected(UnityEngine::Quaternion& ret);
			void set_localRotation_Injected(UnityEngine::Quaternion& value);
			void get_localScale_Injected(UnityEngine::Vector3& ret);
			void set_localScale_Injected(UnityEngine::Vector3& value);
			void get_worldToLocalMatrix_Injected(unknown_type ret);
			void get_localToWorldMatrix_Injected(unknown_type ret);
			void SetPositionAndRotation_Injected(UnityEngine::Vector3& position, UnityEngine::Quaternion& rotation);
			void SetLocalPositionAndRotation_Injected(UnityEngine::Vector3& localPosition, UnityEngine::Quaternion& localRotation);
			void RotateAroundInternal_Injected(UnityEngine::Vector3& axis, Single angle);
			void Internal_LookAt_Injected(UnityEngine::Vector3& worldPosition, UnityEngine::Vector3& worldUp);
			void TransformDirection_Injected(UnityEngine::Vector3& direction, UnityEngine::Vector3& ret);
			void InverseTransformDirection_Injected(UnityEngine::Vector3& direction, UnityEngine::Vector3& ret);
			void TransformVector_Injected(UnityEngine::Vector3& vector, UnityEngine::Vector3& ret);
			void InverseTransformVector_Injected(UnityEngine::Vector3& vector, UnityEngine::Vector3& ret);
			void TransformPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret);
			void InverseTransformPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret);
			void get_lossyScale_Injected(UnityEngine::Vector3& ret);
			void RotateAround_Injected(UnityEngine::Vector3& axis, Single angle);
			void RotateAroundLocal_Injected(UnityEngine::Vector3& axis, Single angle);
		};
		class Input
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static Input* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			static unknown_type locationServiceInstance();                                  // UnityEngine.LocationService
			static void locationServiceInstance_Set(unknown_type value);
			static unknown_type compassInstance();                                          // UnityEngine.Compass
			static void compassInstance_Set(unknown_type value);
			static unknown_type s_MainGyro();                                               // UnityEngine.Gyroscope
			static void s_MainGyro_Set(unknown_type value);
			static Boolean GetKeyInt(unknown_type key);
			static Boolean GetKeyString(String* name);
			static Boolean GetKeyUpInt(unknown_type key);
			static Boolean GetKeyUpString(String* name);
			static Boolean GetKeyDownInt(unknown_type key);
			static Boolean GetKeyDownString(String* name);
			static Single GetAxis(String* axisName);
			static Single GetAxisRaw(String* axisName);
			static Boolean GetButton(String* buttonName);
			static Boolean GetButtonDown(String* buttonName);
			static Boolean GetButtonUp(String* buttonName);
			static Boolean GetMouseButton(Int32 button);
			static Boolean GetMouseButtonDown(Int32 button);
			static Boolean GetMouseButtonUp(Int32 button);
			static void ResetInputAxes();
			static Array<String*>* GetJoystickNames();
			static unknown_type GetTouch(Int32 index);
			static unknown_type GetAccelerationEvent(Int32 index);
			static Boolean GetKey(unknown_type key);
			static Boolean GetKey1(String* name);
			static Boolean GetKeyUp(unknown_type key);
			static Boolean GetKeyUp1(String* name);
			static Boolean GetKeyDown(unknown_type key);
			static Boolean GetKeyDown1(String* name);
			static void SimulateTouch(unknown_type touch);
			static void SimulateTouchInternal(unknown_type touch, Int64 timestamp);
			static Boolean get_simulateMouseWithTouches();
			static void set_simulateMouseWithTouches(Boolean value);
			static Boolean get_anyKey();
			static Boolean get_anyKeyDown();
			static String* get_inputString();
			static UnityEngine::Vector3 get_mousePosition();
			static UnityEngine::Vector2 get_mouseScrollDelta();
			static unknown_type get_imeCompositionMode();
			static void set_imeCompositionMode(unknown_type value);
			static String* get_compositionString();
			static Boolean get_imeIsSelected();
			static UnityEngine::Vector2 get_compositionCursorPos();
			static void set_compositionCursorPos(UnityEngine::Vector2 value);
			static Boolean get_eatKeyPressOnTextFieldFocus();
			static void set_eatKeyPressOnTextFieldFocus(Boolean value);
			static Boolean get_mousePresent();
			static Int32 get_touchCount();
			static Boolean get_touchPressureSupported();
			static Boolean get_stylusTouchSupported();
			static Boolean get_touchSupported();
			static Boolean get_multiTouchEnabled();
			static void set_multiTouchEnabled(Boolean value);
			static Boolean get_isGyroAvailable();
			static unknown_type get_deviceOrientation();
			static UnityEngine::Vector3 get_acceleration();
			static Boolean get_compensateSensors();
			static void set_compensateSensors(Boolean value);
			static Int32 get_accelerationEventCount();
			static Boolean get_backButtonLeavesApp();
			static void set_backButtonLeavesApp(Boolean value);
			static unknown_type get_location();
			static unknown_type get_compass();
			static Int32 GetGyroInternal();
			static unknown_type get_gyro();
			static Array<unknown_type>* get_touches();
			static Array<unknown_type>* get_accelerationEvents();
			static Boolean CheckDisabled();
			static void GetTouch_Injected(Int32 index, unknown_type ret);
			static void GetAccelerationEvent_Injected(Int32 index, unknown_type ret);
			static void SimulateTouchInternal_Injected(unknown_type touch, Int64 timestamp);
			static void get_mousePosition_Injected(UnityEngine::Vector3& ret);
			static void get_mouseScrollDelta_Injected(UnityEngine::Vector2& ret);
			static void get_compositionCursorPos_Injected(UnityEngine::Vector2& ret);
			static void set_compositionCursorPos_Injected(UnityEngine::Vector2& value);
			static void get_acceleration_Injected(UnityEngine::Vector3& ret);
		};
	}
	namespace UnityEngine {
		class Resolution
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static Resolution* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			Int32 m_Width;
			Int32 m_Height;
			Int32 m_RefreshRate;
			Int32 get_width();
			void set_width(Int32 value);
			Int32 get_height();
			void set_height(Int32 value);
			Int32 get_refreshRate();
			void set_refreshRate(Int32 value);
			String* ToString();
		};
	}
	namespace UnityEngine {
		class Vector3
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static Vector3* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			static Single kEpsilon();                                                       // System.Single
			static void kEpsilon_Set(Single value);
			static Single kEpsilonNormalSqrt();                                             // System.Single
			static void kEpsilonNormalSqrt_Set(Single value);
			Single x;
			Single y;
			Single z;
			static UnityEngine::Vector3 zeroVector();                                       // UnityEngine.Vector3
			static void zeroVector_Set(UnityEngine::Vector3 value);
			static UnityEngine::Vector3 oneVector();                                        // UnityEngine.Vector3
			static void oneVector_Set(UnityEngine::Vector3 value);
			static UnityEngine::Vector3 upVector();                                         // UnityEngine.Vector3
			static void upVector_Set(UnityEngine::Vector3 value);
			static UnityEngine::Vector3 downVector();                                       // UnityEngine.Vector3
			static void downVector_Set(UnityEngine::Vector3 value);
			static UnityEngine::Vector3 leftVector();                                       // UnityEngine.Vector3
			static void leftVector_Set(UnityEngine::Vector3 value);
			static UnityEngine::Vector3 rightVector();                                      // UnityEngine.Vector3
			static void rightVector_Set(UnityEngine::Vector3 value);
			static UnityEngine::Vector3 forwardVector();                                    // UnityEngine.Vector3
			static void forwardVector_Set(UnityEngine::Vector3 value);
			static UnityEngine::Vector3 backVector();                                       // UnityEngine.Vector3
			static void backVector_Set(UnityEngine::Vector3 value);
			static UnityEngine::Vector3 positiveInfinityVector();                           // UnityEngine.Vector3
			static void positiveInfinityVector_Set(UnityEngine::Vector3 value);
			static UnityEngine::Vector3 negativeInfinityVector();                           // UnityEngine.Vector3
			static void negativeInfinityVector_Set(UnityEngine::Vector3 value);
			static UnityEngine::Vector3 Slerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, Single t);
			static UnityEngine::Vector3 SlerpUnclamped(UnityEngine::Vector3 a, UnityEngine::Vector3 b, Single t);
			static void OrthoNormalize2(UnityEngine::Vector3& a, UnityEngine::Vector3& b);
			static void OrthoNormalize(UnityEngine::Vector3& normal, UnityEngine::Vector3& tangent);
			static void OrthoNormalize3(UnityEngine::Vector3& a, UnityEngine::Vector3& b, UnityEngine::Vector3& c);
			static void OrthoNormalize1(UnityEngine::Vector3& normal, UnityEngine::Vector3& tangent, UnityEngine::Vector3& binormal);
			static UnityEngine::Vector3 RotateTowards(UnityEngine::Vector3 current, UnityEngine::Vector3 target, Single maxRadiansDelta, Single maxMagnitudeDelta);
			static UnityEngine::Vector3 Lerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, Single t);
			static UnityEngine::Vector3 LerpUnclamped(UnityEngine::Vector3 a, UnityEngine::Vector3 b, Single t);
			static UnityEngine::Vector3 MoveTowards(UnityEngine::Vector3 current, UnityEngine::Vector3 target, Single maxDistanceDelta);
			static UnityEngine::Vector3 SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, Single smoothTime, Single maxSpeed);
			static UnityEngine::Vector3 SmoothDamp1(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, Single smoothTime);
			static UnityEngine::Vector3 SmoothDamp2(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, Single smoothTime, Single maxSpeed, Single deltaTime);
			Single get_Item(Int32 index);
			void set_Item(Int32 index, Single value);
			void Set(Single newX, Single newY, Single newZ);
			static UnityEngine::Vector3 Scale(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
			void Scale1(UnityEngine::Vector3 scale);
			static UnityEngine::Vector3 Cross(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
			Int32 GetHashCode();
			Boolean Equals(unknown_type other);
			Boolean Equals1(UnityEngine::Vector3 other);
			static UnityEngine::Vector3 Reflect(UnityEngine::Vector3 inDirection, UnityEngine::Vector3 inNormal);
			static UnityEngine::Vector3 Normalize(UnityEngine::Vector3 value);
			void Normalize1();
			UnityEngine::Vector3 get_normalized();
			static Single Dot(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
			static UnityEngine::Vector3 Project(UnityEngine::Vector3 vector, UnityEngine::Vector3 onNormal);
			static UnityEngine::Vector3 ProjectOnPlane(UnityEngine::Vector3 vector, UnityEngine::Vector3 planeNormal);
			static Single Angle(UnityEngine::Vector3 from, UnityEngine::Vector3 to);
			static Single SignedAngle(UnityEngine::Vector3 from, UnityEngine::Vector3 to, UnityEngine::Vector3 axis);
			static Single Distance(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
			static UnityEngine::Vector3 ClampMagnitude(UnityEngine::Vector3 vector, Single maxLength);
			static Single Magnitude(UnityEngine::Vector3 vector);
			Single get_magnitude();
			static Single SqrMagnitude(UnityEngine::Vector3 vector);
			Single get_sqrMagnitude();
			static UnityEngine::Vector3 Min(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
			static UnityEngine::Vector3 Max(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
			static UnityEngine::Vector3 get_zero();
			static UnityEngine::Vector3 get_one();
			static UnityEngine::Vector3 get_forward();
			static UnityEngine::Vector3 get_back();
			static UnityEngine::Vector3 get_up();
			static UnityEngine::Vector3 get_down();
			static UnityEngine::Vector3 get_left();
			static UnityEngine::Vector3 get_right();
			static UnityEngine::Vector3 get_positiveInfinity();
			static UnityEngine::Vector3 get_negativeInfinity();
			static UnityEngine::Vector3 op_Addition(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
			static UnityEngine::Vector3 op_Subtraction(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
			static UnityEngine::Vector3 op_UnaryNegation(UnityEngine::Vector3 a);
			static UnityEngine::Vector3 op_Multiply(UnityEngine::Vector3 a, Single d);
			static UnityEngine::Vector3 op_Multiply1(Single d, UnityEngine::Vector3 a);
			static UnityEngine::Vector3 op_Division(UnityEngine::Vector3 a, Single d);
			static Boolean op_Equality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
			static Boolean op_Inequality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs);
			String* ToString();
			String* ToString1(String* format);
			String* ToString2(String* format, unknown_type formatProvider);
			static UnityEngine::Vector3 get_fwd();
			static Single AngleBetween(UnityEngine::Vector3 from, UnityEngine::Vector3 to);
			static UnityEngine::Vector3 Exclude(UnityEngine::Vector3 excludeThis, UnityEngine::Vector3 fromThat);
			static void Slerp_Injected(UnityEngine::Vector3& a, UnityEngine::Vector3& b, Single t, UnityEngine::Vector3& ret);
			static void SlerpUnclamped_Injected(UnityEngine::Vector3& a, UnityEngine::Vector3& b, Single t, UnityEngine::Vector3& ret);
			static void RotateTowards_Injected(UnityEngine::Vector3& current, UnityEngine::Vector3& target, Single maxRadiansDelta, Single maxMagnitudeDelta, UnityEngine::Vector3& ret);
		};
	}
	namespace UnityEngine {
		class Quaternion
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static Quaternion* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			Single x;
			Single y;
			Single z;
			Single w;
			static UnityEngine::Quaternion identityQuaternion();                            // UnityEngine.Quaternion
			static void identityQuaternion_Set(UnityEngine::Quaternion value);
			static Single kEpsilon();                                                       // System.Single
			static void kEpsilon_Set(Single value);
			static UnityEngine::Quaternion FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection);
			static UnityEngine::Quaternion Inverse(UnityEngine::Quaternion rotation);
			static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, Single t);
			static UnityEngine::Quaternion SlerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, Single t);
			static UnityEngine::Quaternion Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, Single t);
			static UnityEngine::Quaternion LerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, Single t);
			static UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine::Vector3 euler);
			static UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine::Quaternion rotation);
			static void Internal_ToAxisAngleRad(UnityEngine::Quaternion q, UnityEngine::Vector3& axis, unknown_type angle);
			static UnityEngine::Quaternion AngleAxis(Single angle, UnityEngine::Vector3 axis);
			static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards);
			static UnityEngine::Quaternion LookRotation1(UnityEngine::Vector3 forward);
			Single get_Item(Int32 index);
			void set_Item(Int32 index, Single value);
			void Set(Single newX, Single newY, Single newZ, Single newW);
			static UnityEngine::Quaternion get_identity();
			static UnityEngine::Quaternion op_Multiply(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs);
			static UnityEngine::Vector3 op_Multiply1(UnityEngine::Quaternion rotation, UnityEngine::Vector3 point);
			static Boolean IsEqualUsingDot(Single dot);
			static Boolean op_Equality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs);
			static Boolean op_Inequality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs);
			static Single Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
			void SetLookRotation(UnityEngine::Vector3 view);
			void SetLookRotation1(UnityEngine::Vector3 view, UnityEngine::Vector3 up);
			static Single Angle(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
			static UnityEngine::Vector3 Internal_MakePositive(UnityEngine::Vector3 euler);
			UnityEngine::Vector3 get_eulerAngles();
			void set_eulerAngles(UnityEngine::Vector3 value);
			static UnityEngine::Quaternion Euler(Single x, Single y, Single z);
			static UnityEngine::Quaternion Euler1(UnityEngine::Vector3 euler);
			void ToAngleAxis(unknown_type angle, UnityEngine::Vector3& axis);
			void SetFromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection);
			static UnityEngine::Quaternion RotateTowards(UnityEngine::Quaternion from, UnityEngine::Quaternion to, Single maxDegreesDelta);
			static UnityEngine::Quaternion Normalize(UnityEngine::Quaternion q);
			void Normalize1();
			UnityEngine::Quaternion get_normalized();
			Int32 GetHashCode();
			Boolean Equals(unknown_type other);
			Boolean Equals1(UnityEngine::Quaternion other);
			String* ToString();
			String* ToString1(String* format);
			String* ToString2(String* format, unknown_type formatProvider);
			static UnityEngine::Quaternion EulerRotation(Single x, Single y, Single z);
			static UnityEngine::Quaternion EulerRotation1(UnityEngine::Vector3 euler);
			void SetEulerRotation(Single x, Single y, Single z);
			void SetEulerRotation1(UnityEngine::Vector3 euler);
			UnityEngine::Vector3 ToEuler();
			static UnityEngine::Quaternion EulerAngles(Single x, Single y, Single z);
			static UnityEngine::Quaternion EulerAngles1(UnityEngine::Vector3 euler);
			void ToAxisAngle(UnityEngine::Vector3& axis, unknown_type angle);
			void SetEulerAngles(Single x, Single y, Single z);
			void SetEulerAngles1(UnityEngine::Vector3 euler);
			static UnityEngine::Vector3 ToEulerAngles(UnityEngine::Quaternion rotation);
			UnityEngine::Vector3 ToEulerAngles1();
			void SetAxisAngle(UnityEngine::Vector3 axis, Single angle);
			static UnityEngine::Quaternion AxisAngle(UnityEngine::Vector3 axis, Single angle);
			static void FromToRotation_Injected(UnityEngine::Vector3& fromDirection, UnityEngine::Vector3& toDirection, UnityEngine::Quaternion& ret);
			static void Inverse_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Quaternion& ret);
			static void Slerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, Single t, UnityEngine::Quaternion& ret);
			static void SlerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, Single t, UnityEngine::Quaternion& ret);
			static void Lerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, Single t, UnityEngine::Quaternion& ret);
			static void LerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, Single t, UnityEngine::Quaternion& ret);
			static void Internal_FromEulerRad_Injected(UnityEngine::Vector3& euler, UnityEngine::Quaternion& ret);
			static void Internal_ToEulerRad_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Vector3& ret);
			static void Internal_ToAxisAngleRad_Injected(UnityEngine::Quaternion& q, UnityEngine::Vector3& axis, unknown_type angle);
			static void AngleAxis_Injected(Single angle, UnityEngine::Vector3& axis, UnityEngine::Quaternion& ret);
			static void LookRotation_Injected(UnityEngine::Vector3& forward, UnityEngine::Vector3& upwards, UnityEngine::Quaternion& ret);
		};
	}
	namespace UnityEngine {
		class Vector2
		{
			Runtime::MonoVTable* GetInstanceVTable();
			static uintptr_t StaticInstance();
		public:
			static Runtime::MonoClass* MonoClass();
			static Vector2* CreateObjectInstance();
			bool IsOfType(Runtime::MonoClass* klass);
			MONO_OBJECT_ISNULL_DEC();

			Single x;
			Single y;
			static UnityEngine::Vector2 zeroVector();                                       // UnityEngine.Vector2
			static void zeroVector_Set(UnityEngine::Vector2 value);
			static UnityEngine::Vector2 oneVector();                                        // UnityEngine.Vector2
			static void oneVector_Set(UnityEngine::Vector2 value);
			static UnityEngine::Vector2 upVector();                                         // UnityEngine.Vector2
			static void upVector_Set(UnityEngine::Vector2 value);
			static UnityEngine::Vector2 downVector();                                       // UnityEngine.Vector2
			static void downVector_Set(UnityEngine::Vector2 value);
			static UnityEngine::Vector2 leftVector();                                       // UnityEngine.Vector2
			static void leftVector_Set(UnityEngine::Vector2 value);
			static UnityEngine::Vector2 rightVector();                                      // UnityEngine.Vector2
			static void rightVector_Set(UnityEngine::Vector2 value);
			static UnityEngine::Vector2 positiveInfinityVector();                           // UnityEngine.Vector2
			static void positiveInfinityVector_Set(UnityEngine::Vector2 value);
			static UnityEngine::Vector2 negativeInfinityVector();                           // UnityEngine.Vector2
			static void negativeInfinityVector_Set(UnityEngine::Vector2 value);
			static Single kEpsilon();                                                       // System.Single
			static void kEpsilon_Set(Single value);
			static Single kEpsilonNormalSqrt();                                             // System.Single
			static void kEpsilonNormalSqrt_Set(Single value);
			Single get_Item(Int32 index);
			void set_Item(Int32 index, Single value);
			void Set(Single newX, Single newY);
			static UnityEngine::Vector2 Lerp(UnityEngine::Vector2 a, UnityEngine::Vector2 b, Single t);
			static UnityEngine::Vector2 LerpUnclamped(UnityEngine::Vector2 a, UnityEngine::Vector2 b, Single t);
			static UnityEngine::Vector2 MoveTowards(UnityEngine::Vector2 current, UnityEngine::Vector2 target, Single maxDistanceDelta);
			static UnityEngine::Vector2 Scale(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
			void Scale1(UnityEngine::Vector2 scale);
			void Normalize();
			UnityEngine::Vector2 get_normalized();
			String* ToString();
			String* ToString1(String* format);
			String* ToString2(String* format, unknown_type formatProvider);
			Int32 GetHashCode();
			Boolean Equals(unknown_type other);
			Boolean Equals1(UnityEngine::Vector2 other);
			static UnityEngine::Vector2 Reflect(UnityEngine::Vector2 inDirection, UnityEngine::Vector2 inNormal);
			static UnityEngine::Vector2 Perpendicular(UnityEngine::Vector2 inDirection);
			static Single Dot(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs);
			Single get_magnitude();
			Single get_sqrMagnitude();
			static Single Angle(UnityEngine::Vector2 from, UnityEngine::Vector2 to);
			static Single SignedAngle(UnityEngine::Vector2 from, UnityEngine::Vector2 to);
			static Single Distance(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
			static UnityEngine::Vector2 ClampMagnitude(UnityEngine::Vector2 vector, Single maxLength);
			static Single SqrMagnitude(UnityEngine::Vector2 a);
			Single SqrMagnitude1();
			static UnityEngine::Vector2 Min(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs);
			static UnityEngine::Vector2 Max(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs);
			static UnityEngine::Vector2 SmoothDamp(UnityEngine::Vector2 current, UnityEngine::Vector2 target, UnityEngine::Vector2& currentVelocity, Single smoothTime, Single maxSpeed);
			static UnityEngine::Vector2 SmoothDamp1(UnityEngine::Vector2 current, UnityEngine::Vector2 target, UnityEngine::Vector2& currentVelocity, Single smoothTime);
			static UnityEngine::Vector2 SmoothDamp2(UnityEngine::Vector2 current, UnityEngine::Vector2 target, UnityEngine::Vector2& currentVelocity, Single smoothTime, Single maxSpeed, Single deltaTime);
			static UnityEngine::Vector2 op_Addition(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
			static UnityEngine::Vector2 op_Subtraction(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
			static UnityEngine::Vector2 op_Multiply(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
			static UnityEngine::Vector2 op_Division(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
			static UnityEngine::Vector2 op_UnaryNegation(UnityEngine::Vector2 a);
			static UnityEngine::Vector2 op_Multiply1(UnityEngine::Vector2 a, Single d);
			static UnityEngine::Vector2 op_Multiply2(Single d, UnityEngine::Vector2 a);
			static UnityEngine::Vector2 op_Division1(UnityEngine::Vector2 a, Single d);
			static Boolean op_Equality(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs);
			static Boolean op_Inequality(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs);
			static UnityEngine::Vector2 op_Implicit(UnityEngine::Vector3 v);
			static UnityEngine::Vector3 op_Implicit1(UnityEngine::Vector2 v);
			static UnityEngine::Vector2 get_zero();
			static UnityEngine::Vector2 get_one();
			static UnityEngine::Vector2 get_up();
			static UnityEngine::Vector2 get_down();
			static UnityEngine::Vector2 get_left();
			static UnityEngine::Vector2 get_right();
			static UnityEngine::Vector2 get_positiveInfinity();
			static UnityEngine::Vector2 get_negativeInfinity();
		};
	}
}
