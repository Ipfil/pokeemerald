const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = _("??????????"),
    [SPECIES_BULBASAUR] = _("BULBASAUR"),
    [SPECIES_IVYSAUR] = _("IVYSAUR"),
    [SPECIES_VENUSAUR] = _("VENUSAUR"),
    [SPECIES_FEUZARD] = _("FEUZARD"),
    [SPECIES_CHARMELEON] = _("CHARMELEON"),
    [SPECIES_CHARIZARD] = _("CHARIZARD"),
    [SPECIES_ALEVINUS] = _("ALEVINUS"),
    [SPECIES_BLINDALVIN] = _("BLINDALVIN"),
    [SPECIES_BLASTOISE] = _("BLASTOISE"),
    [SPECIES_CATERPIE] = _("CATERPIE"),
    [SPECIES_METAPOD] = _("METAPOD"),
    [SPECIES_BUTTERFREE] = _("BUTTERFREE"),
    [SPECIES_WEEDLE] = _("WEEDLE"),
    [SPECIES_KAKUNA] = _("KAKUNA"),
    [SPECIES_BEEDRILL] = _("BEEDRILL"),
    [SPECIES_PIDGEY] = _("PIDGEY"),
    [SPECIES_PIDGEOTTO] = _("PIDGEOTTO"),
    [SPECIES_PIDGEOT] = _("PIDGEOT"),
    [SPECIES_RATTATA] = _("RATTATA"),
    [SPECIES_RATICATE] = _("RATICATE"),
    [SPECIES_SPEAROW] = _("SPEAROW"),
    [SPECIES_FEAROW] = _("FEAROW"),
    [SPECIES_EKANS] = _("EKANS"),
    [SPECIES_ARBOK] = _("ARBOK"),
    [SPECIES_PIKACHU] = _("PIKACHU"),
    [SPECIES_RAICHU] = _("RAICHU"),
    [SPECIES_SANDSHREW] = _("SANDSHREW"),
    [SPECIES_SANDSLASH] = _("SANDSLASH"),
    [SPECIES_NIDORAN_F] = _("NIDORAN♀"),
    [SPECIES_NIDORINA] = _("NIDORINA"),
    [SPECIES_NIDOQUEEN] = _("NIDOQUEEN"),
    [SPECIES_NIDORAN_M] = _("NIDORAN♂"),
    [SPECIES_NIDORINO] = _("NIDORINO"),
    [SPECIES_NIDOKING] = _("NIDOKING"),
    [SPECIES_CLEFAIRY] = _("CLEFAIRY"),
    [SPECIES_CLEFABLE] = _("CLEFABLE"),
    [SPECIES_VULPIX] = _("VULPIX"),
    [SPECIES_NINETALES] = _("NINETALES"),
    [SPECIES_JIGGLYPUFF] = _("JIGGLYPUFF"),
    [SPECIES_WIGGLYTUFF] = _("WIGGLYTUFF"),
    [SPECIES_ZUBAT] = _("ZUBAT"),
    [SPECIES_GOLBAT] = _("GOLBAT"),
    [SPECIES_ODDISH] = _("ODDISH"),
    [SPECIES_GLOOM] = _("GLOOM"),
    [SPECIES_VILEPLUME] = _("VILEPLUME"),
    [SPECIES_PARAS] = _("PARAS"),
    [SPECIES_PARASECT] = _("PARASECT"),
    [SPECIES_VENONAT] = _("VENONAT"),
    [SPECIES_VENOMOTH] = _("VENOMOTH"),
    [SPECIES_DIGLETT] = _("DIGLETT"),
    [SPECIES_DUGTRIO] = _("DUGTRIO"),
    [SPECIES_MEOWTH] = _("MEOWTH"),
    [SPECIES_PERSIAN] = _("PERSIAN"),
    [SPECIES_PSYDUCK] = _("PSYDUCK"),
    [SPECIES_GOLDUCK] = _("GOLDUCK"),
    [SPECIES_MANKEY] = _("MANKEY"),
    [SPECIES_PRIMEAPE] = _("PRIMEAPE"),
    [SPECIES_GROWLITHE] = _("GROWLITHE"),
    [SPECIES_ARCANINE] = _("ARCANINE"),
    [SPECIES_POLIWAG] = _("POLIWAG"),
    [SPECIES_POLIWHIRL] = _("POLIWHIRL"),
    [SPECIES_POLIWRATH] = _("POLIWRATH"),
    [SPECIES_ABRA] = _("ABRA"),
    [SPECIES_KADABRA] = _("KADABRA"),
    [SPECIES_ALAKAZAM] = _("ALAKAZAM"),
    [SPECIES_MACHOP] = _("MACHOP"),
    [SPECIES_MACHOKE] = _("MACHOKE"),
    [SPECIES_MACHAMP] = _("MACHAMP"),
    [SPECIES_BELLSPROUT] = _("BELLSPROUT"),
    [SPECIES_WEEPINBELL] = _("WEEPINBELL"),
    [SPECIES_VICTREEBEL] = _("VICTREEBEL"),
    [SPECIES_TENTACOOL] = _("TENTACOOL"),
    [SPECIES_TENTACRUEL] = _("TENTACRUEL"),
    [SPECIES_GEODUDE] = _("GEODUDE"),
    [SPECIES_GRAVELER] = _("GRAVELER"),
    [SPECIES_GOLEM] = _("GOLEM"),
    [SPECIES_PONYTA] = _("PONYTA"),
    [SPECIES_RAPIDASH] = _("RAPIDASH"),
    [SPECIES_SLOWPOKE] = _("SLOWPOKE"),
    [SPECIES_SLOWBRO] = _("SLOWBRO"),
    [SPECIES_MAGNEMITE] = _("MAGNEMITE"),
    [SPECIES_MAGNETON] = _("MAGNETON"),
    [SPECIES_FARFETCHD] = _("FARFETCH'D"),
    [SPECIES_DODUO] = _("DODUO"),
    [SPECIES_DODRIO] = _("DODRIO"),
    [SPECIES_SEEL] = _("SEEL"),
    [SPECIES_DEWGONG] = _("DEWGONG"),
    [SPECIES_GRIMER] = _("GRIMER"),
    [SPECIES_MUK] = _("MUK"),
    [SPECIES_SHELLDER] = _("SHELLDER"),
    [SPECIES_CLOYSTER] = _("CLOYSTER"),
    [SPECIES_GASTLY] = _("GASTLY"),
    [SPECIES_HAUNTER] = _("HAUNTER"),
    [SPECIES_GENGAR] = _("GENGAR"),
    [SPECIES_ONIX] = _("ONIX"),
    [SPECIES_DROWZEE] = _("DROWZEE"),
    [SPECIES_HYPNO] = _("HYPNO"),
    [SPECIES_KRABBY] = _("KRABBY"),
    [SPECIES_KINGLER] = _("KINGLER"),
    [SPECIES_VOLTORB] = _("VOLTORB"),
    [SPECIES_ELECTRODE] = _("ELECTRODE"),
    [SPECIES_EXEGGCUTE] = _("EXEGGCUTE"),
    [SPECIES_EXEGGUTOR] = _("EXEGGUTOR"),
    [SPECIES_CUBONE] = _("CUBONE"),
    [SPECIES_MAROWAK] = _("MAROWAK"),
    [SPECIES_HITMONLEE] = _("HITMONLEE"),
    [SPECIES_HITMONCHAN] = _("HITMONCHAN"),
    [SPECIES_LICKITUNG] = _("LICKITUNG"),
    [SPECIES_KOFFING] = _("KOFFING"),
    [SPECIES_WEEZING] = _("WEEZING"),
    [SPECIES_RHYHORN] = _("RHYHORN"),
    [SPECIES_RHYDON] = _("RHYDON"),
    [SPECIES_CHANSEY] = _("CHANSEY"),
    [SPECIES_TANGELA] = _("TANGELA"),
    [SPECIES_KANGASKHAN] = _("KANGASKHAN"),
    [SPECIES_HORSEA] = _("HORSEA"),
    [SPECIES_SEADRA] = _("SEADRA"),
    [SPECIES_GOLDEEN] = _("GOLDEEN"),
    [SPECIES_SEAKING] = _("SEAKING"),
    [SPECIES_STARYU] = _("STARYU"),
    [SPECIES_STARMIE] = _("STARMIE"),
    [SPECIES_MR_MIME] = _("MR. MIME"),
    [SPECIES_SCYTHER] = _("SCYTHER"),
    [SPECIES_JYNX] = _("JYNX"),
    [SPECIES_ELECTABUZZ] = _("ELECTABUZZ"),
    [SPECIES_MAGMAR] = _("MAGMAR"),
    [SPECIES_PINSIR] = _("PINSIR"),
    [SPECIES_TAUROS] = _("TAUROS"),
    [SPECIES_MAGIKARP] = _("MAGIKARP"),
    [SPECIES_GYARADOS] = _("GYARADOS"),
    [SPECIES_LAPRAS] = _("LAPRAS"),
    [SPECIES_DITTO] = _("DITTO"),
    [SPECIES_EEVEE] = _("EEVEE"),
    [SPECIES_VAPOREON] = _("VAPOREON"),
    [SPECIES_JOLTEON] = _("JOLTEON"),
    [SPECIES_FLAREON] = _("FLAREON"),
    [SPECIES_PORYGON] = _("PORYGON"),
    [SPECIES_OMANYTE] = _("OMANYTE"),
    [SPECIES_OMASTAR] = _("OMASTAR"),
    [SPECIES_KABUTO] = _("KABUTO"),
    [SPECIES_KABUTOPS] = _("KABUTOPS"),
    [SPECIES_AERODACTYL] = _("AERODACTYL"),
    [SPECIES_SNORLAX] = _("SNORLAX"),
    [SPECIES_ARTICUNO] = _("ARTICUNO"),
    [SPECIES_ZAPDOS] = _("ZAPDOS"),
    [SPECIES_MOLTRES] = _("MOLTRES"),
    [SPECIES_DRATINI] = _("DRATINI"),
    [SPECIES_DRAGONAIR] = _("DRAGONAIR"),
    [SPECIES_DRAGONITE] = _("DRAGONITE"),
    [SPECIES_MEWTWO] = _("MEWTWO"),
    [SPECIES_MEW] = _("MEW"),
    [SPECIES_CHIKORITA] = _("CHIKORITA"),
    [SPECIES_BAYLEEF] = _("BAYLEEF"),
    [SPECIES_MEGANIUM] = _("MEGANIUM"),
    [SPECIES_CYNDAQUIL] = _("CYNDAQUIL"),
    [SPECIES_QUILAVA] = _("QUILAVA"),
    [SPECIES_TYPHLOSION] = _("TYPHLOSION"),
    [SPECIES_TOTODILE] = _("TOTODILE"),
    [SPECIES_CROCONAW] = _("CROCONAW"),
    [SPECIES_FERALIGATR] = _("FERALIGATR"),
    [SPECIES_SENTRET] = _("SENTRET"),
    [SPECIES_FURRET] = _("FURRET"),
    [SPECIES_HOOTHOOT] = _("HOOTHOOT"),
    [SPECIES_NOCTOWL] = _("NOCTOWL"),
    [SPECIES_LEDYBA] = _("LEDYBA"),
    [SPECIES_LEDIAN] = _("LEDIAN"),
    [SPECIES_SPINARAK] = _("SPINARAK"),
    [SPECIES_ARIADOS] = _("ARIADOS"),
    [SPECIES_CROBAT] = _("CROBAT"),
    [SPECIES_CHINCHOU] = _("CHINCHOU"),
    [SPECIES_LANTURN] = _("LANTURN"),
    [SPECIES_PICHU] = _("PICHU"),
    [SPECIES_CLEFFA] = _("CLEFFA"),
    [SPECIES_IGGLYBUFF] = _("IGGLYBUFF"),
    [SPECIES_TOGEPI] = _("TOGEPI"),
    [SPECIES_TOGETIC] = _("TOGETIC"),
    [SPECIES_NATU] = _("NATU"),
    [SPECIES_XATU] = _("XATU"),
    [SPECIES_MAREEP] = _("MAREEP"),
    [SPECIES_FLAAFFY] = _("FLAAFFY"),
    [SPECIES_AMPHAROS] = _("AMPHAROS"),
    [SPECIES_BELLOSSOM] = _("BELLOSSOM"),
    [SPECIES_MARILL] = _("MARILL"),
    [SPECIES_AZUMARILL] = _("AZUMARILL"),
    [SPECIES_SUDOWOODO] = _("SUDOWOODO"),
    [SPECIES_POLITOED] = _("POLITOED"),
    [SPECIES_HOPPIP] = _("HOPPIP"),
    [SPECIES_SKIPLOOM] = _("SKIPLOOM"),
    [SPECIES_JUMPLUFF] = _("JUMPLUFF"),
    [SPECIES_AIPOM] = _("AIPOM"),
    [SPECIES_SUNKERN] = _("SUNKERN"),
    [SPECIES_SUNFLORA] = _("SUNFLORA"),
    [SPECIES_YANMA] = _("YANMA"),
    [SPECIES_WOOPER] = _("WOOPER"),
    [SPECIES_QUAGSIRE] = _("QUAGSIRE"),
    [SPECIES_ESPEON] = _("ESPEON"),
    [SPECIES_UMBREON] = _("UMBREON"),
    [SPECIES_MURKROW] = _("MURKROW"),
    [SPECIES_SLOWKING] = _("SLOWKING"),
    [SPECIES_MISDREAVUS] = _("MISDREAVUS"),
    [SPECIES_UNOWN] = _("UNOWN"),
    [SPECIES_WOBBUFFET] = _("WOBBUFFET"),
    [SPECIES_GIRAFARIG] = _("GIRAFARIG"),
    [SPECIES_PINECO] = _("PINECO"),
    [SPECIES_FORRETRESS] = _("FORRETRESS"),
    [SPECIES_DUNSPARCE] = _("DUNSPARCE"),
    [SPECIES_GLIGAR] = _("GLIGAR"),
    [SPECIES_STEELIX] = _("STEELIX"),
    [SPECIES_SNUBBULL] = _("SNUBBULL"),
    [SPECIES_GRANBULL] = _("GRANBULL"),
    [SPECIES_QWILFISH] = _("QWILFISH"),
    [SPECIES_SCIZOR] = _("SCIZOR"),
    [SPECIES_SHUCKLE] = _("SHUCKLE"),
    [SPECIES_HERACROSS] = _("HERACROSS"),
    [SPECIES_SNEASEL] = _("SNEASEL"),
    [SPECIES_TEDDIURSA] = _("TEDDIURSA"),
    [SPECIES_URSARING] = _("URSARING"),
    [SPECIES_SLUGMA] = _("SLUGMA"),
    [SPECIES_MAGCARGO] = _("MAGCARGO"),
    [SPECIES_SWINUB] = _("SWINUB"),
    [SPECIES_PILOSWINE] = _("PILOSWINE"),
    [SPECIES_CORSOLA] = _("CORSOLA"),
    [SPECIES_REMORAID] = _("REMORAID"),
    [SPECIES_OCTILLERY] = _("OCTILLERY"),
    [SPECIES_DELIBIRD] = _("DELIBIRD"),
    [SPECIES_MANTINE] = _("MANTINE"),
    [SPECIES_SKARMORY] = _("SKARMORY"),
    [SPECIES_HOUNDOUR] = _("HOUNDOUR"),
    [SPECIES_HOUNDOOM] = _("HOUNDOOM"),
    [SPECIES_KINGDRA] = _("KINGDRA"),
    [SPECIES_PHANPY] = _("PHANPY"),
    [SPECIES_DONPHAN] = _("DONPHAN"),
    [SPECIES_PORYGON2] = _("PORYGON2"),
    [SPECIES_STANTLER] = _("STANTLER"),
    [SPECIES_SMEARGLE] = _("SMEARGLE"),
    [SPECIES_TYROGUE] = _("TYROGUE"),
    [SPECIES_HITMONTOP] = _("HITMONTOP"),
    [SPECIES_SMOOCHUM] = _("SMOOCHUM"),
    [SPECIES_ELEKID] = _("ELEKID"),
    [SPECIES_MAGBY] = _("MAGBY"),
    [SPECIES_MILTANK] = _("MILTANK"),
    [SPECIES_BLISSEY] = _("BLISSEY"),
    [SPECIES_RAIKOU] = _("RAIKOU"),
    [SPECIES_ENTEI] = _("ENTEI"),
    [SPECIES_SUICUNE] = _("SUICUNE"),
    [SPECIES_LARVITAR] = _("LARVITAR"),
    [SPECIES_PUPITAR] = _("PUPITAR"),
    [SPECIES_TYRANITAR] = _("TYRANITAR"),
    [SPECIES_LUGIA] = _("LUGIA"),
    [SPECIES_HO_OH] = _("HO-OH"),
    [SPECIES_CELEBI] = _("CELEBI"),
    [SPECIES_OLD_UNOWN_B] = _("?"),
    [SPECIES_OLD_UNOWN_C] = _("?"),
    [SPECIES_OLD_UNOWN_D] = _("?"),
    [SPECIES_OLD_UNOWN_E] = _("?"),
    [SPECIES_OLD_UNOWN_F] = _("?"),
    [SPECIES_OLD_UNOWN_G] = _("?"),
    [SPECIES_OLD_UNOWN_H] = _("?"),
    [SPECIES_OLD_UNOWN_I] = _("?"),
    [SPECIES_OLD_UNOWN_J] = _("?"),
    [SPECIES_OLD_UNOWN_K] = _("?"),
    [SPECIES_OLD_UNOWN_L] = _("?"),
    [SPECIES_OLD_UNOWN_M] = _("?"),
    [SPECIES_OLD_UNOWN_N] = _("?"),
    [SPECIES_OLD_UNOWN_O] = _("?"),
    [SPECIES_OLD_UNOWN_P] = _("?"),
    [SPECIES_OLD_UNOWN_Q] = _("?"),
    [SPECIES_OLD_UNOWN_R] = _("?"),
    [SPECIES_OLD_UNOWN_S] = _("?"),
    [SPECIES_OLD_UNOWN_T] = _("?"),
    [SPECIES_OLD_UNOWN_U] = _("?"),
    [SPECIES_OLD_UNOWN_V] = _("?"),
    [SPECIES_OLD_UNOWN_W] = _("?"),
    [SPECIES_OLD_UNOWN_X] = _("?"),
    [SPECIES_OLD_UNOWN_Y] = _("?"),
    [SPECIES_OLD_UNOWN_Z] = _("?"),
    [SPECIES_TREECKO] = _("TREECKO"),
    [SPECIES_GROVYLE] = _("GROVYLE"),
    [SPECIES_SCEPTILE] = _("SCEPTILE"),
    [SPECIES_TORCHIC] = _("TORCHIC"),
    [SPECIES_COMBUSKEN] = _("COMBUSKEN"),
    [SPECIES_BLAZIKEN] = _("BLAZIKEN"),
    [SPECIES_MUDKIP] = _("MUDKIP"),
    [SPECIES_MARSHTOMP] = _("MARSHTOMP"),
    [SPECIES_SWAMPERT] = _("SWAMPERT"),
    [SPECIES_POOCHYENA] = _("POOCHYENA"),
    [SPECIES_MIGHTYENA] = _("MIGHTYENA"),
    [SPECIES_ZIGZAGOON] = _("ZIGZAGOON"),
    [SPECIES_LINOONE] = _("LINOONE"),
    [SPECIES_WURMPLE] = _("WURMPLE"),
    [SPECIES_SILCOON] = _("SILCOON"),
    [SPECIES_BEAUTIFLY] = _("BEAUTIFLY"),
    [SPECIES_CASCOON] = _("CASCOON"),
    [SPECIES_DUSTOX] = _("DUSTOX"),
    [SPECIES_LOTAD] = _("LOTAD"),
    [SPECIES_LOMBRE] = _("LOMBRE"),
    [SPECIES_LUDICOLO] = _("LUDICOLO"),
    [SPECIES_SEEDOT] = _("SEEDOT"),
    [SPECIES_NUZLEAF] = _("NUZLEAF"),
    [SPECIES_SHIFTRY] = _("SHIFTRY"),
    [SPECIES_NINCADA] = _("NINCADA"),
    [SPECIES_NINJASK] = _("NINJASK"),
    [SPECIES_SHEDINJA] = _("SHEDINJA"),
    [SPECIES_TAILLOW] = _("TAILLOW"),
    [SPECIES_SWELLOW] = _("SWELLOW"),
    [SPECIES_SHROOMISH] = _("SHROOMISH"),
    [SPECIES_BRELOOM] = _("BRELOOM"),
    [SPECIES_SPINDA] = _("SPINDA"),
    [SPECIES_WINGULL] = _("WINGULL"),
    [SPECIES_PELIPPER] = _("PELIPPER"),
    [SPECIES_SURSKIT] = _("SURSKIT"),
    [SPECIES_MASQUERAIN] = _("MASQUERAIN"),
    [SPECIES_WAILMER] = _("WAILMER"),
    [SPECIES_WAILORD] = _("WAILORD"),
    [SPECIES_SKITTY] = _("SKITTY"),
    [SPECIES_DELCATTY] = _("DELCATTY"),
    [SPECIES_KECLEON] = _("KECLEON"),
    [SPECIES_BALTOY] = _("BALTOY"),
    [SPECIES_CLAYDOL] = _("CLAYDOL"),
    [SPECIES_NOSEPASS] = _("NOSEPASS"),
    [SPECIES_TORKOAL] = _("TORKOAL"),
    [SPECIES_SABLEYE] = _("SABLEYE"),
    [SPECIES_BARBOACH] = _("BARBOACH"),
    [SPECIES_WHISCASH] = _("WHISCASH"),
    [SPECIES_LUVDISC] = _("LUVDISC"),
    [SPECIES_CORPHISH] = _("CORPHISH"),
    [SPECIES_CRAWDAUNT] = _("CRAWDAUNT"),
    [SPECIES_FEEBAS] = _("FEEBAS"),
    [SPECIES_MILOTIC] = _("MILOTIC"),
    [SPECIES_CARVANHA] = _("CARVANHA"),
    [SPECIES_SHARPEDO] = _("SHARPEDO"),
    [SPECIES_TRAPINCH] = _("TRAPINCH"),
    [SPECIES_VIBRAVA] = _("VIBRAVA"),
    [SPECIES_FLYGON] = _("FLYGON"),
    [SPECIES_MAKUHITA] = _("MAKUHITA"),
    [SPECIES_HARIYAMA] = _("HARIYAMA"),
    [SPECIES_ELECTRIKE] = _("ELECTRIKE"),
    [SPECIES_MANECTRIC] = _("MANECTRIC"),
    [SPECIES_NUMEL] = _("NUMEL"),
    [SPECIES_CAMERUPT] = _("CAMERUPT"),
    [SPECIES_SPHEAL] = _("SPHEAL"),
    [SPECIES_SEALEO] = _("SEALEO"),
    [SPECIES_WALREIN] = _("WALREIN"),
    [SPECIES_CACNEA] = _("CACNEA"),
    [SPECIES_CACTURNE] = _("CACTURNE"),
    [SPECIES_SNORUNT] = _("SNORUNT"),
    [SPECIES_GLALIE] = _("GLALIE"),
    [SPECIES_LUNATONE] = _("LUNATONE"),
    [SPECIES_SOLROCK] = _("SOLROCK"),
    [SPECIES_AZURILL] = _("AZURILL"),
    [SPECIES_SPOINK] = _("SPOINK"),
    [SPECIES_GRUMPIG] = _("GRUMPIG"),
    [SPECIES_PLUSLE] = _("PLUSLE"),
    [SPECIES_MINUN] = _("MINUN"),
    [SPECIES_MAWILE] = _("MAWILE"),
    [SPECIES_MEDITITE] = _("MEDITITE"),
    [SPECIES_MEDICHAM] = _("MEDICHAM"),
    [SPECIES_SWABLU] = _("SWABLU"),
    [SPECIES_ALTARIA] = _("ALTARIA"),
    [SPECIES_WYNAUT] = _("WYNAUT"),
    [SPECIES_DUSKULL] = _("DUSKULL"),
    [SPECIES_DUSCLOPS] = _("DUSCLOPS"),
    [SPECIES_ROSELIA] = _("ROSELIA"),
    [SPECIES_SLAKOTH] = _("SLAKOTH"),
    [SPECIES_VIGOROTH] = _("VIGOROTH"),
    [SPECIES_SLAKING] = _("SLAKING"),
    [SPECIES_GULPIN] = _("GULPIN"),
    [SPECIES_SWALOT] = _("SWALOT"),
    [SPECIES_TROPIUS] = _("TROPIUS"),
    [SPECIES_WHISMUR] = _("WHISMUR"),
    [SPECIES_LOUDRED] = _("LOUDRED"),
    [SPECIES_EXPLOUD] = _("EXPLOUD"),
    [SPECIES_CLAMPERL] = _("CLAMPERL"),
    [SPECIES_HUNTAIL] = _("HUNTAIL"),
    [SPECIES_GOREBYSS] = _("GOREBYSS"),
    [SPECIES_ABSOL] = _("ABSOL"),
    [SPECIES_SHUPPET] = _("SHUPPET"),
    [SPECIES_BANETTE] = _("BANETTE"),
    [SPECIES_SEVIPER] = _("SEVIPER"),
    [SPECIES_ZANGOOSE] = _("ZANGOOSE"),
    [SPECIES_RELICANTH] = _("RELICANTH"),
    [SPECIES_ARON] = _("ARON"),
    [SPECIES_LAIRON] = _("LAIRON"),
    [SPECIES_AGGRON] = _("AGGRON"),
    [SPECIES_CASTFORM] = _("CASTFORM"),
    [SPECIES_VOLBEAT] = _("VOLBEAT"),
    [SPECIES_ILLUMISE] = _("ILLUMISE"),
    [SPECIES_LILEEP] = _("LILEEP"),
    [SPECIES_CRADILY] = _("CRADILY"),
    [SPECIES_ANORITH] = _("ANORITH"),
    [SPECIES_ARMALDO] = _("ARMALDO"),
    [SPECIES_RALTS] = _("RALTS"),
    [SPECIES_KIRLIA] = _("KIRLIA"),
    [SPECIES_GARDEVOIR] = _("GARDEVOIR"),
    [SPECIES_BAGON] = _("BAGON"),
    [SPECIES_SHELGON] = _("SHELGON"),
    [SPECIES_SALAMENCE] = _("SALAMENCE"),
    [SPECIES_BELDUM] = _("BELDUM"),
    [SPECIES_METANG] = _("METANG"),
    [SPECIES_METAGROSS] = _("METAGROSS"),
    [SPECIES_REGIROCK] = _("REGIROCK"),
    [SPECIES_REGICE] = _("REGICE"),
    [SPECIES_REGISTEEL] = _("REGISTEEL"),
    [SPECIES_KYOGRE] = _("KYOGRE"),
    [SPECIES_GROUDON] = _("GROUDON"),
    [SPECIES_RAYQUAZA] = _("RAYQUAZA"),
    [SPECIES_LATIAS] = _("LATIAS"),
    [SPECIES_LATIOS] = _("LATIOS"),
    [SPECIES_JIRACHI] = _("JIRACHI"),
    [SPECIES_DEOXYS] = _("DEOXYS"),
    [SPECIES_CHIMECHO] = _("CHIMECHO"),
};
