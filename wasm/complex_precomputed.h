static cpx_t cpx_exp_precomputed_table[] = {
	{ 1, 0 },
	{ 0.9996988186962042, 0.024541228522912288 },
	{ 0.9987954562051724, 0.049067674327418015 },
	{ 0.9972904566786902, 0.07356456359966743 },
	{ 0.9951847266721969, 0.0980171403295606 },
	{ 0.99247953459871, 0.1224106751992162 },
	{ 0.989176509964781, 0.14673047445536175 },
	{ 0.9852776423889412, 0.17096188876030122 },
	{ 0.9807852804032304, 0.19509032201612825 },
	{ 0.9757021300385286, 0.2191012401568698 },
	{ 0.970031253194544, 0.24298017990326387 },
	{ 0.9637760657954398, 0.26671275747489837 },
	{ 0.9569403357322088, 0.29028467725446233 },
	{ 0.9495281805930367, 0.3136817403988915 },
	{ 0.9415440651830208, 0.33688985339222005 },
	{ 0.932992798834739, 0.3598950365349881 },
	{ 0.9238795325112867, 0.3826834323650898 },
	{ 0.9142097557035307, 0.40524131400498986 },
	{ 0.9039892931234433, 0.4275550934302821 },
	{ 0.8932243011955153, 0.44961132965460654 },
	{ 0.881921264348355, 0.47139673682599764 },
	{ 0.8700869911087115, 0.49289819222978404 },
	{ 0.8577286100002721, 0.5141027441932217 },
	{ 0.8448535652497071, 0.5349976198870972 },
	{ 0.8314696123025452, 0.5555702330196022 },
	{ 0.8175848131515837, 0.5758081914178453 },
	{ 0.8032075314806449, 0.5956993044924334 },
	{ 0.7883464276266063, 0.6152315905806268 },
	{ 0.773010453362737, 0.6343932841636455 },
	{ 0.7572088465064846, 0.6531728429537768 },
	{ 0.7409511253549592, 0.6715589548470183 },
	{ 0.724247082951467, 0.6895405447370668 },
	{ 0.7071067811865476, 0.7071067811865475 },
	{ 0.6895405447370669, 0.7242470829514669 },
	{ 0.6715589548470184, 0.7409511253549591 },
	{ 0.6531728429537769, 0.7572088465064846 },
	{ 0.6343932841636455, 0.7730104533627369 },
	{ 0.6152315905806268, 0.7883464276266062 },
	{ 0.5956993044924335, 0.8032075314806448 },
	{ 0.5758081914178453, 0.8175848131515837 },
	{ 0.5555702330196023, 0.8314696123025452 },
	{ 0.5349976198870973, 0.844853565249707 },
	{ 0.5141027441932217, 0.8577286100002721 },
	{ 0.4928981922297841, 0.8700869911087113 },
	{ 0.4713967368259978, 0.8819212643483549 },
	{ 0.4496113296546066, 0.8932243011955153 },
	{ 0.4275550934302822, 0.9039892931234433 },
	{ 0.40524131400498986, 0.9142097557035307 },
	{ 0.38268343236508984, 0.9238795325112867 },
	{ 0.3598950365349883, 0.9329927988347388 },
	{ 0.33688985339222005, 0.9415440651830208 },
	{ 0.3136817403988916, 0.9495281805930367 },
	{ 0.29028467725446233, 0.9569403357322089 },
	{ 0.2667127574748984, 0.9637760657954398 },
	{ 0.24298017990326398, 0.970031253194544 },
	{ 0.21910124015686977, 0.9757021300385286 },
	{ 0.19509032201612833, 0.9807852804032304 },
	{ 0.17096188876030136, 0.9852776423889412 },
	{ 0.14673047445536175, 0.989176509964781 },
	{ 0.12241067519921628, 0.99247953459871 },
	{ 0.09801714032956077, 0.9951847266721968 },
	{ 0.07356456359966745, 0.9972904566786902 },
	{ 0.049067674327418126, 0.9987954562051724 },
	{ 0.024541228522912264, 0.9996988186962042 },
	{ 6.123233995736766e-17, 1 },
	{ -0.024541228522912142, 0.9996988186962042 },
	{ -0.04906767432741801, 0.9987954562051724 },
	{ -0.07356456359966733, 0.9972904566786902 },
	{ -0.09801714032956065, 0.9951847266721969 },
	{ -0.12241067519921615, 0.99247953459871 },
	{ -0.14673047445536164, 0.989176509964781 },
	{ -0.17096188876030124, 0.9852776423889412 },
	{ -0.1950903220161282, 0.9807852804032304 },
	{ -0.21910124015686966, 0.9757021300385286 },
	{ -0.24298017990326387, 0.970031253194544 },
	{ -0.2667127574748983, 0.9637760657954398 },
	{ -0.29028467725446216, 0.9569403357322089 },
	{ -0.3136817403988914, 0.9495281805930367 },
	{ -0.33688985339221994, 0.9415440651830208 },
	{ -0.35989503653498817, 0.9329927988347388 },
	{ -0.3826834323650897, 0.9238795325112867 },
	{ -0.40524131400498975, 0.9142097557035307 },
	{ -0.42755509343028186, 0.9039892931234434 },
	{ -0.4496113296546067, 0.8932243011955152 },
	{ -0.4713967368259977, 0.881921264348355 },
	{ -0.492898192229784, 0.8700869911087115 },
	{ -0.5141027441932216, 0.8577286100002721 },
	{ -0.534997619887097, 0.8448535652497072 },
	{ -0.555570233019602, 0.8314696123025453 },
	{ -0.5758081914178453, 0.8175848131515837 },
	{ -0.5956993044924334, 0.8032075314806449 },
	{ -0.6152315905806267, 0.7883464276266063 },
	{ -0.6343932841636454, 0.7730104533627371 },
	{ -0.6531728429537765, 0.7572088465064847 },
	{ -0.6715589548470184, 0.740951125354959 },
	{ -0.6895405447370669, 0.7242470829514669 },
	{ -0.7071067811865475, 0.7071067811865476 },
	{ -0.7242470829514668, 0.689540544737067 },
	{ -0.7409511253549589, 0.6715589548470186 },
	{ -0.7572088465064847, 0.6531728429537766 },
	{ -0.773010453362737, 0.6343932841636455 },
	{ -0.7883464276266062, 0.6152315905806269 },
	{ -0.8032075314806448, 0.5956993044924335 },
	{ -0.8175848131515836, 0.5758081914178454 },
	{ -0.8314696123025453, 0.5555702330196022 },
	{ -0.8448535652497071, 0.5349976198870972 },
	{ -0.857728610000272, 0.5141027441932218 },
	{ -0.8700869911087113, 0.49289819222978415 },
	{ -0.8819212643483549, 0.47139673682599786 },
	{ -0.8932243011955152, 0.4496113296546069 },
	{ -0.9039892931234433, 0.42755509343028203 },
	{ -0.9142097557035307, 0.4052413140049899 },
	{ -0.9238795325112867, 0.3826834323650899 },
	{ -0.9329927988347388, 0.35989503653498833 },
	{ -0.9415440651830207, 0.33688985339222033 },
	{ -0.9495281805930367, 0.3136817403988914 },
	{ -0.9569403357322088, 0.2902846772544624 },
	{ -0.9637760657954398, 0.2667127574748985 },
	{ -0.970031253194544, 0.24298017990326407 },
	{ -0.9757021300385285, 0.21910124015687005 },
	{ -0.9807852804032304, 0.1950903220161286 },
	{ -0.9852776423889412, 0.17096188876030122 },
	{ -0.989176509964781, 0.1467304744553618 },
	{ -0.99247953459871, 0.12241067519921635 },
	{ -0.9951847266721968, 0.09801714032956083 },
	{ -0.9972904566786902, 0.07356456359966773 },
	{ -0.9987954562051724, 0.049067674327417966 },
	{ -0.9996988186962042, 0.024541228522912326 },
	{ -1, 1.2246467991473532e-16 },
	{ -0.9996988186962042, -0.02454122852291208 },
	{ -0.9987954562051724, -0.049067674327417724 },
	{ -0.9972904566786902, -0.0735645635996675 },
	{ -0.9951847266721969, -0.09801714032956059 },
	{ -0.99247953459871, -0.1224106751992161 },
	{ -0.989176509964781, -0.14673047445536158 },
	{ -0.9852776423889413, -0.17096188876030097 },
	{ -0.9807852804032304, -0.19509032201612836 },
	{ -0.9757021300385286, -0.2191012401568698 },
	{ -0.970031253194544, -0.24298017990326382 },
	{ -0.96377606579544, -0.26671275747489825 },
	{ -0.9569403357322089, -0.2902846772544621 },
	{ -0.9495281805930368, -0.3136817403988912 },
	{ -0.9415440651830208, -0.33688985339222005 },
	{ -0.932992798834739, -0.3598950365349881 },
	{ -0.9238795325112868, -0.38268343236508967 },
	{ -0.9142097557035307, -0.4052413140049897 },
	{ -0.9039892931234434, -0.4275550934302818 },
	{ -0.8932243011955153, -0.44961132965460665 },
	{ -0.881921264348355, -0.47139673682599764 },
	{ -0.8700869911087115, -0.4928981922297839 },
	{ -0.8577286100002721, -0.5141027441932216 },
	{ -0.8448535652497072, -0.5349976198870969 },
	{ -0.8314696123025455, -0.555570233019602 },
	{ -0.8175848131515837, -0.5758081914178453 },
	{ -0.8032075314806449, -0.5956993044924332 },
	{ -0.7883464276266063, -0.6152315905806267 },
	{ -0.7730104533627371, -0.6343932841636453 },
	{ -0.7572088465064848, -0.6531728429537765 },
	{ -0.7409511253549591, -0.6715589548470184 },
	{ -0.724247082951467, -0.6895405447370668 },
	{ -0.7071067811865477, -0.7071067811865475 },
	{ -0.689540544737067, -0.7242470829514668 },
	{ -0.6715589548470187, -0.7409511253549589 },
	{ -0.6531728429537771, -0.7572088465064842 },
	{ -0.6343932841636459, -0.7730104533627367 },
	{ -0.6152315905806273, -0.7883464276266059 },
	{ -0.5956993044924331, -0.803207531480645 },
	{ -0.5758081914178452, -0.8175848131515838 },
	{ -0.5555702330196022, -0.8314696123025452 },
	{ -0.5349976198870973, -0.8448535652497071 },
	{ -0.5141027441932218, -0.857728610000272 },
	{ -0.4928981922297842, -0.8700869911087113 },
	{ -0.4713967368259979, -0.8819212643483549 },
	{ -0.44961132965460693, -0.8932243011955152 },
	{ -0.4275550934302825, -0.9039892931234431 },
	{ -0.40524131400499036, -0.9142097557035305 },
	{ -0.38268343236509034, -0.9238795325112865 },
	{ -0.35989503653498794, -0.932992798834739 },
	{ -0.33688985339221994, -0.9415440651830208 },
	{ -0.31368174039889146, -0.9495281805930367 },
	{ -0.29028467725446244, -0.9569403357322088 },
	{ -0.26671275747489853, -0.9637760657954398 },
	{ -0.24298017990326412, -0.970031253194544 },
	{ -0.2191012401568701, -0.9757021300385285 },
	{ -0.19509032201612866, -0.9807852804032303 },
	{ -0.1709618887603017, -0.9852776423889411 },
	{ -0.1467304744553623, -0.9891765099647809 },
	{ -0.12241067519921596, -0.9924795345987101 },
	{ -0.09801714032956045, -0.9951847266721969 },
	{ -0.07356456359966736, -0.9972904566786902 },
	{ -0.04906767432741803, -0.9987954562051724 },
	{ -0.02454122852291239, -0.9996988186962042 },
	{ -1.8369701987210297e-16, -1 },
	{ 0.02454122852291202, -0.9996988186962042 },
	{ 0.04906767432741766, -0.9987954562051724 },
	{ 0.07356456359966698, -0.9972904566786902 },
	{ 0.09801714032956009, -0.9951847266721969 },
	{ 0.1224106751992156, -0.9924795345987101 },
	{ 0.14673047445536194, -0.9891765099647809 },
	{ 0.17096188876030133, -0.9852776423889412 },
	{ 0.1950903220161283, -0.9807852804032304 },
	{ 0.21910124015686974, -0.9757021300385286 },
	{ 0.24298017990326376, -0.970031253194544 },
	{ 0.2667127574748982, -0.96377606579544 },
	{ 0.29028467725446205, -0.9569403357322089 },
	{ 0.31368174039889113, -0.9495281805930368 },
	{ 0.3368898533922196, -0.9415440651830209 },
	{ 0.3598950365349876, -0.9329927988347391 },
	{ 0.38268343236509, -0.9238795325112866 },
	{ 0.40524131400499, -0.9142097557035306 },
	{ 0.42755509343028214, -0.9039892931234433 },
	{ 0.4496113296546066, -0.8932243011955153 },
	{ 0.4713967368259976, -0.881921264348355 },
	{ 0.49289819222978387, -0.8700869911087115 },
	{ 0.5141027441932216, -0.8577286100002722 },
	{ 0.5349976198870969, -0.8448535652497072 },
	{ 0.5555702330196018, -0.8314696123025455 },
	{ 0.5758081914178449, -0.8175848131515839 },
	{ 0.5956993044924328, -0.8032075314806453 },
	{ 0.615231590580627, -0.7883464276266061 },
	{ 0.6343932841636456, -0.7730104533627369 },
	{ 0.6531728429537768, -0.7572088465064846 },
	{ 0.6715589548470183, -0.7409511253549591 },
	{ 0.6895405447370668, -0.724247082951467 },
	{ 0.7071067811865474, -0.7071067811865477 },
	{ 0.7242470829514667, -0.6895405447370672 },
	{ 0.7409511253549589, -0.6715589548470187 },
	{ 0.7572088465064842, -0.6531728429537771 },
	{ 0.7730104533627365, -0.6343932841636459 },
	{ 0.7883464276266059, -0.6152315905806274 },
	{ 0.803207531480645, -0.5956993044924332 },
	{ 0.8175848131515837, -0.5758081914178452 },
	{ 0.8314696123025452, -0.5555702330196022 },
	{ 0.844853565249707, -0.5349976198870973 },
	{ 0.857728610000272, -0.5141027441932219 },
	{ 0.8700869911087113, -0.49289819222978426 },
	{ 0.8819212643483548, -0.4713967368259979 },
	{ 0.8932243011955151, -0.449611329654607 },
	{ 0.9039892931234431, -0.42755509343028253 },
	{ 0.9142097557035305, -0.4052413140049904 },
	{ 0.9238795325112865, -0.3826834323650904 },
	{ 0.932992798834739, -0.359895036534988 },
	{ 0.9415440651830208, -0.33688985339222 },
	{ 0.9495281805930367, -0.3136817403988915 },
	{ 0.9569403357322088, -0.2902846772544625 },
	{ 0.9637760657954398, -0.2667127574748986 },
	{ 0.970031253194544, -0.24298017990326418 },
	{ 0.9757021300385285, -0.21910124015687016 },
	{ 0.9807852804032303, -0.19509032201612872 },
	{ 0.9852776423889411, -0.17096188876030177 },
	{ 0.9891765099647809, -0.1467304744553624 },
	{ 0.99247953459871, -0.12241067519921603 },
	{ 0.9951847266721969, -0.0980171403295605 },
	{ 0.9972904566786902, -0.07356456359966741 },
	{ 0.9987954562051724, -0.04906767432741809 },
	{ 0.9996988186962042, -0.024541228522912448 },
};
