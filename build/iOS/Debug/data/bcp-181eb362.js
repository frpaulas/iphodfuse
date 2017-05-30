function getPsalm([psalm, vsFrom, vsTo]) {
    var ps = bcp[psalm];
    if (!!vsFrom) { vsFrom = 1; }
    if (!!vsTo) { vsTo = 999; }
    return { name: ps.name, title: ps.title, vss: ps.vss.slice(vsFrom - 1, vsTo) };
}

module.exports = {
  getPsalm: getPsalm
};

var bcp =
  { 1: 
    { name: "Psalm 1."
    , title: "Beatus vir qui non abiit"
    , vss: [ { first: "Happy are they who have not walked in the counsel of the wicked, * "
             , second: "nor lingered in the way of sinners, nor sat in the seats of the scornful!"
             , number: 1
             }
           , { first: "Their delight is in the law of the Lord, * "
             , second: "and they meditate on his law day and night."
             , number: 2
             }
           , { first: "They are like trees planted by streams of water, bearing fruit in due season, with leaves that do not wither; * "
             , second: "everything they do shall prosper."
             , number: 3
             }
           , { first: "It is not so with the wicked; * "
             , second: "they are like chaff which the wind blows away."
             , number: 4
             }
           , { first: "Therefore the wicked shall not stand upright when judgment comes, * "
             , second: "nor the sinner in the council of the righteous."
             , number: 5
             }
           , { first: "For the Lord knows the way of the righteous, * "
             , second: "but the way of the wicked is doomed."
             , number: 6
             }
          ]  
    }
  , 2: 
    { name: "Psalm 2."
    , title: "Quare fremuerunt gentes?,"
    , vss: [ { first: "Why are the nations in an uproar? * "
             , second: "Why do the peoples mutter empty threats?"
             , number: 1
             }
           , { first: "Why do the kings of the earth rise up in revolt, and the princes plot together, * "
             , second: "against the Lord and against his Anointed?"
             , number: 2
             }
           , { first: "“Let us break their yoke,” they say; * "
             , second: "“let us cast off their bonds from us.”"
             , number: 3
             }
           , { first: "He whose throne is in heaven is laughing; * "
             , second: "the Lord has them in derision."
             , number: 4
             }
           , { first: "Then he speaks to them in his wrath, * "
             , second: "and his rage fills them with terror."
             , number: 5
             }
           , { first: "“I myself have set my king * "
             , second: "upon my holy hill of Zion.”"
             , number: 6
             }
           , { first: "Let me announce the decree of the Lord: *  he said to me, “You are my Son;"
             , second: "this day have I begotten you."
             , number: 7
             }
           , { first: "Ask of me, and I will give you the nations for your inheritance * "
             , second: "and the ends of the earth for your possession."
             , number: 8
             }
           , { first: "You shall crush them with an iron rod * "
             , second: "and shatter them like a piece of pottery.”"
             , number: 9
             }
           , { first: " And now, you kings, be wise; * "
             , second: "be warned, you rulers of the earth."
             , number: 10
             }
           , { first: " Submit to the Lord with fear, * "
             , second: "and with trembling bow before him;"
             , number: 11
             }
           , { first: " Lest he be angry and you perish; * "
             , second: "for his wrath is quickly kindled."
             , number: 12
             }
           , { first: "Happy are they all * "
             , second: "who take refuge in him!"
             , number: 13
             }
          ]  
    }
  , 3:
    { name: "Psalm 3."
    , title: "Domine, quid multiplicati"
    , vss: [ { first: "Lord, how many adversaries I have! * "
             , second: "how many there are who rise up against me!"
             , number: 1
             }
           , { first: "How many there are who say of me, * "
             , second: "“There is no help for him in his God.”"
             , number: 2
             }
           , { first: "But you, O Lord, are a shield about me; * "
             , second: "you are my glory, the one who lifts up my head."
             , number: 3
             }
           , { first: "I call aloud upon the Lord, * "
             , second: "and he answers me from his holy hill;"
             , number: 4
             }
           , { first: "I lie down and go to sleep; * "
             , second: "I wake again, because the Lord sustains me."
             , number: 5
             }
           , { first: "I do not fear the multitudes of people * "
             , second: "who set themselves against me all around."
             , number: 6
             }
           , { first: "Rise up, O Lord; set me free, O my God; * "
             , second: "surely, you will strike all my enemies across the face, you will break the teeth of the wicked."
             , number: 7
             }
           , { first: "Deliverance belongs to the Lord. * "
             , second: "Your blessing be upon your people!"
             , number: 8
             }
           ]
    }
  , 4:
    { name: "Psalm 4."
    , title: "Cum invocarem"
    , vss: [ { first: "Answer me when I call, O God, defender of my cause; * "
             , second: "you set me free when I am hard-pressed; have mercy on me and hear my prayer."
             , number: 1
             }
           , { first: "“You mortals, how long will you dishonor my glory; * "
             , second: "how long will you worship dumb idols and run after false gods?”"
             , number: 2
             }
           , { first: "Know that the Lord does wonders for the faithful; * "
             , second: "when I call upon the Lord, he will hear me."
             , number: 3
             }
           , { first: "Tremble, then, and do not sin; * "
             , second: "speak to your heart in silence upon your bed."
             , number: 4
             }
           , { first: "Offer the appointed sacrifices * "
             , second: "and put your trust in the Lord."
             , number: 5
             }
           , { first: "Many are saying, “Oh, that we might see better times!” * "
             , second: "Lift up the light of your countenance upon us, O Lord."
             , number: 6
             }
           , { first: "You have put gladness in my heart, * "
             , second: "more than when grain and wine and oil increase."
             , number: 7
             }
           , { first: "I lie down in peace; at once I fall asleep; * "
             , second: "for only you, Lord, make me dwell in safety."
             , number: 8
             }
           ]
    }
  , 5:
    { name: "Psalm 5."
    , title: "Verba mea auribus"
    , vss: [ { first: "Give ear to my words, O Lord; * "
             , second: "consider my meditation."
             , number: 1
             }
           , { first: "Hearken to my cry for help, my King and my God, * "
             , second: "for I make my prayer to you."
             , number: 2
             }
           , { first: "In the morning, Lord, you hear my voice; * "
             , second: "early in the morning I make my appeal and watch for you."
             , number: 3
             }
           , { first: "For you are not a God who takes pleasure in wickedness, * "
             , second: "and evil cannot dwell with you."
             , number: 4
             }
           , { first: "Braggarts cannot stand in your sight; * "
             , second: "you hate all those who work wickedness."
             , number: 5
             }
           , { first: "You destroy those who speak lies; * "
             , second: "the bloodthirsty and deceitful, O Lord, you abhor."
             , number: 6
             }
           , { first: "But as for me, through the greatness of your mercy I will go into your house; * "
             , second: "I will bow down toward your holy temple in awe of you."
             , number: 7
             }
           , { first: "Lead me, O Lord, in your righteousness, because of those who lie in wait for me; * "
             , second: "make your way straight before me."
             , number: 8
             }
           , { first: "For there is no truth in their mouth; * "
             , second: "there is destruction in their heart;"
             , number: 9
             }
           , { first: "Their throat is an open grave; * "
             , second: "they flatter with their tongue."
             , number: 10
             }
           , { first: "Declare them guilty, O God; * "
             , second: "let them fall, because of their schemes."
             , number: 11
             }
           , { first: "Because of their many transgressions cast them out, * "
             , second: "for they have rebelled against you."
             , number: 12
             }
           , { first: "But all who take refuge in you will be glad; * "
             , second: "they will sing out their joy for ever."
             , number: 13
             }
           , { first: "You will shelter them, * "
             , second: "so that those who love your Name may exult in you."
             , number: 14
             }
           , { first: "For you, O Lord, will bless the righteous; * "
             , second: "you will defend them with your favor as with a shield."
             , number: 15
             }
           ]
    }
  , 6:
    { name: "Psalm 6."
    , title: "Domine, ne in furore"
    , vss: [ { first: "Lord, do not rebuke me in your anger; * "
             , second: "do not punish me in your wrath."
             , number: 1
             }
           , { first: "Have pity on me, Lord, for I am weak; * "
             , second: "heal me, Lord, for my bones are racked."
             , number: 2
             }
           , { first: "My spirit shakes with terror; * "
             , second: "how long, O Lord, how long?"
             , number: 3
             }
           , { first: "Turn, O Lord, and deliver me; * "
             , second: "save me for your mercy’s sake."
             , number: 4
             }
           , { first: "For in death no one remembers you; * "
             , second: "and who will give you thanks in the grave?"
             , number: 5
             }
           , { first: "I grow weary because of my groaning; * "
             , second: "every night I drench my bed and flood my couch with tears."
             , number: 6
             }
           , { first: "My eyes are wasted with grief * "
             , second: "and worn away because of all my enemies."
             , number: 7
             }
           , { first: "Depart from me, all evildoers, * "
             , second: "for the Lord has heard the sound of my weeping."
             , number: 8
             }
           , { first: "The Lord has heard my supplication; * "
             , second: "the Lord accepts my prayer."
             , number: 9
             }
           , { first: "All my enemies shall be confounded and quake with fear; * "
             , second: "they shall turn back and suddenly be put to shame."
             , number: 10
             }
           ]
    }
  , 7:
    { name: "Psalm 7."
    , title: "Domine, Deus meus"
    , vss: [ { first: "O Lord my God, I take refuge in you; * "
             , second: "save and deliver me from all who pursue me;"
             , number: 1
             }
           , { first: "Lest like a lion they tear me in pieces * "
             , second: "and snatch me away with none to deliver me."
             , number: 2
             }
           , { first: "O Lord my God, if I have done these things: * "
             , second: "if there is any wickedness in my hands,"
             , number: 3
             }
           , { first: "If I have repaid my friend with evil, * "
             , second: "or plundered him who without cause is my enemy;"
             , number: 4
             }
           , { first: "Then let my enemy pursue and overtake me, * "
             , second: "trample my life into the ground, and lay my honor in the dust."
             , number: 5
             }
           , { first: "Stand up, O Lord, in your wrath; * "
             , second: "rise up against the fury of my enemies."
             , number: 6
             }
           , { first: "Awake, O my God, decree justice; * "
             , second: "let the assembly of the peoples gather round you."
             , number: 7
             }
           , { first: "Be seated on your lofty throne, O Most High; * "
             , second: "O Lord, judge the nations."
             , number: 8
             }
           , { first: "Give judgment for me according to my righteousness, O Lord, * "
             , second: "and according to my innocence, O Most High."
             , number: 9
             }
           , { first: "Let the malice of the wicked come to an end, but establish the righteous; * "
             , second: "for you test the mind and heart, O righteous God."
             , number: 10
             }
           , { first: "God is my shield and defense; * "
             , second: "he is the savior of the true in heart."
             , number: 11
             }
           , { first: "God is a righteous judge; * "
             , second: "God sits in judgment every day."
             , number: 12
             }
           , { first: "If they will not repent, God will whet his sword; * "
             , second: "he will bend his bow and make it ready."
             , number: 13
             }
           , { first: "He has prepared his weapons of death; * "
             , second: "he makes his arrows shafts of fire."
             , number: 14
             }
           , { first: "Look at those who are in labor with wickedness, * "
             , second: "who conceive evil, and give birth to a lie."
             , number: 15
             }
           , { first: "They dig a pit and make it deep * "
             , second: "and fall into the hole that they have made."
             , number: 16
             }
           , { first: "Their malice turns back upon their own head; * "
             , second: "their violence falls on their own scalp."
             , number: 17
             }
           , { first: "I will bear witness that the Lord is righteous; * "
             , second: "I will praise the Name of the Lord Most High."
             , number: 18
             }
           ]
    }
  , 8:
    { name: "Psalm 8."
    , title: "Domine, Dominus noster"
    , vss: [ { first: "O Lord our Governor, * "
             , second: "how exalted is your Name in all the world!"
             , number: 1
             }
           , { first: "Out of the mouths of infants and children * "
             , second: "your majesty is praised above the heavens."
             , number: 2
             }
           , { first: "You have set up a stronghold against your adversaries, * "
             , second: "to quell the enemy and the avenger."
             , number: 3
             }
           , { first: "When I consider your heavens, the work of your fingers, * "
             , second: "the moon and the stars you have set in their courses,"
             , number: 4
             }
           , { first: "What is man that you should be mindful of him? * "
             , second: "the son of man that you should seek him out?"
             , number: 5
             }
           , { first: "You have made him but little lower than the angels; * "
             , second: "you adorn him with glory and honor;"
             , number: 6
             }
           , { first: "You give him mastery over the works of your hands; * "
             , second: "you put all things under his feet:"
             , number: 7
             }
           , { first: "All sheep and oxen, * "
             , second: "even the wild beasts of the field,"
             , number: 8
             }
           , { first: "The birds of the air, the fish of the sea, * "
             , second: "and whatsoever walks in the paths of the sea."
             , number: 9
             }
           , { first: "O Lord our Governor, * "
             , second: "how exalted is your Name in all the world!"
             , number: 10
             }
           ]
    }
  , 9: 
    { name: "Psalm 9."
    , title: "Confitebor tibi"
    , vss: [ { first: "I will give thanks to you, O Lord, with my whole heart; * "
             , second: "I will tell of all your marvelous works."
             , number: 1
             }
           , { first: "I will be glad and rejoice in you; * "
             , second: "I will sing to your Name, O Most High."
             , number: 2
             }
           , { first: "When my enemies are driven back, * "
             , second: "they will stumble and perish at your presence."
             , number: 3
             }
           , { first: "For you have maintained my right and my cause; * "
             , second: "you sit upon your throne judging right."
             , number: 4
             }
           , { first: "You have rebuked the ungodly and destroyed the wicked; * "
             , second: "you have blotted out their name for ever and ever."
             , number: 5
             }
           , { first: "As for the enemy, they are finished, in perpetual ruin, * "
             , second: "their cities ploughed under, the memory of them perished;"
             , number: 6
             }
           , { first: "But the Lord is enthroned for ever; * "
             , second: "he has set up his throne for judgment."
             , number: 7
             }
           , { first: "It is he who rules the world with righteousness; * "
             , second: "he judges the peoples with equity."
             , number: 8
             }
           , { first: "The Lord will be a refuge for the oppressed, * "
             , second: "a refuge in time of trouble."
             , number: 9
             }
           , { first: "Those who know your Name will put their trust in you, * "
             , second: "for you never forsake those who seek you, O Lord."
             , number: 10
             }
           , { first: "Sing praise to the Lord who dwells in Zion; * "
             , second: "proclaim to the peoples the things he has done."
             , number: 11
             }
           , { first: "The Avenger of blood will remember them; * "
             , second: "he will not forget the cry of the afflicted."
             , number: 12
             }
           , { first: "Have pity on me, O Lord; * "
             , second: "see the misery I suffer from those who hate me, O you who lift me up from the gate of death;"
             , number: 13
             }
           , { first: "So that I may tell of all your praises and rejoice in your salvation * "
             , second: "in the gates of the city of Zion."
             , number: 14
             }
           , { first: "The ungodly have fallen into the pit they dug, * "
             , second: "and in the snare they set is their own foot caught."
             , number: 15
             }
           , { first: "The Lord is known by his acts of justice; * "
             , second: "the wicked are trapped in the works of their own hands."
             , number: 16
             }
           , { first: "The wicked shall be given over to the grave, * "
             , second: "and also all the peoples that forget God."
             , number: 17
             }
           , { first: "For the needy shall not always be forgotten, * "
             , second: "and the hope of the poor shall not perish for ever."
             , number: 18
             }
           , { first: "Rise up, O Lord, let not the ungodly have the upper hand; * "
             , second: "let them be judged before you."
             , number: 19
             }
           , { first: "Put fear upon them, O Lord; * "
             , second: "let the ungodly know they are but mortal."
             , number: 20
             }
           ]
    }
  , 10:
    { name: "Psalm 10."
    , title: "Ut quid, Domine?"
    , vss: [ { first: "Why do you stand so far off, O Lord, * "
             , second: "and hide yourself in time of trouble?"
             , number: 1
             }
           , { first: "The wicked arrogantly persecute the poor, * "
             , second: "but they are trapped in the schemes they have devised."
             , number: 2
             }
           , { first: "The wicked boast of their heart’s desire; * "
             , second: "the covetous curse and revile the Lord."
             , number: 3
             }
           , { first: "The wicked are so proud that they care not for God; * "
             , second: "their only thought is, “God does not matter.”"
             , number: 4
             }
           , { first: "Their ways are devious at all times; your judgments are far above out of their sight; * "
             , second: "they defy all their enemies."
             , number: 5
             }
           , { first: "They say in their heart, “I shall not be shaken; * "
             , second: "no harm shall happen to me ever.”"
             , number: 6
             }
           , { first: "Their mouth is full of cursing, deceit, and oppression; * "
             , second: "under their tongue are mischief and wrong."
             , number: 7
             }
           , { first: "They lurk in ambush in public squares and in secret places they murder the innocent; * "
             , second: "they spy out the helpless."
             , number: 8
             }
           , { first: "They lie in wait, like a lion in a covert; they lie in wait to seize upon the lowly; * "
             , second: "they seize the lowly and drag them away in their net. "
             , number: 9
             }
           , { first: "The innocent are broken and humbled before them; * "
             , second: "the helpless fall before their power."
             , number: 10
             }
           , { first: "They say in their heart, “God has forgotten; * "
             , second: "he hides his face; he will never notice.”"
             , number: 11
             }
           , { first: "Rise up, O Lord; lift up your hand, O God; * "
             , second: "do not forget the afflicted."
             , number: 12
             }
           , { first: "Why should the wicked revile God? * "
             , second: "why should they say in their heart, “You do not care”?"
             , number: 13
             }
           , { first: "Surely, you behold trouble and misery; * "
             , second: "you see it and take it into your own hand."
             , number: 14
             }
           , { first: "The helpless commit themselves to you, * "
             , second: "for you are the helper of orphans."
             , number: 15
             }
           , { first: "Break the power of the wicked and evil; * "
             , second: "search out their wickedness until you find none."
             , number: 16
             }
           , { first: "The Lord is King for ever and ever; * "
             , second: "the ungodly shall perish from his land."
             , number: 17
             }
           , { first: "The Lord will hear the desire of the humble; * "
             , second: "you will strengthen their heart and your ears shall hear;"
             , number: 18
             }
           , { first: "To give justice to the orphan and oppressed, * "
             , second: "so that mere mortals may strike terror no more."
             , number: 19
             }
           ]
    }
  , 11:
    { name: "Psalm 11."
    , title: "In Domino confido"
    , vss: [ { first: "In the Lord have I taken refuge; * "
             , second: "how then can you say to me, “Fly away like a bird to the hilltop;"
             , number: 1
             }
           , { first: "For see how the wicked bend the bow and fit their arrows to the string, * "
             , second: "to shoot from ambush at the true of heart."
             , number: 2
             }
           , { first: "When the foundations are being destroyed, * "
             , second: "what can the righteous do?”"
             , number: 3
             }
           , { first: "The Lord is in his holy temple; * "
             , second: "the Lord’s throne is in heaven."
             , number: 4
             }
           , { first: "His eyes behold the inhabited world; * "
             , second: "his piercing eye weighs our worth."
             , number: 5
             }
           , { first: "The Lord weighs the righteous as well as the wicked, * "
             , second: "but those who delight in violence he abhors."
             , number: 6
             }
           , { first: "Upon the wicked he shall rain coals of fire and burning sulphur; * "
             , second: "a scorching wind shall be their lot."
             , number: 7
             }
           , { first: "For the Lord is righteous; he delights in righteous deeds; * "
             , second: "and the just shall see his face."
             , number: 8
             }
           ]
    }
  , 12:
    { name: "Psalm 12."
    , title: "Salvum me fac"
    , vss: [ { first: "Help me, Lord, for there is no godly one left; * "
             , second: "the faithful have vanished from among us."
             , number: 1
             }
           , { first: "Everyone speaks falsely with his neighbor; * "
             , second: "with a smooth tongue they speak from a double heart."
             , number: 2
             }
           , { first: "Oh, that the Lord would cut off all smooth tongues, * "
             , second: "and close the lips that utter proud boasts!"
             , number: 3
             }
           , { first: "Those who say, “With our tongue will we prevail; * "
             , second: "our lips are our own; who is lord over us?”"
             , number: 4
             }
           , { first: "“Because the needy are oppressed, and the poor cry out in misery, * "
             , second: "I will rise up,” says the Lord, “and give them the help they long for.”"
             , number: 5
             }
           , { first: "The words of the Lord are pure words, * "
             , second: "like silver refined from ore and purified seven times in the fire."
             , number: 6
             }
           , { first: "O Lord, watch over us * "
             , second: "and save us from this generation for ever."
             , number: 7
             }
           , { first: "The wicked prowl on every side, * "
             , second: "and that which is worthless is highly prized by everyone."
             , number: 8
             }
           ]
    }
  , 13:
    { name: "Psalm 13."
    , title: "Usquequo, Domine?"
    , vss: [ { first: "How long, O Lord? will you forget me for ever? * "
             , second: "how long will you hide your face from me?"
             , number: 1
             }
           , { first: "How long shall I have perplexity in my mind, and grief in my heart, day after day? * "
             , second: "how long shall my enemy triumph over me?"
             , number: 2
             }
           , { first: "Look upon me and answer me, O Lord my God; * "
             , second: "give light to my eyes, lest I sleep in death;"
             , number: 3
             }
           , { first: "Lest my enemy say, “I have prevailed over him,” * "
             , second: "and my foes rejoice that I have fallen."
             , number: 4
             }
           , { first: "But I put my trust in your mercy; * "
             , second: "my heart is joyful because of your saving help."
             , number: 5
             }
           , { first: "I will sing to the Lord, for he has dealt with me richly; * "
             , second: "I will praise the Name of the Lord Most High."
             , number: 6
             }
           ]
    }
  , 14:
    { name: "Psalm 14."
    , title: "Dixit insipiens"
    , vss: [ { first: "The fool has said in his heart, “There is no God.” * "
             , second: "All are corrupt and commit abominable acts; there is none who does any good."
             , number: 1
             }
           , { first: "The Lord looks down from heaven upon us all, * "
             , second: "to see if there is any who is wise, if there is one who seeks after God."
             , number: 2
             }
           , { first: "Every one has proved faithless; all alike have turned bad; * "
             , second: "there is none who does good; no, not one."
             , number: 3
             }
           , { first: "Have they no knowledge, all those evildoers * "
             , second: "who eat up my people like bread and do not call upon the Lord?"
             , number: 4
             }
           , { first: "See how they tremble with fear, * "
             , second: "because God is in the company of the righteous."
             , number: 5
             }
           , { first: "Their aim is to confound the plans of the afflicted, * "
             , second: "but the Lord is their refuge."
             , number: 6
             }
           , { first: "Oh, that Israel’s deliverance would come out of Zion! * "
             , second: "when the Lord restores the fortunes of his people, Jacob will rejoice and Israel be glad."
             , number: 7
             }
           ]
    }
  , 15:
    { name: "Psalm 15."
    , title: "Domine, quis habitabit?"
    , vss: [ { first: "Lord, who may dwell in your tabernacle? * "
             , second: "who may abide upon your holy hill?"
             , number: 1
             }
           , { first: "Whoever leads a blameless life and does what is right, * "
             , second: "who speaks the truth from his heart."
             , number: 2
             }
           , { first: "There is no guile upon his tongue; he does no evil to his friend; * "
             , second: "he does not heap contempt upon his neighbor."
             , number: 3
             }
           , { first: "In his sight the wicked is rejected, * "
             , second: "but he honors those who fear the Lord."
             , number: 4
             }
           , { first: "He has sworn to do no wrong * "
             , second: "and does not take back his word."
             , number: 5
             }
           , { first: "He does not give his money in hope of gain, * "
             , second: "nor does he take a bribe against the innocent."
             , number: 6
             }
           , { first: "Whoever does these things * "
             , second: "shall never be overthrown."
             , number: 7
             }
           ]
    }
  , 16:
    { name: "Psalm 16."
    , title: "Conserva me, Domine"
    , vss: [ { first: "Protect me, O God, for I take refuge in you; * "
             , second: "I have said to the Lord, “You are my Lord, my good above all other.”"
             , number: 1
             }
           , { first: "All my delight is upon the godly that are in the land, * "
             , second: "upon those who are noble among the people."
             , number: 2
             }
           , { first: "But those who run after other gods * "
             , second: "shall have their troubles multiplied."
             , number: 3
             }
           , { first: "Their libations of blood I will not offer, * "
             , second: "nor take the names of their gods upon my lips."
             , number: 4
             }
           , { first: "O Lord, you are my portion and my cup; * "
             , second: "it is you who uphold my lot."
             , number: 5
             }
           , { first: "My boundaries enclose a pleasant land; * "
             , second: "indeed, I have a goodly heritage."
             , number: 6
             }
           , { first: "I will bless the Lord who gives me counsel; * "
             , second: "my heart teaches me, night after night."
             , number: 7
             }
           , { first: "I have set the Lord always before me; * "
             , second: "because he is at my right hand I shall not fall."
             , number: 8
             }
           , { first: "My heart, therefore, is glad, and my spirit rejoices; * "
             , second: "my body also shall rest in hope."
             , number: 9
             }
           , { first: "For you will not abandon me to the grave, * "
             , second: "nor let your holy one see the Pit."
             , number: 10
             }
           , { first: "You will show me the path of life; * "
             , second: "in your presence there is fullness of joy, and in your right hand are pleasures for evermore."
             , number: 11
             }
           ]
    }
  , 17:
    { name: "Psalm 17."
    , title: "Exaudi, Domine"
    , vss: [ { first: "Hear my plea of innocence, O Lord; give heed to my cry; * "
             , second: "listen to my prayer, which does not come from lying lips."
             , number: 1
             }
           , { first: "Let my vindication come forth from your presence; * "
             , second: "let your eyes be fixed on justice."
             , number: 2
             }
           , { first: "Weigh my heart, summon me by night, * "
             , second: "melt me down; you will find no impurity in me."
             , number: 3
             }
           , { first: "I give no offense with my mouth as others do; * "
             , second: "I have heeded the words of your lips."
             , number: 4
             }
           , { first: "My footsteps hold fast to the ways of your law; * "
             , second: "in your paths my feet shall not stumble."
             , number: 5
             }
           , { first: "I call upon you, O God, for you will answer me; * "
             , second: "incline your ear to me and hear my words."
             , number: 6
             }
           , { first: "Show me your marvelous loving-kindness, * "
             , second: "O Savior of those who take refuge at your right hand from those who rise up against them."
             , number: 7
             }
           , { first: "Keep me as the apple of your eye; * "
             , second: "hide me under the shadow of your wings,"
             , number: 8
             }
           , { first: "From the wicked who assault me, * "
             , second: "from my deadly enemies who surround me."
             , number: 9
             }
           , { first: "They have closed their heart to pity, * "
             , second: "and their mouth speaks proud things."
             , number: 10
             }
           , { first: "They press me hard, now they surround me, * "
             , second: "watching how they may cast me to the ground,"
             , number: 11
             }
           , { first: "Like a lion, greedy for its prey, * "
             , second: "and like a young lion lurking in secret places."
             , number: 12
             }
           , { first: "Arise, O Lord; confront them and bring them down; * "
             , second: "deliver me from the wicked by your sword."
             , number: 13
             }
           , { first: "Deliver me, O Lord, by your hand * "
             , second: "from those whose portion in life is this world;"
             , number: 14
             }
           , { first: "Whose bellies you fill with your treasure, * "
             , second: "who are well supplied with children and leave their wealth to their little ones."
             , number: 15
             }
           , { first: "But at my vindication I shall see your face; * "
             , second: "when I awake, I shall be satisfied, beholding your likeness."
             , number: 16
             }
           ]
    }
  , 18:
    { name: "Psalm 18."
    , title: ""
    , vss: [ { title: "Part I Diligam te, Domine."
             , first: "I love you, O Lord my strength, * "
             , second: "O Lord my stronghold, my crag, and my haven."
             , number: 1
             }
           , { first: "My God, my rock in whom I put my trust, * "
             , second: "my shield, the horn of my salvation, and my refuge; you are worthy of praise."
             , number: 2
             }
           , { first: "I will call upon the Lord, * "
             , second: "and so shall I be saved from my enemies."
             , number: 3
             }
           , { first: "The breakers of death rolled over me, * "
             , second: "and the torrents of oblivion made me afraid."
             , number: 4
             }
           , { first: "The cords of hell entangled me, * "
             , second: "and the snares of death were set for me."
             , number: 5
             }
           , { first: "I called upon the Lord in my distress * "
             , second: "and cried out to my God for help."
             , number: 6
             }
           , { first: "He heard my voice from his heavenly dwelling; * "
             , second: "my cry of anguish came to his ears."
             , number: 7
             }
           , { first: "The earth reeled and rocked; * "
             , second: "the roots of the mountains shook; they reeled because of his anger."
             , number: 8
             }
           , { first: "Smoke rose from his nostrils and a consuming fire out of his mouth; * "
             , second: "hot burning coals blazed forth from him."
             , number: 9
             }
           , { first: "He parted the heavens and came down * "
             , second: "with a storm cloud under his feet."
             , number: 10
             }
           , { first: "He mounted on cherubim and flew; * "
             , second: "he swooped on the wings of the wind."
             , number: 11
             }
           , { first: "He wrapped darkness about him; * "
             , second: "he made dark waters and thick clouds his pavilion."
             , number: 12
             }
           , { first: "From the brightness of his presence, through the clouds, * "
             , second: "burst hailstones and coals of fire."
             , number: 13
             }
           , { first: "The Lord thundered out of heaven; * "
             , second: "the Most High uttered his voice."
             , number: 14
             }
           , { first: "He loosed his arrows and scattered them; * "
             , second: "he hurled thunderbolts and routed them."
             , number: 15
             }
           , { first: "The beds of the seas were uncovered, and the foundations of the world laid bare, * "
             , second: "at your battle cry, O Lord, at the blast of the breath of your nostrils."
             , number: 16
             }
           , { first: "He reached down from on high and grasped me; * "
             , second: "he drew me out of great waters."
             , number: 17
             }
           , { first: "He delivered me from my strong enemies and from those who hated me; * "
             , second: "for they were too mighty for me."
             , number: 18
             }
           , { first: "They confronted me in the day of my disaster; * "
             , second: "but the Lord was my support."
             , number: 19
             }
           , { first: "He brought me out into an open place; * "
             , second: "he rescued me because he delighted in me."
             , number: 20
             }
           , { title: "Part II Et retribuet mihi"
             , first: "The Lord rewarded me because of my righteous dealing; * "
             , second: "because my hands were clean he rewarded me;"
             , number: 21
             }
           , { first: "For I have kept the ways of the Lord * "
             , second: "and have not offended against my God;"
             , number: 22
             }
           , { first: "For all his judgments are before my eyes, * "
             , second: "and his decrees I have not put away from me;"
             , number: 23
             }
           , { first: "For I have been blameless with him * "
             , second: "and have kept myself from iniquity;"
             , number: 24
             }
           , { first: "Therefore the Lord rewarded me according to my righteous dealing, * "
             , second: "because of the cleanness of my hands in his sight."
             , number: 25
             }
           , { first: "With the faithful you show yourself faithful, O God; * "
             , second: "with the forthright you show yourself forthright."
             , number: 26
             }
           , { first: "With the pure you show yourself pure, * "
             , second: "but with the crooked you are wily."
             , number: 27
             }
           , { first: "You will save a lowly people, * "
             , second: "but you will humble the haughty eyes."
             , number: 28
             }
           , { first: "You, O Lord, are my lamp; * "
             , second: "my God, you make my darkness bright."
             , number: 29
             }
           , { first: "With you I will break down an enclosure; * "
             , second: "with the help of my God I will scale any wall."
             , number: 30
             }
           , { first: "As for God, his ways are perfect; the words of the Lord are tried in the fire; * "
             , second: "he is a shield to all who trust in him."
             , number: 31
             }
           , { first: "For who is God, but the Lord? * "
             , second: "who is the Rock, except our God?"
             , number: 32
             }
           , { first: "It is God who girds me about with strength * "
             , second: "and makes my way secure."
             , number: 33
             }
           , { first: "He makes me sure-footed like a deer * "
             , second: "and lets me stand firm on the heights."
             , number: 34
             }
           , { first: "He trains my hands for battle * "
             , second: "and my arms for bending even a bow of bronze."
             , number: 35
             }
           , { first: "You have given me your shield of victory; * "
             , second: "your right hand also sustains me; your loving care makes me great."
             , number: 36
             }
           , { first: "You lengthen my stride beneath me, * "
             , second: "and my ankles do not give way."
             , number: 37
             }
           , { first: "I pursue my enemies and overtake them; * "
             , second: "I will not turn back till I have destroyed them."
             , number: 38
             }
           , { first: "I strike them down, and they cannot rise; * "
             , second: "they fall defeated at my feet."
             , number: 39
             }
           , { first: "You have girded me with strength for the battle; * "
             , second: "you have cast down my adversaries beneath me; you have put my enemies to flight."
             , number: 40
             }
           , { first: "I destroy those who hate me; they cry out, but there is none to help them; * "
             , second: "they cry to the Lord, but he does not answer."
             , number: 41
             }
           , { first: "I beat them small like dust before the wind; * "
             , second: "I trample them like mud in the streets."
             , number: 42
             }
           , { first: "You deliver me from the strife of the peoples; * "
             , second: "you put me at the head of the nations."
             , number: 43
             }
           , { first: "A people I have not known shall serve me; no sooner shall they hear than they shall obey me; * "
             , second: "strangers will cringe before me."
             , number: 44
             }
           , { first: "The foreign peoples will lose heart; * "
             , second: "they shall come trembling out of their strongholds."
             , number: 45
             }
           , { first: "The Lord lives! Blessed is my Rock! * "
             , second: "Exalted is the God of my salvation!"
             , number: 46
             }
           , { first: "He is the God who gave me victory * "
             , second: "and cast down the peoples beneath me."
             , number: 47
             }
           , { first: "You rescued me from the fury of my enemies; you exalted me above those who rose against me; * "
             , second: "you saved me from my deadly foe."
             , number: 48
             }
           , { first: "Therefore will I extol you among the nations, O Lord, * "
             , second: "and sing praises to your Name."
             , number: 49
             }
           , { first: "He multiplies the victories of his king; * "
             , second: "he shows loving-kindness to his anointed, to David and his descendants for ever."
             , number: 50
             }
           ]
    }
  , 19:
    { name: "Psalm 19."
    , title: "Cæli enarrant"
    , vss: [ { first: "The heavens declare the glory of God, * "
             , second: "and the firmament shows his handiwork."
             , number: 1
             }
           , { first: "One day tells its tale to another, * "
             , second: "and one night imparts knowledge to another."
             , number: 2
             }
           , { first: "Although they have no words or language, * "
             , second: "and their voices are not heard,"
             , number: 3
             }
           , { first: "Their sound has gone out into all lands, * "
             , second: "and their message to the ends of the world."
             , number: 4
             }
           , { first: "In the deep has he set a pavilion for the sun; * "
             , second: "it comes forth like a bridegroom out of his chamber; it rejoices like a champion to run its course."
             , number: 5
             }
           , { first: "It goes forth from the uttermost edge of the heavens and runs about to the end of it again; * "
             , second: "nothing is hidden from its burning heat."
             , number: 6
             }
           , { first: "The law of the Lord is perfect and revives the soul; * "
             , second: "the testimony of the Lord is sure and gives wisdom to the innocent."
             , number: 7
             }
           , { first: "The statutes of the Lord are just and rejoice the heart; * "
             , second: "the commandment of the Lord is clear and gives light to the eyes."
             , number: 8
             }
           , { first: "The fear of the Lord is clean and endures for ever; * "
             , second: "the judgments of the Lord are true and righteous altogether."
             , number: 9
             }
           , { first: "More to be desired are they than gold, more than much fine gold, * "
             , second: "sweeter far than honey, than honey in the comb."
             , number: 10
             }
           , { first: "By them also is your servant enlightened, * "
             , second: "and in keeping them there is great reward."
             , number: 11
             }
           , { first: "Who can tell how often he offends? * "
             , second: "cleanse me from my secret faults."
             , number: 12
             }
           , { first: "Above all, keep your servant from presumptuous sins; let them not get dominion over me; * "
             , second: "then shall I be whole and sound, and innocent of a great offense."
             , number: 13
             }
           , { first: "Let the words of my mouth and the meditation of my heart be acceptable in your sight, * "
             , second: "O Lord, my strength and my redeemer."
             , number: 14
             }
           ]
    }
  , 20:
    { name: "Psalm 20."
    , title: "Exaudiat te Dominus"
    , vss: [ { first: "May the Lord answer you in the day of trouble, * "
             , second: "the Name of the God of Jacob defend you;"
             , number: 1
             }
           , { first: "Send you help from his holy place * "
             , second: "and strengthen you out of Zion;"
             , number: 2
             }
           , { first: "Remember all your offerings * "
             , second: "and accept your burnt sacrifice;"
             , number: 3
             }
           , { first: "Grant you your heart’s desire * "
             , second: "and prosper all your plans."
             , number: 4
             }
           , { first: "We will shout for joy at your victory and triumph in the Name of our God; * "
             , second: "may the Lord grant all your requests."
             , number: 5
             }
           , { first: "Now I know that the Lord gives victory to his anointed; * "
             , second: "he will answer him out of his holy heaven, with the victorious strength of his right hand."
             , number: 6
             }
           , { first: "Some put their trust in chariots and some in horses, * "
             , second: "but we will call upon the Name of the Lord our God."
             , number: 7
             }
           , { first: "They collapse and fall down, * "
             , second: "but we will arise and stand upright."
             , number: 8
             }
           , { first: "O Lord, give victory to the king * "
             , second: "and answer us when we call."
             , number: 9
             }
           ]
    }
  , 21:
    { name: "Psalm 21."
    , title: "Domine, in virtute tua"
    , vss: [ { first: "The king rejoices in your strength, O Lord; * "
             , second: "how greatly he exults in your victory!"
             , number: 1
             }
           , { first: "You have given him his heart’s desire; * "
             , second: "you have not denied him the request of his lips."
             , number: 2
             }
           , { first: "For you meet him with blessings of prosperity, * "
             , second: "and set a crown of fine gold upon his head."
             , number: 3
             }
           , { first: "He asked you for life, and you gave it to him: * "
             , second: "length of days, for ever and ever."
             , number: 4
             }
           , { first: "His honor is great, because of your victory; * "
             , second: "splendor and majesty have you bestowed upon him."
             , number: 5
             }
           , { first: "For you will give him everlasting felicity * "
             , second: "and will make him glad with the joy of your presence."
             , number: 6
             }
           , { first: "For the king puts his trust in the Lord; * "
             , second: "because of the loving-kindness of the Most High, he will not fall."
             , number: 7
             }
           , { first: "Your hand will lay hold upon all your enemies; * "
             , second: "your right hand will seize all those who hate you."
             , number: 8
             }
           , { first: "You will make them like a fiery furnace * "
             , second: "at the time of your appearing, O Lord;"
             , number: 9
             }
           , { first: "You will swallow them up in your wrath, * "
             , second: "and fire shall consume them."
             , number: 10
             }
           , { first: "You will destroy their offspring from the land * "
             , second: "and their descendants from among the peoples of the earth."
             , number: 11
             }
           , { first: "Though they intend evil against you and devise wicked schemes, * "
             , second: "yet they shall not prevail."
             , number: 12
             }
           , { first: "For you will put them to flight * "
             , second: "and aim your arrows at them."
             , number: 13
             }
           , { first: "Be exalted, O Lord, in your might; * "
             , second: "we will sing and praise your power."
             , number: 14
             }
           ]
    }
  , 22:
    { name: "Psalm 22."
    , title: "Deus, Deus meus"
    , vss: [ { first: "My God, my God, why have you forsaken me? * "
             , second: "and are so far from my cry and from the words of my distress?"
             , number: 1
             }
           , { first: "O my God, I cry in the daytime, but you do not answer; * "
             , second: "by night as well, but I find no rest."
             , number: 2
             }
           , { first: "Yet you are the Holy One, * "
             , second: "enthroned upon the praises of Israel."
             , number: 3
             }
           , { first: "Our forefathers put their trust in you; * "
             , second: "they trusted, and you delivered them."
             , number: 4
             }
           , { first: "They cried out to you and were delivered; * "
             , second: "they trusted in you and were not put to shame."
             , number: 5
             }
           , { first: "But as for me, I am a worm and no man, * "
             , second: "scorned by all and despised by the people."
             , number: 6
             }
           , { first: "All who see me laugh me to scorn; * "
             , second: "they curl their lips and wag their heads, saying,"
             , number: 7
             }
           , { first: "“He trusted in the Lord; let him deliver him; * "
             , second: "let him rescue him, if he delights in him.”"
             , number: 8
             }
           , { first: "Yet you are he who took me out of the womb, * "
             , second: "and kept me safe upon my mother’s breast."
             , number: 9
             }
           , { first: "I have been entrusted to you ever since I was born; * "
             , second: "you were my God when I was still in my mother’s womb."
             , number: 10
             }
           , { first: "Be not far from me, for trouble is near, * "
             , second: "and there is none to help."
             , number: 11
             }
           , { first: "Many young bulls encircle me; * "
             , second: "strong bulls of Bashan surround me."
             , number: 12
             }
           , { first: "They open wide their jaws at me, * "
             , second: "like a ravening and a roaring lion."
             , number: 13
             }
           , { first: "I am poured out like water; all my bones are out of joint; * "
             , second: "my heart within my breast is melting wax."
             , number: 14
             }
           , { first: "My mouth is dried out like a pot-sherd; my tongue sticks to the roof of my mouth; * "
             , second: "and you have laid me in the dust of the grave."
             , number: 15
             }
           , { first: "Packs of dogs close me in, and gangs of evildoers circle around me; * "
             , second: "they pierce my hands and my feet; I can count all my bones."
             , number: 16
             }
           , { first: "They stare and gloat over me; * "
             , second: "they divide my garments among them; they cast lots for my clothing."
             , number: 17
             }
           , { first: "Be not far away, O Lord; * "
             , second: "you are my strength; hasten to help me."
             , number: 18
             }
           , { first: "Save me from the sword, * "
             , second: "my life from the power of the dog."
             , number: 19
             }
           , { first: "Save me from the lion’s mouth, * "
             , second: "my wretched body from the horns of wild bulls."
             , number: 20
             }
           , { first: "I will declare your Name to my brethren; * "
             , second: "in the midst of the congregation I will praise you."
             , number: 21
             }
           , { first: "Praise the Lord, you that fear him; * "
             , second: "stand in awe of him, O offspring of Israel; all you of Jacob’s line, give glory."
             , number: 22
             }
           , { first: "For he does not despise nor abhor the poor in their poverty; neither does he hide his face from them; * "
             , second: "but when they cry to him he hears them."
             , number: 23
             }
           , { first: "My praise is of him in the great assembly; * "
             , second: "I will perform my vows in the presence of those who worship him."
             , number: 24
             }
           , { first: "The poor shall eat and be satisfied, and those who seek the Lord shall praise him: * "
             , second: "“May your heart live for ever!”"
             , number: 25
             }
           , { first: "All the ends of the earth shall remember and turn to the Lord, * "
             , second: "and all the families of the nations shall bow before him."
             , number: 26
             }
           , { first: "For kingship belongs to the Lord; * "
             , second: "he rules over the nations."
             , number: 27
             }
           , { first: "To him alone all who sleep in the earth bow down in worship; * "
             , second: "all who go down to the dust fall before him."
             , number: 28
             }
           , { first: "My soul shall live for him; my descendants shall serve him; * "
             , second: "they shall be known as the Lord’s for ever."
             , number: 29
             }
           , { first: "They shall come and make known to a people yet unborn * "
             , second: "the saving deeds that he has done."
             , number: 30
             }
           ]
    }
  , 23:
    { name: "Psalm 23."
    , title: "Dominus regit me"
    , vss: [ { first: "The Lord is my shepherd; * "
             , second: "I shall not be in want."
             , number: 1
             }
           , { first: "He makes me lie down in green pastures * "
             , second: "and leads me beside still waters."
             , number: 2
             }
           , { first: "He revives my soul * "
             , second: "and guides me along right pathways for his Name’s sake."
             , number: 3
             }
           , { first: "Though I walk through the valley of the shadow of death, I shall fear no evil; * "
             , second: "for you are with me; your rod and your staff, they comfort me."
             , number: 4
             }
           , { first: "You spread a table before me in the presence of those who trouble me; * "
             , second: "you have anointed my head with oil, and my cup is running over."
             , number: 5
             }
           , { first: "Surely your goodness and mercy shall follow me all the days of my life, * "
             , second: "and I will dwell in the house of the Lord for ever."
             , number: 6
             }
           ]
    }
  , 24:
    { name: "Psalm 24."
    , title: "Domini est terra"
    , vss: [ { first: "The earth is the Lord’s and all that is in it, * "
             , second: "the world and all who dwell therein."
             , number: 1
             }
           , { first: "For it is he who founded it upon the seas * "
             , second: "and made it firm upon the rivers of the deep."
             , number: 2
             }
           , { first: "“Who can ascend the hill of the Lord? * "
             , second: "and who can stand in his holy place?”"
             , number: 3
             }
           , { first: "“Those who have clean hands and a pure heart, * "
             , second: "who have not pledged themselves to falsehood, nor sworn by what is a fraud."
             , number: 4
             }
           , { first: "They shall receive a blessing from the Lord * "
             , second: "and a just reward from the God of their salvation.”"
             , number: 5
             }
           , { first: "Such is the generation of those who seek him, * "
             , second: "of those who seek your face, O God of Jacob."
             , number: 6
             }
           , { first: "Lift up your heads, O gates; lift them high, O everlasting doors; * "
             , second: "and the King of glory shall come in."
             , number: 7
             }
           , { first: "“Who is this King of glory?” * "
             , second: "“The Lord, strong and mighty, the Lord, mighty in battle.”"
             , number: 8
             }
           , { first: "Lift up your heads, O gates; lift them high, O everlasting doors; * "
             , second: "and the King of glory shall come in."
             , number: 9
             }
           , { first: "“Who is he, this King of glory?” * "
             , second: "“The Lord of hosts, he is the King of glory.”"
             , number: 10
             }
           ]
    }
  , 25:
    { name: "Psalm 25."
    , title: "Ad te, Domine, levavi"
    , vss: [ { first: "To you, O Lord, I lift up my soul; my God, I put my trust in you; * "
             , second: "let me not be humiliated, nor let my enemies triumph over me."
             , number: 1
             }
           , { first: "Let none who look to you be put to shame; * "
             , second: "let the treacherous be disappointed in their schemes."
             , number: 2
             }
           , { first: "Show me your ways, O Lord, * "
             , second: "and teach me your paths."
             , number: 3
             }
           , { first: "Lead me in your truth and teach me, * "
             , second: "for you are the God of my salvation; in you have I trusted all the day long."
             , number: 4
             }
           , { first: "Remember, O Lord, your compassion and love, * "
             , second: "for they are from everlasting."
             , number: 5
             }
           , { first: "Remember not the sins of my youth and my transgressions; * "
             , second: "remember me according to your love and for the sake of your goodness, O Lord."
             , number: 6
             }
           , { first: "Gracious and upright is the Lord; * "
             , second: "therefore he teaches sinners in his way."
             , number: 7
             }
           , { first: "He guides the humble in doing right * "
             , second: "and teaches his way to the lowly."
             , number: 8
             }
           , { first: "All the paths of the Lord are love and faithfulness * "
             , second: "to those who keep his covenant and his testimonies."
             , number: 9
             }
           , { first: "For your Name’s sake, O Lord, * "
             , second: "forgive my sin, for it is great."
             , number: 10
             }
           , { first: "Who are they who fear the Lord? * "
             , second: "he will teach them the way that they should choose."
             , number: 11
             }
           , { first: "They shall dwell in prosperity, * "
             , second: "and their offspring shall inherit the land."
             , number: 12
             }
           , { first: "The Lord is a friend to those who fear him * "
             , second: "and will show them his covenant."
             , number: 13
             }
           , { first: "My eyes are ever looking to the Lord, * "
             , second: "for he shall pluck my feet out of the net."
             , number: 14
             }
           , { first: "Turn to me and have pity on me, * "
             , second: "for I am left alone and in misery."
             , number: 15
             }
           , { first: "The sorrows of my heart have increased; * "
             , second: "bring me out of my troubles."
             , number: 16
             }
           , { first: "Look upon my adversity and misery * "
             , second: "and forgive me all my sin."
             , number: 17
             }
           , { first: "Look upon my enemies, for they are many, * "
             , second: "and they bear a violent hatred against me."
             , number: 18
             }
           , { first: "Protect my life and deliver me; * "
             , second: "let me not be put to shame, for I have trusted in you."
             , number: 19
             }
           , { first: "Let integrity and uprightness preserve me, * "
             , second: "for my hope has been in you."
             , number: 20
             }
           , { first: "Deliver Israel, O God, * "
             , second: "out of all his troubles."
             , number: 21
             }
           ]
    }
  , 26:
    { name: "Psalm 26."
    , title: "Judica me, Domine"
    , vss: [ { first: "Give judgment for me, O Lord, for I have lived with integrity; * "
             , second: "I have trusted in the Lord and have not faltered."
             , number: 1
             }
           , { first: "Test me, O Lord, and try me; * "
             , second: "examine my heart and my mind."
             , number: 2
             }
           , { first: "For your love is before my eyes; * "
             , second: "I have walked faithfully with you."
             , number: 3
             }
           , { first: "I have not sat with the worthless, * "
             , second: "nor do I consort with the deceitful."
             , number: 4
             }
           , { first: "I have hated the company of evildoers; * "
             , second: "I will not sit down with the wicked."
             , number: 5
             }
           , { first: "I will wash my hands in innocence, O Lord, * "
             , second: "that I may go in procession round your altar,"
             , number: 6
             }
           , { first: "Singing aloud a song of thanksgiving * "
             , second: "and recounting all your wonderful deeds."
             , number: 7
             }
           , { first: "Lord, I love the house in which you dwell * "
             , second: "and the place where your glory abides."
             , number: 8
             }
           , { first: "Do not sweep me away with sinners, * "
             , second: "nor my life with those who thirst for blood,"
             , number: 9
             }
           , { first: "Whose hands are full of evil plots, * "
             , second: "and their right hand full of bribes."
             , number: 10
             }
           , { first: "As for me, I will live with integrity; * "
             , second: "redeem me, O Lord, and have pity on me."
             , number: 11
             }
           , { first: "My foot stands on level ground; * "
             , second: "in the full assembly I will bless the Lord."
             , number: 12
             }
           ]
    }
  , 27:
    { name: "Psalm 27."
    , title: "Dominus illuminatio"
    , vss: [ { first: "The Lord is my light and my salvation; whom then shall I fear? * "
             , second: "the Lord is the strength of my life; of whom then shall I be afraid?"
             , number: 1
             }
           , { first: "When evildoers came upon me to eat up my flesh, * "
             , second: "it was they, my foes and my adversaries, who stumbled and fell."
             , number: 2
             }
           , { first: "Though an army should encamp against me, * "
             , second: "yet my heart shall not be afraid;"
             , number: 3
             }
           , { first: "And though war should rise up against me, * "
             , second: "yet will I put my trust in him."
             , number: 4
             }
           , { first: "One thing have I asked of the Lord; one thing I seek; * "
             , second: "that I may dwell in the house of the Lord all the days of my life;"
             , number: 5
             }
           , { first: "To behold the fair beauty of the Lord * "
             , second: "and to seek him in his temple."
             , number: 6
             }
           , { first: "For in the day of trouble he shall keep me safe in his shelter; * "
             , second: "he shall hide me in the secrecy of his dwelling and set me high upon a rock."
             , number: 7
             }
           , { first: "Even now he lifts up my head * "
             , second: "above my enemies round about me."
             , number: 8
             }
           , { first: "Therefore I will offer in his dwelling an oblation with sounds of great gladness; * "
             , second: "I will sing and make music to the Lord."
             , number: 9
             }
           , { first: "Hearken to my voice, O Lord, when I call; * "
             , second: "have mercy on me and answer me."
             , number: 10
             }
           , { first: "You speak in my heart and say, “Seek my face.” * "
             , second: "Your face, Lord, will I seek."
             , number: 11
             }
           , { first: "Hide not your face from me, * "
             , second: "nor turn away your servant in displeasure."
             , number: 12
             }
           , { first: "You have been my helper; cast me not away; * "
             , second: "do not forsake me, O God of my salvation."
             , number: 13
             }
           , { first: "Though my father and my mother forsake me, * "
             , second: "the Lord will sustain me."
             , number: 14
             }
           , { first: "Show me your way, O Lord; * "
             , second: "lead me on a level path, because of my enemies."
             , number: 15
             }
           , { first: "Deliver me not into the hand of my adversaries, * "
             , second: "for false witnesses have risen up against me, and also those who speak malice."
             , number: 16
             }
           , { first: "What if I had not believed that I should see the goodness of the Lord * "
             , second: "in the land of the living!"
             , number: 17
             }
           , { first: "O tarry and await the Lord’s pleasure; be strong, and he shall comfort your heart; * "
             , second: "wait patiently for the Lord."
             , number: 18
             }
           ]
    }
  , 28:
    { name: "Psalm 28."
    , title: "Ad te, Domine"
    , vss: [ { first: "O Lord, I call to you; my Rock, do not be deaf to my cry; * "
             , second: "lest, if you do not hear me, I become like those who go down to the Pit."
             , number: 1
             }
           , { first: "Hear the voice of my prayer when I cry out to you, * "
             , second: "when I lift up my hands to your holy of holies."
             , number: 2
             }
           , { first: "Do not snatch me away with the wicked or with the evildoers, * "
             , second: "who speak peaceably with their neighbors, while strife is in their hearts."
             , number: 3
             }
           , { first: "Repay them according to their deeds, * "
             , second: "and according to the wickedness of their actions."
             , number: 4
             }
           , { first: "According to the work of their hands repay them, * "
             , second: "and give them their just deserts."
             , number: 5
             }
           , { first: "They have no understanding of the Lord’s doings, nor of the works of his hands; * "
             , second: "therefore he will break them down and not build them up."
             , number: 6
             }
           , { first: "Blessed is the Lord! * "
             , second: "for he has heard the voice of my prayer."
             , number: 7
             }
           , { first: "The Lord is my strength and my shield; * "
             , second: "my heart trusts in him, and I have been helped;"
             , number: 8
             }
           , { first: "Therefore my heart dances for joy, * "
             , second: "and in my song will I praise him."
             , number: 9
             }
           , { first: "The Lord is the strength of his people, * "
             , second: "a safe refuge for his anointed."
             , number: 10
             }
           , { first: "Save your people and bless your inheritance; * "
             , second: "shepherd them and carry them for ever."
             , number: 11
             }
           ]
    }
  , 29:
    { name: "Psalm 29."
    , title: "Afferte Domino"
    , vss: [ { first: "Ascribe to the Lord, you gods, * "
             , second: "ascribe to the Lord glory and strength."
             , number: 1
             }
           , { first: "Ascribe to the Lord the glory due his Name; * "
             , second: "worship the Lord in the beauty of holiness."
             , number: 2
             }
           , { first: "The voice of the Lord is upon the waters; the God of glory thunders; * "
             , second: "the Lord is upon the mighty waters."
             , number: 3
             }
           , { first: "The voice of the Lord is a powerful voice; * "
             , second: "the voice of the Lord is a voice of splendor."
             , number: 4
             }
           , { first: "The voice of the Lord breaks the cedar trees; * "
             , second: "the Lord breaks the cedars of Lebanon;"
             , number: 5
             }
           , { first: "He makes Lebanon skip like a calf, * "
             , second: "and Mount Hermon like a young wild ox."
             , number: 6
             }
           , { first: "The voice of the Lord splits the flames of fire; the voice of the Lord shakes the wilderness; * "
             , second: "the Lord shakes the wilderness of Kadesh."
             , number: 7
             }
           , { first: "The voice of the Lord makes the oak trees writhe * "
             , second: "and strips the forests bare."
             , number: 8
             }
           , { first: "And in the temple of the Lord * "
             , second: "all are crying, “Glory!”"
             , number: 9
             }
           , { first: "The Lord sits enthroned above the flood; * "
             , second: "the Lord sits enthroned as King for evermore."
             , number: 10
             }
           , { first: "The Lord shall give strength to his people; * "
             , second: "the Lord shall give his people the blessing of peace."
             , number: 11
             }
           ]
    }
  , 30:
    { name: "Psalm 30."
    , title: "Exaltabo te, Domine"
    , vss: [ { first: "I will exalt you, O Lord, because you have lifted me up * "
             , second: "and have not let my enemies triumph over me."
             , number: 1
             }
           , { first: "O Lord my God, I cried out to you, * "
             , second: "and you restored me to health."
             , number: 2
             }
           , { first: "You brought me up, O Lord, from the dead; * "
             , second: "you restored my life as I was going down to the grave."
             , number: 3
             }
           , { first: "Sing to the Lord, you servants of his; * "
             , second: "give thanks for the remembrance of his holiness."
             , number: 4
             }
           , { first: "For his wrath endures but the twinkling of an eye, * "
             , second: "his favor for a lifetime."
             , number: 5
             }
           , { first: "Weeping may spend the night, * "
             , second: "but joy comes in the morning."
             , number: 6
             }
           , { first: "While I felt secure, I said, “I shall never be disturbed. * "
             , second: "You, Lord, with your favor, made me as strong as the mountains.”"
             , number: 7
             }
           , { first: "Then you hid your face, * "
             , second: "and I was filled with fear."
             , number: 8
             }
           , { first: "I cried to you, O Lord; * "
             , second: "I pleaded with the Lord, saying,"
             , number: 9
             }
           , { first: "“What profit is there in my blood, if I go down to the Pit? * "
             , second: "will the dust praise you or declare your faithfulness?"
             , number: 10
             }
           , { first: "Hear, O Lord, and have mercy upon me; * "
             , second: "O Lord, be my helper.”"
             , number: 11
             }
           , { first: "You have turned my wailing into dancing; * "
             , second: "you have put off my sack-cloth and clothed me with joy."
             , number: 12
             }
           , { first: "Therefore my heart sings to you without ceasing; * "
             , second: "O Lord my God, I will give you thanks for ever."
             , number: 13
             }
           ]
    }
  , 31:
    { name: "Psalm 31."
    , title: "In te, Domine, speravi"
    , vss: [ { first: "In you, O Lord, have I taken refuge; let me never be put to shame; * "
             , second: "deliver me in your righteousness."
             , number: 1
             }
           , { first: "Incline your ear to me; * "
             , second: "make haste to deliver me."
             , number: 2
             }
           , { first: "Be my strong rock, a castle to keep me safe, for you are my crag and my stronghold; * "
             , second: "for the sake of your Name, lead me and guide me."
             , number: 3
             }
           , { first: "Take me out of the net that they have secretly set for me, * "
             , second: "for you are my tower of strength."
             , number: 4
             }
           , { first: "Into your hands I commend my spirit, * "
             , second: "for you have redeemed me, O Lord, O God of truth."
             , number: 5
             }
           , { first: "I hate those who cling to worthless idols, * "
             , second: "and I put my trust in the Lord."
             , number: 6
             }
           , { first: "I will rejoice and be glad because of your mercy; * "
             , second: "for you have seen my affliction; you know my distress."
             , number: 7
             }
           , { first: "You have not shut me up in the power of the enemy; * "
             , second: "you have set my feet in an open place."
             , number: 8
             }
           , { first: "Have mercy on me, O Lord, for I am in trouble; * "
             , second: "my eye is consumed with sorrow, and also my throat and my belly."
             , number: 9
             }
           , { first: "For my life is wasted with grief, and my years with sighing; * "
             , second: "my strength fails me because of affliction, and my bones are consumed."
             , number: 10
             }
           , { first: "I have become a reproach to all my enemies and even to my neighbors, a dismay to those of my acquaintance; * "
             , second: "when they see me in the street they avoid me."
             , number: 11
             }
           , { first: "I am forgotten like a dead man, out of mind; * "
             , second: "I am as useless as a broken pot."
             , number: 12
             }
           , { first: "For I have heard the whispering of the crowd; fear is all around; * "
             , second: "they put their heads together against me; they plot to take my life."
             , number: 13
             }
           , { first: "But as for me, I have trusted in you, O Lord. * "
             , second: "I have said, “You are my God."
             , number: 14
             }
           , { first: "My times are in your hand; * "
             , second: "rescue me from the hand of my enemies, and from those who persecute me."
             , number: 15
             }
           , { first: "Make your face to shine upon your servant, * "
             , second: "and in your loving-kindness save me.”"
             , number: 16
             }
           , { first: "Lord, let me not be ashamed for having called upon you; * "
             , second: "rather, let the wicked be put to shame; let them be silent in the grave."
             , number: 17
             }
           , { first: "Let the lying lips be silenced which speak against the righteous, * "
             , second: "haughtily, disdainfully, and with contempt."
             , number: 18
             }
           , { first: "How great is your goodness, O Lord! which you have laid up for those who fear you; * "
             , second: "which you have done in the sight of all for those who put their trust in you."
             , number: 19
             }
           , { first: "You hide them in the covert of your presence from those who slander them; * "
             , second: "you keep them in your shelter from the strife of tongues."
             , number: 20
             }
           , { first: "Blessed be the Lord! * "
             , second: "for he has shown me the wonders of his love in a besieged city."
             , number: 21
             }
           , { first: "Yet I said in my alarm, “I have been cut off from the sight of your eyes.” * "
             , second: "Nevertheless, you heard the sound of my entreaty when I cried out to you."
             , number: 22
             }
           , { first: "Love the Lord, all you who worship him; * "
             , second: "the Lord protects the faithful, but repays to the full those who act haughtily."
             , number: 23
             }
           , { first: "Be strong and let your heart take courage, * "
             , second: "all you who wait for the Lord."
             , number: 24
             }
           ]
    }
  , 32:
    { name: "Psalm 32."
    , title: "Beati quorum"
    , vss: [ { first: "Happy are they whose transgressions are forgiven, * "
             , second: "and whose sin is put away!"
             , number: 1
             }
           , { first: "Happy are they to whom the Lord imputes no guilt, * "
             , second: "and in whose spirit there is no guile!"
             , number: 2
             }
           , { first: "While I held my tongue, my bones withered away, * "
             , second: "because of my groaning all day long."
             , number: 3
             }
           , { first: "For your hand was heavy upon me day and night; * "
             , second: "my moisture was dried up as in the heat of summer."
             , number: 4
             }
           , { first: "Then I acknowledged my sin to you, * "
             , second: "and did not conceal my guilt."
             , number: 5
             }
           , { first: "I said, “I will confess my transgressions to the Lord.” * "
             , second: "Then you forgave me the guilt of my sin."
             , number: 6
             }
           , { first: "Therefore all the faithful will make their prayers to you in time of trouble; * "
             , second: "when the great waters overflow, they shall not reach them."
             , number: 7
             }
           , { first: "You are my hiding-place; you preserve me from trouble; * "
             , second: "you surround me with shouts of deliverance."
             , number: 8
             }
           , { first: "“I will instruct you and teach you in the way that you should go; * "
             , second: "I will guide you with my eye."
             , number: 9
             }
           , { first: "Do not be like horse or mule, which have no understanding; * "
             , second: "who must be fitted with bit and bridle, or else they will not stay near you.”"
             , number: 10
             }
           , { first: "Great are the tribulations of the wicked; * "
             , second: "but mercy embraces those who trust in the Lord."
             , number: 11
             }
           , { first: "Be glad, you righteous, and rejoice in the Lord; * "
             , second: "shout for joy, all who are true of heart."
             , number: 12
             }
           ]
    }
  , 33:
    { name: "Psalm 33."
    , title: "Exultate, justi"
    , vss: [ { first: "Rejoice in the Lord, you righteous; * "
             , second: "it is good for the just to sing praises."
             , number: 1
             }
           , { first: "Praise the Lord with the harp; * "
             , second: "play to him upon the psaltery and lyre."
             , number: 2
             }
           , { first: "Sing for him a new song; * "
             , second: "sound a fanfare with all your skill upon the trumpet."
             , number: 3
             }
           , { first: "For the word of the Lord is right, * "
             , second: "and all his works are sure."
             , number: 4
             }
           , { first: "He loves righteousness and justice; * "
             , second: "the loving-kindness of the Lord fills the whole earth."
             , number: 5
             }
           , { first: "By the word of the Lord were the heavens made, * "
             , second: "by the breath of his mouth all the heavenly hosts."
             , number: 6
             }
           , { first: "He gathers up the waters of the ocean as in a water-skin * "
             , second: "and stores up the depths of the sea."
             , number: 7
             }
           , { first: "Let all the earth fear the Lord; * "
             , second: "let all who dwell in the world stand in awe of him."
             , number: 8
             }
           , { first: "For he spoke, and it came to pass; * "
             , second: "he commanded, and it stood fast."
             , number: 9
             }
           , { first: "The Lord brings the will of the nations to naught; * "
             , second: "he thwarts the designs of the peoples."
             , number: 10
             }
           , { first: "But the Lord’s will stands fast for ever, * "
             , second: "and the designs of his heart from age to age."
             , number: 11
             }
           , { first: "Happy is the nation whose God is the Lord! * "
             , second: "happy the people he has chosen to be his own!"
             , number: 12
             }
           , { first: "The Lord looks down from heaven, * "
             , second: "and beholds all the people in the world."
             , number: 13
             }
           , { first: "From where he sits enthroned he turns his gaze * "
             , second: "on all who dwell on the earth."
             , number: 14
             }
           , { first: "He fashions all the hearts of them * "
             , second: "and understands all their works."
             , number: 15
             }
           , { first: "There is no king that can be saved by a mighty army; * "
             , second: "a strong man is not delivered by his great strength."
             , number: 16
             }
           , { first: "The horse is a vain hope for deliverance; * "
             , second: "for all its strength it cannot save."
             , number: 17
             }
           , { first: "Behold, the eye of the Lord is upon those who fear him, * "
             , second: "on those who wait upon his love,"
             , number: 18
             }
           , { first: "To pluck their lives from death, * "
             , second: "and to feed them in time of famine."
             , number: 19
             }
           , { first: "Our soul waits for the Lord; * "
             , second: "he is our help and our shield."
             , number: 20
             }
           , { first: "Indeed, our heart rejoices in him, * "
             , second: "for in his holy Name we put our trust."
             , number: 21
             }
           , { first: "Let your loving-kindness, O Lord, be upon us, * "
             , second: "as we have put our trust in you."
             , number: 22
             }
           ]
    }
  , 34:
    { name: "Psalm 34."
    , title: "Benedicam Dominum"
    , vss: [ { first: "I will bless the Lord at all times; * "
             , second: "his praise shall ever be in my mouth."
             , number: 1
               }
           , { first: "I will glory in the Lord; * "
             , second: "let the humble hear and rejoice."
             , number: 2
               }
           , { first: "Proclaim with me the greatness of the Lord; * "
             , second: "let us exalt his Name together."
             , number: 3
               }
           , { first: "I sought the Lord, and he answered me * "
             , second: "and delivered me out of all my terror."
             , number: 4
               }
           , { first: "Look upon him and be radiant, * "
             , second: "and let not your faces be ashamed."
             , number: 5
               }
           , { first: "I called in my affliction and the Lord heard me * "
             , second: "and saved me from all my troubles."
             , number: 6
               }
           , { first: "The angel of the Lord encompasses those who fear him, * "
             , second: "and he will deliver them."
             , number: 7
               }
           , { first: "Taste and see that the Lord is good; * "
             , second: "happy are they who trust in him!"
             , number: 8
               }
           , { first: "Fear the Lord, you that are his saints, * "
             , second: "for those who fear him lack nothing."
             , number: 9
               }
           , { first: "The young lions lack and suffer hunger, * "
             , second: "but those who seek the Lord lack nothing that is good."
             , number: 10
               }
           , { first: "Come, children, and listen to me; * "
             , second: "I will teach you the fear of the Lord."
             , number: 11
               }
           , { first: "Who among you loves life * "
             , second: "and desires long life to enjoy prosperity?"
             , number: 12
               }
           , { first: "Keep your tongue from evil-speaking * "
             , second: "and your lips from lying words."
             , number: 13
               }
           , { first: "Turn from evil and do good; * "
             , second: "seek peace and pursue it."
             , number: 14
               }
           , { first: "The eyes of the Lord are upon the righteous, * "
             , second: "and his ears are open to their cry."
             , number: 15
               }
           , { first: "The face of the Lord is against those who do evil, * "
             , second: "to root out the remembrance of them from the earth."
             , number: 16
               }
           , { first: "The righteous cry, and the Lord hears them * "
             , second: "and delivers them from all their troubles."
             , number: 17
               }
           , { first: "The Lord is near to the brokenhearted * "
             , second: "and will save those whose spirits are crushed."
             , number: 18
               }
           , { first: "Many are the troubles of the righteous, * "
             , second: "but the Lord will deliver him out of them all."
             , number: 19
               }
           , { first: "He will keep safe all his bones; * "
             , second: "not one of them shall be broken."
             , number: 20
               }
           , { first: "Evil shall slay the wicked, * "
             , second: "and those who hate the righteous will be punished."
             , number: 21
               }
           , { first: "The Lord ransoms the life of his servants, * "
             , second: "and none will be punished who trust in him."
             , number: 22
               }
             ]
    }
  , 35:
    { name: "Psalm 35."
    , title: "Judica, Domine"
    , vss: [ { first: "Fight those who fight me, O Lord; * "
             , second: "attack those who are attacking me."
             , number: 1
               }
           , { first: "Take up shield and armor * "
             , second: "and rise up to help me."
             , number: 2
               }
           , { first: "Draw the sword and bar the way against those who pursue me; * "
             , second: "say to my soul, “I am your salvation.”"
             , number: 3
               }
           , { first: "Let those who seek after my life be shamed and humbled; * "
             , second: "let those who plot my ruin fall back and be dismayed."
             , number: 4
               }
           , { first: "Let them be like chaff before the wind, * "
             , second: "and let the angel of the Lord drive them away."
             , number: 5
               }
           , { first: "Let their way be dark and slippery, * "
             , second: "and let the angel of the Lord pursue them."
             , number: 6
               }
           , { first: "For they have secretly spread a net for me without a cause; * "
             , second: "without a cause they have dug a pit to take me alive."
             , number: 7
               }
           , { first: "Let ruin come upon them unawares; * "
             , second: "let them be caught in the net they hid; let them fall into the pit they dug."
             , number: 8
               }
           , { first: "Then I will be joyful in the Lord; * "
             , second: "I will glory in his victory."
             , number: 9
               }
           , { first: "My very bones will say, “Lord, who is like you? * "
             , second: "You deliver the poor from those who are too strong for them, the poor and needy from those who rob them.”"
             , number: 10
               }
           , { first: "Malicious witnesses rise up against me; * "
             , second: "they charge me with matters I know nothing about."
             , number: 11
               }
           , { first: "They pay me evil in exchange for good; * "
             , second: "my soul is full of despair."
             , number: 12
               }
           , { first: "But when they were sick I dressed in sack-cloth * "
             , second: "and humbled myself by fasting;"
             , number: 13
               }
           , { first: "I prayed with my whole heart, as one would for a friend or a brother; * "
             , second: "I behaved like one who mourns for his mother, bowed down and grieving."
             , number: 14
               }
           , { first: "But when I stumbled, they were glad and gathered together; they gathered against me; * "
             , second: "strangers whom I did not know tore me to pieces and would not stop."
             , number: 15
               }
           , { first: "They put me to the test and mocked me; * "
             , second: "they gnashed at me with their teeth."
             , number: 16
               }
           , { first: "O Lord, how long will you look on? * "
             , second: "rescue me from the roaring beasts, and my life from the young lions."
             , number: 17
               }
           , { first: "I will give you thanks in the great congregation; * "
             , second: "I will praise you in the mighty throng."
             , number: 19
               }
           , { first: "Do not let my treacherous foes rejoice over me, * "
             , second: "nor let those who hate me without a cause wink at each other."
             , number: 20
               }
           , { first: "For they do not plan for peace, * "
             , second: "but invent deceitful schemes against the quiet in the land."
             , number: 21
               }
           , { first: "They opened their mouths at me and said, * "
             , second: "“Aha! we saw it with our own eyes.”"
             , number: 22
               }
           , { first: "You saw it, O Lord; do not be silent; * "
             , second: "O Lord, be not far from me."
             , number: 23
               }
           , { first: "Awake, arise, to my cause! * "
             , second: "to my defense, my God and my Lord!"
             , number: 24
               }
           , { first: "Give me justice, O Lord my God, according to your righteousness; * "
             , second: "do not let them triumph over me."
             , number: 25
               }
           , { first: "Do not let them say in their hearts, “Aha! just what we want!” * "
             , second: "Do not let them say, “We have swallowed him up.”"
             , number: 26
               }
           , { first: "Let all who rejoice at my ruin be ashamed and disgraced; * "
             , second: "let those who boast against me be clothed with dismay and shame."
             , number: 27
               }
           , { first: "Let those who favor my cause sing out with joy and be glad; * "
             , second: "let them say always, “Great is the Lord, who desires the prosperity of his servant.”"
             , number: 28
               }
           , { first: "And my tongue shall be talking of your righteousness * "
             , second: "and of your praise all the day long."
             , number: 29
               }
             ]
    }
  , 36:
    { name: "Psalm 36."
    , title: "Dixit injustus"
    , vss: [ { first: "There is a voice of rebellion deep in the heart of the wicked; * "
             , second: "there is no fear of God before his eyes."
             , number: 1
               }
           , { first: "He flatters himself in his own eyes * "
             , second: "that his hateful sin will not be found out."
             , number: 2
               }
           , { first: "The words of his mouth are wicked and deceitful; * "
             , second: "he has left off acting wisely and doing good."
             , number: 3
               }
           , { first: "He thinks up wickedness upon his bed and has set himself in no good way; * "
             , second: "he does not abhor that which is evil."
             , number: 4
               }
           , { first: "Your love, O Lord, reaches to the heavens, * "
             , second: "and your faithfulness to the clouds."
             , number: 5
               }
           , { first: "Your righteousness is like the strong mountains, your justice like the great deep; * "
             , second: "you save both man and beast, O Lord."
             , number: 6
               }
           , { first: "How priceless is your love, O God! * "
             , second: "your people take refuge under the shadow of your wings."
             , number: 7
               }
           , { first: "They feast upon the abundance of your house; * "
             , second: "you give them drink from the river of your delights."
             , number: 8
               }
           , { first: "For with you is the well of life, * "
             , second: "and in your light we see light."
             , number: 9
               }
           , { first: "Continue your loving-kindness to those who know you, * "
             , second: "and your favor to those who are true of heart."
             , number: 10
               }
           , { first: "Let not the foot of the proud come near me, * "
             , second: "nor the hand of the wicked push me aside."
             , number: 11
               }
           , { first: "See how they are fallen, those who work wickedness! * "
             , second: "they are cast down and shall not be able to rise."
             , number: 12
               }
             ]
    }
  , 37:
    { name: "Psalm 37."
    , title: ""
    , vss: [ { title: "Part I Noli æmulari"
             , first: "Do not fret yourself because of evildoers; * "
             , second: "do not be jealous of those who do wrong."
             , number: 1
               }
           , { first: "For they shall soon wither like the grass, * "
             , second: "and like the green grass fade away."
             , number: 2
               }
           , { first: "Put your trust in the Lord and do good; * "
             , second: "dwell in the land and feed on its riches."
             , number: 3
               }
           , { first: "Take delight in the Lord, * "
             , second: "and he shall give you your heart’s desire."
             , number: 4
               }
           , { first: "Commit your way to the Lord and put your trust in him, * "
             , second: "and he will bring it to pass."
             , number: 5
               }
           , { first: "He will make your righteousness as clear as the light * "
             , second: "and your just dealing as the noonday."
             , number: 6
               }
           , { first: "Be still before the Lord * "
             , second: "and wait patiently for him."
             , number: 7
               }
           , { first: "Do not fret yourself over the one who prospers, * "
             , second: "the one who succeeds in evil schemes."
             , number: 8
               }
           , { first: "Refrain from anger, leave rage alone; * "
             , second: "do not fret yourself; it leads only to evil."
             , number: 9
               }
           , { first: "For evildoers shall be cut off, * "
             , second: "but those who wait upon the Lord shall possess the land."
             , number: 10
               }
           , { first: "In a little while the wicked shall be no more; * "
             , second: "you shall search out their place, but they will not be there."
             , number: 11
               }
           , { first: "But the lowly shall possess the land; * "
             , second: "they will delight in abundance of peace."
             , number: 12
               }
           , { first: "The wicked plot against the righteous * "
             , second: "and gnash at them with their teeth."
             , number: 13
               }
           , { first: "The Lord laughs at the wicked, * "
             , second: "because he sees that their day will come."
             , number: 14
               }
           , { first: "The wicked draw their sword and bend their bow to strike down the poor and needy, * "
             , second: "to slaughter those who are upright in their ways."
             , number: 15
               }
           , { first: "Their sword shall go through their own heart, * "
             , second: "and their bow shall be broken."
             , number: 16
               }
           , { first: "The little that the righteous has * "
             , second: "is better than great riches of the wicked."
             , number: 17
               }
           , { first: "For the power of the wicked shall be broken, * "
             , second: "but the Lord upholds the righteous."
             , number: 18
               }
           , { title: "Part II Novit Dominus"
             , first: "The Lord cares for the lives of the godly, * "
             , second: "and their inheritance shall last for ever."
             , number: 19
               }
           , { first: "They shall not be ashamed in bad times, * "
             , second: "and in days of famine they shall have enough."
             , number: 20
               }
           , { first: "As for the wicked, they shall perish, * "
             , second: "and the enemies of the Lord, like the glory of the meadows, shall vanish; they shall vanish like smoke."
             , number: 21
               }
           , { first: "The wicked borrow and do not repay, * "
             , second: "but the righteous are generous in giving."
             , number: 22
               }
           , { first: "Those who are blessed by God shall possess the land, * "
             , second: "but those who are cursed by him shall be destroyed."
             , number: 23
               }
           , { first: "Our steps are directed by the Lord; * "
             , second: "he strengthens those in whose way he delights."
             , number: 24
               }
           , { first: "If they stumble, they shall not fall headlong, * "
             , second: "for the Lord holds them by the hand."
             , number: 25
               }
           , { first: "I have been young and now I am old, * "
             , second: "but never have I seen the righteous forsaken, or their children begging bread."
             , number: 26
               }
           , { first: "The righteous are always generous in their lending, * "
             , second: "and their children shall be a blessing."
             , number: 27
               }
           , { first: "Turn from evil, and do good, * "
             , second: "and dwell in the land for ever."
             , number: 28
               }
           , { first: "For the Lord loves justice; * "
             , second: "he does not forsake his faithful ones."
             , number: 29
               }
           , { first: "They shall be kept safe for ever, * "
             , second: "but the offspring of the wicked shall be destroyed."
             , number: 30
               }
           , { first: "The righteous shall possess the land * "
             , second: "and dwell in it for ever."
             , number: 31
               }
           , { first: "The mouth of the righteous utters wisdom, * "
             , second: "and their tongue speaks what is right."
             , number: 32
               }
           , { first: "The law of their God is in their heart, * "
             , second: "and their footsteps shall not falter."
             , number: 33
               }
           , { first: "The wicked spy on the righteous * "
             , second: "and seek occasion to kill them."
             , number: 34
               }
           , { first: "The Lord will not abandon them to their hand, * "
             , second: "nor let them be found guilty when brought to trial."
             , number: 35
               }
           , { first: "Wait upon the Lord and keep his way; * "
             , second: "he will raise you up to possess the land, and when the wicked are cut off, you will see it."
             , number: 36
               }
           , { first: "I have seen the wicked in their arrogance, * "
             , second: "flourishing like a tree in full leaf."
             , number: 37
               }
           , { first: "I went by, and behold, they were not there; * "
             , second: "I searched for them, but they could not be found."
             , number: 38
               }
           , { first: "Mark those who are honest; observe the upright; * "
             , second: "for there is a future for the peaceable."
             , number: 39
               }
           , { first: "Transgressors shall be destroyed, one and all; * "
             , second: "the future of the wicked is cut off."
             , number: 40
               }
           , { first: "But the deliverance of the righteous comes from the Lord; * "
             , second: "he is their stronghold in time of trouble."
             , number: 41
               }
           , { first: "The Lord will help them and rescue them; * "
             , second: "he will rescue them from the wicked and deliver them, because they seek refuge in him."
             , number: 42
               }
             ]
    }
  , 38:
    { name: "Psalm 38."
    , title: "Domine, ne in furore"
    , vss: [ { first: "O Lord, do not rebuke me in your anger; * "
             , second: "do not punish me in your wrath."
             , number: 1
               }
           , { first: "For your arrows have already pierced me, * "
             , second: "and your hand presses hard upon me."
             , number: 2
               }
           , { first: "There is no health in my flesh, because of your indignation; * "
             , second: "there is no soundness in my body, because of my sin."
             , number: 3
               }
           , { first: "For my iniquities overwhelm me; * "
             , second: "like a heavy burden they are too much for me to bear."
             , number: 4
               }
           , { first: "My wounds stink and fester * "
             , second: "by reason of my foolishness."
             , number: 5
               }
           , { first: "I am utterly bowed down and prostrate; * "
             , second: "I go about in mourning all the day long."
             , number: 6
               }
           , { first: "My loins are filled with searing pain; * "
             , second: "there is no health in my body."
             , number: 7
               }
           , { first: "I am utterly numb and crushed; * "
             , second: "I wail, because of the groaning of my heart."
             , number: 8
               }
           , { first: "O Lord, you know all my desires, * "
             , second: "and my sighing is not hidden from you."
             , number: 9
               }
           , { first: "My heart is pounding, my strength has failed me, * "
             , second: "and the brightness of my eyes is gone from me."
             , number: 10
               }
           , { first: "My friends and companions draw back from my affliction; * "
             , second: "my neighbors stand afar off."
             , number: 11
               }
           , { first: "Those who seek after my life lay snares for me; * "
             , second: "those who strive to hurt me speak of my ruin and plot treachery all the day long."
             , number: 12
               }
           , { first: "But I am like the deaf who do not hear, * "
             , second: "like those who are mute and do not open their mouth."
             , number: 13
               }
           , { first: "I have become like one who does not hear * "
             , second: "and from whose mouth comes no defense."
             , number: 14
               }
           , { first: "For in you, O Lord, have I fixed my hope; * "
             , second: "you will answer me, O Lord my God."
             , number: 15
               }
           , { first: "For I said, “Do not let them rejoice at my expense, * "
             , second: "those who gloat over me when my foot slips.”"
             , number: 16
               }
           , { first: "Truly, I am on the verge of falling, * "
             , second: "and my pain is always with me."
             , number: 17
               }
           , { first: "I will confess my iniquity * "
             , second: "and be sorry for my sin."
             , number: 18
               }
           , { first: "Those who are my enemies without cause are mighty, * "
             , second: "and many in number are those who wrongfully hate me."
             , number: 19
               }
           , { first: "Those who repay evil for good slander me, * "
             , second: "because I follow the course that is right."
             , number: 20
               }
           , { first: "O Lord, do not forsake me; * "
             , second: "be not far from me, O my God."
             , number: 21
               }
           , { first: "Make haste to help me, * "
             , second: "O Lord of my salvation."
             , number: 22
               }
             ]
    }
  , 39:
    { name: "Psalm 39."
    , title: "Dixi, Custodiam"
    , vss: [ { first: "I said, “I will keep watch upon my ways, * "
             , second: "so that I do not offend with my tongue."
             , number: 1
               }
           , { first: "I will put a muzzle on my mouth * "
             , second: "while the wicked are in my presence.”"
             , number: 2
               }
           , { first: "So I held my tongue and said nothing; * "
             , second: "I refrained from rash words; but my pain became unbearable."
             , number: 3
               }
           , { first: "My heart was hot within me; while I pondered, the fire burst into flame; * "
             , second: "I spoke out with my tongue:"
             , number: 4
               }
           , { first: "Lord, let me know my end and the number of my days, * "
             , second: "so that I may know how short my life is."
             , number: 5
               }
           , { first: "You have given me a mere handful of days, and my lifetime is as nothing in your sight; * "
             , second: "truly, even those who stand erect are but a puff of wind."
             , number: 6
               }
           , { first: "We walk about like a shadow, and in vain we are in turmoil; * "
             , second: "we heap up riches and cannot tell who will gather them."
             , number: 7
               }
           , { first: "And now, what is my hope? * "
             , second: "O Lord, my hope is in you."
             , number: 8
               }
           , { first: "Deliver me from all my transgressions * "
             , second: "and do not make me the taunt of the fool."
             , number: 9
               }
           , { first: "I fell silent and did not open my mouth, * "
             , second: "for surely it was you that did it."
             , number: 10
               }
           , { first: "Take your affliction from me; * "
             , second: "I am worn down by the blows of your hand."
             , number: 11
               }
           , { first: "With rebukes for sin you punish us; like a moth you eat away all that is dear to us; * "
             , second: "truly, everyone is but a puff of wind."
             , number: 12
               }
           , { first: "Hear my prayer, O Lord, and give ear to my cry; * "
             , second: "hold not your peace at my tears."
             , number: 13
               }
           , { first: "For I am but a sojourner with you, * "
             , second: "a wayfarer, as all my forebears were."
             , number: 14
               }
           , { first: "Turn your gaze from me, that I may be glad again, * "
             , second: "before I go my way and am no more."
             , number: 15
               }
             ]
    }
  , 40:
    { name: "Psalm 40."
    , title: "Expectans, expectavi"
    , vss: [ { first: "I waited patiently upon the Lord; * "
             , second: "he stooped to me and heard my cry."
             , number: 1
               }
           , { first: "He lifted me out of the desolate pit, out of the mire and clay;"
             , second: "he set my feet upon a high cliff and made my footing sure."
             , number: 2
               }
           , { first: "He put a new song in my mouth, a song of praise to our God; * "
             , second: "many shall see, and stand in awe, and put their trust in the Lord."
             , number: 3
               }
           , { first: "Happy are they who trust in the Lord! * "
             , second: "they do not resort to evil spirits or turn to false gods."
             , number: 4
               }
           , { first: "Great things are they that you have done, O Lord my God! how great your wonders and your plans for us! * "
             , second: "there is none who can be compared with you."
             , number: 5
               }
           , { first: "Oh, that I could make them known and tell them! * "
             , second: "but they are more than I can count."
             , number: 6
               }
           , { first: "In sacrifice and offering you take no pleasure * "
             , second: "(you have given me ears to hear you);"
             , number: 7
               }
           , { first: "Burnt-offering and sin-offering you have not required, * "
             , second: "and so I said, “Behold, I come."
             , number: 8
               }
           , { first: "In the roll of the book it is written concerning me: * "
             , second: "‘I love to do your will, O my God; your law is deep in my heart.’”"
             , number: 9
               }
           , { first: "I proclaimed righteousness in the great congregation; * "
             , second: "behold, I did not restrain my lips; and that, O Lord, you know."
             , number: 10
               }
           , { first: "Your righteousness have I not hidden in my heart; I have spoken of your faithfulness and your deliverance; * "
             , second: "I have not concealed your love and faithfulness from the great congregation."
             , number: 11
               }
           , { first: "You are the Lord; do not withhold your compassion from me; * "
             , second: "let your love and your faithfulness keep me safe for ever,"
             , number: 12
               }
           , { first: "For innumerable troubles have crowded upon me; my sins have overtaken me, and I cannot see; * "
             , second: "they are more in number than the hairs of my head, and my heart fails me."
             , number: 13
               }
           , { first: "Be pleased, O Lord, to deliver me; * "
             , second: "O Lord, make haste to help me."
             , number: 14
               }
           , { first: "Let them be ashamed and altogether dismayed who seek after my life to destroy it; * "
             , second: "let them draw back and be disgraced who take pleasure in my misfortune."
             , number: 15
               }
           , { first: "Let those who say “Aha!” and gloat over me be confounded, * "
             , second: "because they are ashamed."
             , number: 16
               }
           , { first: "Let all who seek you rejoice in you and be glad; * "
             , second: "let those who love your salvation continually say, “Great is the Lord!”"
             , number: 17
               }
           , { first: "Though I am poor and afflicted, * "
             , second: "the Lord will have regard for me."
             , number: 19
               }
           , { first: "You are my helper and my deliverer; * "
             , second: "do not tarry, O my God."
             , number: 20
               }
             ]
    }
  , 41:
    { name: "Psalm 41."
    , title: "Beatus qui intelligit"
    , vss: [ { first: "Happy are they who consider the poor and needy! * "
             , second: "the Lord will deliver them in the time of trouble."
             , number: 1
               }
           , { first: "The Lord preserves them and keeps them alive, so that they may be happy in the land; * "
             , second: "he does not hand them over to the will of their enemies."
             , number: 2
               }
           , { first: "The Lord sustains them on their sickbed * "
             , second: "and ministers to them in their illness."
             , number: 3
               }
           , { first: "I said, “Lord, be merciful to me; * "
             , second: "heal me, for I have sinned against you.”"
             , number: 4
               }
           , { first: "My enemies are saying wicked things about me: * "
             , second: "“When will he die, and his name perish?”"
             , number: 5
               }
           , { first: "Even if they come to see me, they speak empty words; * "
             , second: "their heart collects false rumors; they go outside and spread them."
             , number: 6
               }
           , { first: "All my enemies whisper together about me * "
             , second: "and devise evil against me."
             , number: 7
               }
           , { first: "“A deadly thing,” they say, “has fastened on him; * "
             , second: "he has taken to his bed and will never get up again.”"
             , number: 8
               }
           , { first: "Even my best friend, whom I trusted, who broke bread with me, * "
             , second: "has lifted up his heel and turned against me."
             , number: 9
               }
           , { first: "But you, O Lord, be merciful to me and raise me up, * "
             , second: "and I shall repay them."
             , number: 10
               }
           , { first: "By this I know you are pleased with me, * "
             , second: "that my enemy does not triumph over me."
             , number: 11
               }
           , { first: "In my integrity you hold me fast, * "
             , second: "and shall set me before your face for ever."
             , number: 12
               }
           , { first: "Blessed be the Lord God of Israel, * "
             , second: "from age to age. Amen. Amen."
             , number: 13
               }
             ]
    }
  , 42:
    { name: "Psalm 42."
    , title: "Quemadmodum"
    , vss: [ { first: "As the deer longs for the water-brooks, * "
             , second: "so longs my soul for you, O God."
             , number: 1
               }
           , { first: "My soul is athirst for God, athirst for the living God; * "
             , second: "when shall I come to appear before the presence of God?"
             , number: 2
               }
           , { first: "My tears have been my food day and night, * "
             , second: "while all day long they say to me, “Where now is your God?”"
             , number: 3
               }
           , { first: "I pour out my soul when I think on these things: * "
             , second: "how I went with the multitude and led them into the house of God,"
             , number: 4
               }
           , { first: "With the voice of praise and thanksgiving, * "
             , second: "among those who keep holy-day."
             , number: 5
               }
           , { first: "Why are you so full of heaviness, O my soul? * "
             , second: "and why are you so disquieted within me?"
             , number: 6
               }
           , { first: "Put your trust in God; * "
             , second: "for I will yet give thanks to him, who is the help of my countenance, and my God."
             , number: 7
               }
           , { first: "My soul is heavy within me; * "
             , second: "therefore I will remember you from the land of Jordan, and from the peak of Mizar among the heights of Hermon."
             , number: 8
               }
           , { first: "One deep calls to another in the noise of your cataracts; * "
             , second: "all your rapids and floods have gone over me."
             , number: 9
               }
           , { first: "The Lord grants his loving-kindness in the daytime; * "
             , second: "in the night season his song is with me, a prayer to the God of my life."
             , number: 10
               }
           , { first: "I will say to the God of my strength, “Why have you forgotten me? * "
             , second: "and why do I go so heavily while the enemy oppresses me?”"
             , number: 11
               }
           , { first: "While my bones are being broken, * "
             , second: "my enemies mock me to my face;"
             , number: 12
               }
           , { first: "All day long they mock me * "
             , second: "and say to me, “Where now is your God?”"
             , number: 13
               }
           , { first: "Why are you so full of heaviness, O my soul? * "
             , second: "and why are you so disquieted within me?"
             , number: 14
               }
           , { first: "Put your trust in God; * "
             , second: "for I will yet give thanks to him, who is the help of my countenance, and my God."
             , number: 15
               }
             ]
    }
  , 43:
    { name: "Psalm 43."
    , title: "Judica me, Deus"
    , vss: [ { first: "Give judgment for me, O God, and defend my cause against an ungodly people; * "
             , second: "deliver me from the deceitful and the wicked."
             , number: 1
               }
           , { first: "For you are the God of my strength; why have you put me from you? * "
             , second: "and why do I go so heavily while the enemy oppresses me?"
             , number: 2
               }
           , { first: "Send out your light and your truth, that they may lead me, * "
             , second: "and bring me to your holy hill and to your dwelling;"
             , number: 3
               }
           , { first: "That I may go to the altar of God, to the God of my joy and gladness; * "
             , second: "and on the harp I will give thanks to you, O God my God."
             , number: 4
               }
           , { first: "Why are you so full of heaviness, O my soul? * "
             , second: "and why are you so disquieted within me?"
             , number: 5
               }
           , { first: "Put your trust in God; * "
             , second: "for I will yet give thanks to him, who is the help of my countenance, and my God."
             , number: 6
               }
             ]
    }
  , 44:
    { name: "Psalm 44."
    , title: "Deus, auribus"
    , vss: [ { first: "We have heard with our ears, O God, our forefathers have told us, * "
             , second: "the deeds you did in their days, in the days of old."
             , number: 1
               }
           , { first: "How with your hand you drove the peoples out and planted our forefathers in the land; * "
             , second: "how you destroyed nations and made your people flourish."
             , number: 2
               }
           , { first: "For they did not take the land by their sword, nor did their arm win the victory for them; * "
             , second: "but your right hand, your arm, and the light of your countenance, because you favored them."
             , number: 3
               }
           , { first: "You are my King and my God; * "
             , second: "you command victories for Jacob."
             , number: 4
               }
           , { first: "Through you we pushed back our adversaries; * "
             , second: "through your Name we trampled on those who rose up against us."
             , number: 5
               }
           , { first: "For I do not rely on my bow, * "
             , second: "and my sword does not give me the victory."
             , number: 6
               }
           , { first: "Surely, you gave us victory over our adversaries * "
             , second: "and put those who hate us to shame."
             , number: 7
               }
           , { first: "Every day we gloried in God, * "
             , second: "and we will praise your Name for ever."
             , number: 8
               }
           , { first: "Nevertheless, you have rejected and humbled us * "
             , second: "and do not go forth with our armies."
             , number: 9
               }
           , { first: "You have made us fall back before our adversary, * "
             , second: "and our enemies have plundered us."
             , number: 10
               }
           , { first: "You have made us like sheep to be eaten * "
             , second: "and have scattered us among the nations."
             , number: 11
               }
           , { first: "You are selling your people for a trifle * "
             , second: "and are making no profit on the sale of them."
             , number: 12
               }
           , { first: "You have made us the scorn of our neighbors, * "
             , second: "a mockery and derision to those around us."
             , number: 13
               }
           , { first: "You have made us a byword among the nations, * "
             , second: "a laughing-stock among the peoples."
             , number: 14
               }
           , { first: "My humiliation is daily before me, * "
             , second: "and shame has covered my face;"
             , number: 15
               }
           , { first: "Because of the taunts of the mockers and blasphemers, * "
             , second: "because of the enemy and avenger."
             , number: 16
               }
           , { first: "All this has come upon us; * "
             , second: "yet we have not forgotten you, nor have we betrayed your covenant."
             , number: 17
               }
           , { first: "Our heart never turned back, * "
             , second: "nor did our footsteps stray from your path;"
             , number: 18
               }
           , { first: "Though you thrust us down into a place of misery, * "
             , second: "and covered us over with deep darkness."
             , number: 19
               }
           , { first: "If we have forgotten the Name of our God, * "
             , second: "or stretched out our hands to some strange god,"
             , number: 20
               }
           , { first: "Will not God find it out? * "
             , second: "for he knows the secrets of the heart."
             , number: 21
               }
           , { first: "Indeed, for your sake we are killed all the day long; * "
             , second: "we are accounted as sheep for the slaughter."
             , number: 22
               }
           , { first: "Awake, O Lord! why are you sleeping? * "
             , second: "Arise! do not reject us for ever."
             , number: 23
               }
           , { first: "Why have you hidden your face * "
             , second: "and forgotten our affliction and oppression?"
             , number: 24
               }
           , { first: "We sink down into the dust; * "
             , second: "our body cleaves to the ground."
             , number: 25
               }
           , { first: "Rise up, and help us, * "
             , second: "and save us, for the sake of your steadfast love."
             , number: 26
               }
             ]
    }
  , 45: 
    { name: "Psalm 45."
    , title: "Eructavit cor meum"
    , v: [   { first: "My heart is stirring with a noble song; let me recite what I have fashioned for the king; * "
             , second: "my tongue shall be the pen of a skilled writer."
             , number: 1
               }
           , { first: "You are the fairest of men; * "
             , second: "grace flows from your lips, because God has blessed you for ever."
             , number: 2
               }
           , { first: "Strap your sword upon your thigh, O mighty warrior, * "
             , second: "in your pride and in your majesty."
             , number: 3
               }
           , { first: "Ride out and conquer in the cause of truth * "
             , second: "and for the sake of justice."
             , number: 4
               }
           , { first: "Your right hand will show you marvelous things; * "
             , second: "your arrows are very sharp, O mighty warrior."
             , number: 5
               }
           , { first: "The peoples are falling at your feet, * "
             , second: "and the king’s enemies are losing heart."
             , number: 6
               }
           , { first: "Your throne, O God, endures for ever and ever, * "
             , second: "a scepter of righteousness is the scepter of your kingdom; you love righteousness and hate iniquity."
             , number: 7
               }
           , { first: "Therefore God, your God, has anointed you * "
             , second: "with the oil of gladness above your fellows."
             , number: 8
               }
           , { first: "All your garments are fragrant with myrrh, aloes, and cassia, * "
             , second: "and the music of strings from ivory palaces makes you glad."
             , number: 9
               }
           , { first: "Kings’ daughters stand among the ladies of the court; * "
             , second: "on your right hand is the queen, adorned with the gold of Ophir."
             , number: 10
               }
           , { first: "“Hear, O daughter; consider and listen closely; * "
             , second: "forget your people and your father’s house."
             , number: 11
               }
           , { first: "The king will have pleasure in your beauty; * "
             , second: "he is your master; therefore do him honor."
             , number: 12
               }
           , { first: "The people of Tyre are here with a gift; * "
             , second: "the rich among the people seek your favor.”"
             , number: 13
               }
           , { first: "All glorious is the princess as she enters; * "
             , second: "her gown is cloth-of-gold."
             , number: 14
               }
           , { first: "In embroidered apparel she is brought to the king; * "
             , second: "after her the bridesmaids follow in procession."
             , number: 15
               }
           , { first: "With joy and gladness they are brought, * "
             , second: "and enter into the palace of the king."
             , number: 16
               }
           , { first: "“In place of fathers, O king, you shall have sons; * "
             , second: "you shall make them princes over all the earth."
             , number: 17
               }
           , { first: "I will make your name to be remembered from one generation to another; * "
             , second: "therefore nations will praise you for ever and ever.”"
             , number: 18
               }
             ]
    }
  , 46:
    { name: "Psalm 46."
    , title: "Deus noster refugium"
    , vss: [ { first: "God is our refuge and strength, * "
             , second: "a very present help in trouble."
             , number: 1
               }
           , { first: "Therefore we will not fear, though the earth be moved, * "
             , second: "and though the mountains be toppled into the depths of the sea;"
             , number: 2
               }
           , { first: "Though its waters rage and foam, * "
             , second: "and though the mountains tremble at its tumult."
             , number: 3
               }
           , { first: "The Lord of hosts is with us; * "
             , second: "the God of Jacob is our stronghold."
             , number: 4
               }
           , { first: "There is a river whose streams make glad the city of God, * "
             , second: "the holy habitation of the Most High."
             , number: 5
               }
           , { first: "God is in the midst of her; she shall not be overthrown; * "
             , second: "God shall help her at the break of day."
             , number: 6
               }
           , { first: "The nations make much ado, and the kingdoms are shaken; * "
             , second: "God has spoken, and the earth shall melt away."
             , number: 7
               }
           , { first: "The Lord of hosts is with us; * "
             , second: "the God of Jacob is our stronghold."
             , number: 8
               }
           , { first: "Come now and look upon the works of the Lord, * "
             , second: "what awesome things he has done on earth."
             , number: 9
               }
           , { first: "It is he who makes war to cease in all the world; * "
             , second: "he breaks the bow, and shatters the spear, and burns the shields with fire."
             , number: 10
               }
           , { first: "“Be still, then, and know that I am God; * "
             , second: "I will be exalted among the nations; I will be exalted in the earth.”"
             , number: 11
               }
           , { first: "The Lord of hosts is with us; * "
             , second: "the God of Jacob is our stronghold."
             , number: 12
               }
             ]
    }
  , 47:
    { name: "Psalm 47."
    , title: "Omnes gentes, plaudite"
    , vss: [ { first: "Clap your hands, all you peoples; * "
             , second: "shout to God with a cry of joy."
             , number: 1
               }
           , { first: "For the Lord Most High is to be feared; * "
             , second: "he is the great King over all the earth."
             , number: 2
               }
           , { first: "He subdues the peoples under us, * "
             , second: "and the nations under our feet."
             , number: 3
               }
           , { first: "He chooses our inheritance for us, * "
             , second: "the pride of Jacob whom he loves."
             , number: 4
               }
           , { first: "God has gone up with a shout, * "
             , second: "the Lord with the sound of the ram’s-horn."
             , number: 5
               }
           , { first: "Sing praises to God, sing praises; * "
             , second: "sing praises to our King, sing praises."
             , number: 6
               }
           , { first: "For God is King of all the earth; * "
             , second: "sing praises with all your skill."
             , number: 7
               }
           , { first: "God reigns over the nations; * "
             , second: "God sits upon his holy throne."
             , number: 8
               }
           , { first: "The nobles of the peoples have gathered together * "
             , second: "with the people of the God of Abraham."
             , number: 9
               }
           , { first: "The rulers of the earth belong to God, * "
             , second: "and he is highly exalted."
             , number: 10
               }
             ]
    }
  , 48:
    { name: "Psalm 48."
    , title: "Magnus Dominus"
    , vss: [ { first: "Great is the Lord, and highly to be praised; * "
             , second: "in the city of our God is his holy hill."
             , number: 1
               }
           , { first: "Beautiful and lofty, the joy of all the earth, is the hill of Zion, * "
             , second: "the very center of the world and the city of the great King."
             , number: 2
               }
           , { first: "God is in her citadels; * "
             , second: "he is known to be her sure refuge."
             , number: 3
               }
           , { first: "Behold, the kings of the earth assembled * "
             , second: "and marched forward together."
             , number: 4
               }
           , { first: "They looked and were astounded; * "
             , second: "they retreated and fled in terror."
             , number: 5
               }
           , { first: "Trembling seized them there; * "
             , second: "they writhed like a woman in childbirth, like ships of the sea when the east wind shatters them."
             , number: 6
               }
           , { first: "As we have heard, so have we seen, in the city of the Lord of hosts, in the city of our God; * "
             , second: "God has established her for ever."
             , number: 7
               }
           , { first: "We have waited in silence on your loving-kindness, O God, * "
             , second: "in the midst of your temple."
             , number: 8
               }
           , { first: "Your praise, like your Name, O God, reaches to the world’s end; * "
             , second: "your right hand is full of justice."
             , number: 9
               }
           , { first: "Let Mount Zion be glad and the cities of Judah rejoice, * "
             , second: "because of your judgments."
             , number: 10
               }
           , { first: "Make the circuit of Zion; walk round about her; * "
             , second: "count the number of her towers."
             , number: 11
               }
           , { first: "Consider well her bulwarks; examine her strongholds; * "
             , second: "that you may tell those who come after."
             , number: 12
               }
           , { first: "This God is our God for ever and ever; * "
             , second: "he shall be our guide for evermore."
             , number: 13
               }
             ]
    }
  , 49:
    { name: "Psalm 49."
    , title: "Audite hæc, omnes"
    , vss: [ { first: "Hear this, all you peoples; hearken, all you who dwell in the world, * "
             , second: "you of high degree and low, rich and poor together."
             , number: 1
               }
           , { first: "My mouth shall speak of wisdom, * "
             , second: "and my heart shall meditate on understanding."
             , number: 2
               }
           , { first: "I will incline my ear to a proverb * "
             , second: "and set forth my riddle upon the harp."
             , number: 3
               }
           , { first: "Why should I be afraid in evil days, * "
             , second: "when the wickedness of those at my heels surrounds me,"
             , number: 4
               }
           , { first: "The wickedness of those who put their trust in their goods, * "
             , second: "and boast of their great riches?"
             , number: 5
               }
           , { first: "We can never ransom ourselves, * "
             , second: "or deliver to God the price of our life;"
             , number: 6
               }
           , { first: "For the ransom of our life is so great, * "
             , second: "that we should never have enough to pay it,"
             , number: 7
               }
           , { first: "In order to live for ever and ever, * "
             , second: "and never see the grave."
             , number: 8
               }
           , { first: "For we see that the wise die also; like the dull and stupid they perish * "
             , second: "and leave their wealth to those who come after them."
             , number: 9
               }
           , { first: "Their graves shall be their homes for ever, their dwelling places from generation to generation, * "
             , second: "though they call the lands after their own names."
             , number: 10
               }
           , { first: "Even though honored, they cannot live for ever; * "
             , second: "they are like the beasts that perish."
             , number: 11
               }
           , { first: "Such is the way of those who foolishly trust in themselves, * "
             , second: "and the end of those who delight in their own words."
             , number: 12
               }
           , { first: "Like a flock of sheep they are destined to die; Death is their shepherd; * "
             , second: "they go down straightway to the grave."
             , number: 13
               }
           , { first: "Their form shall waste away, * "
             , second: "and the land of the dead shall be their home."
             , number: 14
               }
           , { first: "But God will ransom my life; * "
             , second: "he will snatch me from the grasp of death."
             , number: 15
               }
           , { first: "Do not be envious when some become rich, * "
             , second: "or when the grandeur of their house increases;"
             , number: 16
               }
           , { first: "For they will carry nothing away at their death, * "
             , second: "nor will their grandeur follow them."
             , number: 17
               }
           , { first: "Though they thought highly of themselves while they lived, * "
             , second: "and were praised for their success,"
             , number: 18
               }
           , { first: "They shall join the company of their forebears, * "
             , second: "who will never see the light again."
             , number: 19
               }
           , { first: "Those who are honored, but have no understanding, * "
             , second: "are like the beasts that perish."
             , number: 20
               }
             ]
    }
  , 50:
    { name: "Psalm 50."
    , title: "Deus deorum"
    , vss: [ { first: "The Lord, the God of gods, has spoken; * "
             , second: "he has called the earth from the rising of the sun to its setting."
             , number: 1
               }
           , { first: "Out of Zion, perfect in its beauty, * "
             , second: "God reveals himself in glory."
             , number: 2
               }
           , { first: "Our God will come and will not keep silence; * "
             , second: "before him there is a consuming flame, and round about him a raging storm."
             , number: 3
               }
           , { first: "He calls the heavens and the earth from above * "
             , second: "to witness the judgment of his people."
             , number: 4
               }
           , { first: "“Gather before me my loyal followers, * "
             , second: "those who have made a covenant with me and sealed it with sacrifice.”"
             , number: 5
               }
           , { first: "Let the heavens declare the rightness of his cause; * "
             , second: "for God himself is judge."
             , number: 6
               }
           , { first: "Hear, O my people, and I will speak: “O Israel, I will bear witness against you; * "
             , second: "for I am God, your God."
             , number: 7
               }
           , { first: "I do not accuse you because of your sacrifices; * "
             , second: "your offerings are always before me."
             , number: 8
               }
           , { first: "I will take no bull-calf from your stalls, * "
             , second: "nor he-goats out of your pens;"
             , number: 9
               }
           , { first: "For all the beasts of the forest are mine, * "
             , second: "the herds in their thousands upon the hills."
             , number: 10
               }
           , { first: "I know every bird in the sky, * "
             , second: "and the creatures of the fields are in my sight."
             , number: 11
               }
           , { first: "If I were hungry, I would not tell you, * "
             , second: "for the whole world is mine and all that is in it."
             , number: 12
               }
           , { first: "Do you think I eat the flesh of bulls, * "
             , second: "or drink the blood of goats?"
             , number: 13
               }
           , { first: "Offer to God a sacrifice of thanksgiving * "
             , second: "and make good your vows to the Most High."
             , number: 14
               }
           , { first: "Call upon me in the day of trouble; * "
             , second: "I will deliver you, and you shall honor me.”"
             , number: 15
               }
           , { first: "But to the wicked God says: * "
             , second: "“Why do you recite my statutes, and take my covenant upon your lips;"
             , number: 16
               }
           , { first: "Since you refuse discipline, * "
             , second: "and toss my words behind your back?"
             , number: 17
               }
           , { first: "When you see a thief, you make him your friend, * "
             , second: "and you cast in your lot with adulterers."
             , number: 18
               }
           , { first: "You have loosed your lips for evil, * "
             , second: "and harnessed your tongue to a lie."
             , number: 19
               }
           , { first: "You are always speaking evil of your brother * "
             , second: "and slandering your own mother’s son."
             , number: 20
               }
           , { first: "These things you have done, and I kept still, * "
             , second: "and you thought that I am like you.”"
             , number: 21
               }
           , { first: "“I have made my accusation; * "
             , second: "I have put my case in order before your eyes."
             , number: 22
               }
           , { first: "Consider this well, you who forget God, * "
             , second: "lest I rend you and there be none to deliver you."
             , number: 23
               }
           , { first: "Whoever offers me the sacrifice of thanksgiving honors me; * "
             , second: "but to those who keep in my way will I show the salvation of God.”"
             , number: 24
               }
             ]
    }
  , 51:
    { name: "Psalm 51."
    , title: "Miserere mei, Deus"
    , vss: [ { first: "Have mercy on me, O God, according to your loving-kindness; * "
             , second: "in your great compassion blot out my offenses."
             , number: 1
               }
           , { first: "Wash me through and through from my wickedness * "
             , second: "and cleanse me from my sin."
             , number: 2
               }
           , { first: "For I know my transgressions, * "
             , second: "and my sin is ever before me."
             , number: 3
               }
           , { first: "Against you only have I sinned * "
             , second: "and done what is evil in your sight."
             , number: 4
               }
           , { first: "And so you are justified when you speak * "
             , second: "and upright in your judgment."
             , number: 5
               }
           , { first: "Indeed, I have been wicked from my birth, * "
             , second: "a sinner from my mother’s womb."
             , number: 6
               }
           , { first: "For behold, you look for truth deep within me, * "
             , second: "and will make me understand wisdom secretly."
             , number: 7
               }
           , { first: "Purge me from my sin, and I shall be pure; * "
             , second: "wash me, and I shall be clean indeed."
             , number: 8
               }
           , { first: "Make me hear of joy and gladness, * "
             , second: "that the body you have broken may rejoice."
             , number: 9
               }
           , { first: "Hide your face from my sins * "
             , second: "and blot out all my iniquities."
             , number: 10
               }
           , { first: "Create in me a clean heart, O God, * "
             , second: "and renew a right spirit within me."
             , number: 11
               }
           , { first: "Cast me not away from your presence * "
             , second: "and take not your holy Spirit from me."
             , number: 12
               }
           , { first: "Give me the joy of your saving help again * "
             , second: "and sustain me with your bountiful Spirit."
             , number: 13
               }
           , { first: "I shall teach your ways to the wicked, * "
             , second: "and sinners shall return to you."
             , number: 14
               }
           , { first: "Deliver me from death, O God, * "
             , second: "and my tongue shall sing of your righteousness, O God of my salvation."
             , number: 15
               }
           , { first: "Open my lips, O Lord, * "
             , second: "and my mouth shall proclaim your praise."
             , number: 16
               }
           , { first: "Had you desired it, I would have offered sacrifice, * "
             , second: "but you take no delight in burnt-offerings."
             , number: 17
               }
           , { first: "The sacrifice of God is a troubled spirit; * "
             , second: "a broken and contrite heart, O God, you will not despise."
             , number: 18
               }
           , { first: "Be favorable and gracious to Zion, * "
             , second: "and rebuild the walls of Jerusalem."
             , number: 19
               }
           , { first: "Then you will be pleased with the appointed sacrifices, with burnt-offerings and oblations; * "
             , second: "then shall they offer young bullocks upon your altar."
             , number: 20
               }
             ]
    }
  , 52:
    { name: "Psalm 52."
    , title: "Quid gloriaris?"
    , vss: [ { first: "You tyrant, why do you boast of wickedness * "
             , second: "against the godly all day long?"
             , number: 1
               }
           , { first: "You plot ruin; your tongue is like a sharpened razor, * "
             , second: "O worker of deception."
             , number: 2
               }
           , { first: "You love evil more than good * "
             , second: "and lying more than speaking the truth."
             , number: 3
               }
           , { first: "You love all words that hurt, * "
             , second: "O you deceitful tongue."
             , number: 4
               }
           , { first: "Oh, that God would demolish you utterly, * "
             , second: "topple you, and snatch you from your dwelling, and root you out of the land of the living!"
             , number: 5
               }
           , { first: "The righteous shall see and tremble, * "
             , second: "and they shall laugh at him, saying,"
             , number: 6
               }
           , { first: "“This is the one who did not take God for a refuge, * "
             , second: "but trusted in great wealth and relied upon wickedness.”"
             , number: 7
               }
           , { first: "But I am like a green olive tree in the house of God; * "
             , second: "I trust in the mercy of God for ever and ever."
             , number: 8
               }
           , { first: "I will give you thanks for what you have done * "
             , second: "and declare the goodness of your Name in the presence of the godly."
             , number: 9
               }
             ]
    }
  , 53:
    { name: "Psalm 53."
    , title: "Dixit insipiens"
    , vss: [ { first: "The fool has said in his heart, “There is no God.” * "
             , second: "All are corrupt and commit abominable acts; there is none who does any good."
             , number: 1
               }
           , { first: "God looks down from heaven upon us all, * "
             , second: "to see if there is any who is wise, if there is one who seeks after God."
             , number: 2
               }
           , { first: "Every one has proved faithless; all alike have turned bad; * "
             , second: "there is none who does good; no, not one."
             , number: 3
               }
           , { first: "Have they no knowledge, those evildoers * "
             , second: "who eat up my people like bread and do not call upon God?"
             , number: 4
               }
           , { first: "See how greatly they tremble, such trembling as never was; * "
             , second: "for God has scattered the bones of the enemy; they are put to shame, because God has rejected them."
             , number: 5
               }
           , { first: "Oh, that Israel’s deliverance would come out of Zion! * "
             , second: "when God restores the fortunes of his people Jacob will rejoice and Israel be glad."
             , number: 6
               }
             ]
    }
  , 54:
    { name: "Psalm 54."
    , title: "Deus, in nomine"
    , vss: [ { first: "Save me, O God, by your Name; * "
             , second: "in your might, defend my cause."
             , number: 1
               }
           , { first: "Hear my prayer, O God; * "
             , second: "give ear to the words of my mouth."
             , number: 2
               }
           , { first: "For the arrogant have risen up against me, and the ruthless have sought my life, * "
             , second: "those who have no regard for God."
             , number: 3
               }
           , { first: "Behold, God is my helper; * "
             , second: "it is the Lord who sustains my life."
             , number: 4
               }
           , { first: "Render evil to those who spy on me; * "
             , second: "in your faithfulness, destroy them."
             , number: 5
               }
           , { first: "I will offer you a freewill sacrifice * "
             , second: "and praise your Name, O Lord, for it is good."
             , number: 6
               }
           , { first: "For you have rescued me from every trouble, * "
             , second: "and my eye has seen the ruin of my foes."
             , number: 7
               }
             ]
    }
  , 55:
    { name: "Psalm 55."
    , title: "Exaudi, Deus"
    , vss: [ { first: "Hear my prayer, O God; * "
             , second: "do not hide yourself from my petition."
             , number: 1
               }
           , { first: "Listen to me and answer me; * "
             , second: "I have no peace, because of my cares."
             , number: 2
               }
           , { first: "I am shaken by the noise of the enemy * "
             , second: "and by the pressure of the wicked;"
             , number: 3
               }
           , { first: "For they have cast an evil spell upon me * "
             , second: "and are set against me in fury."
             , number: 4
               }
           , { first: "My heart quakes within me, * "
             , second: "and the terrors of death have fallen upon me."
             , number: 5
               }
           , { first: "Fear and trembling have come over me, * "
             , second: "and horror overwhelms me."
             , number: 6
               }
           , { first: "And I said, “Oh, that I had wings like a dove! * "
             , second: "I would fly away and be at rest."
             , number: 7
               }
           , { first: "I would flee to a far-off place * "
             , second: "and make my lodging in the wilderness."
             , number: 8
               }
           , { first: "I would hasten to escape * "
             , second: "from the stormy wind and tempest.”"
             , number: 9
               }
           , { first: "Swallow them up, O Lord; confound their speech; * "
             , second: "for I have seen violence and strife in the city."
             , number: 10
               }
           , { first: "Day and night the watchmen make their rounds upon her walls, * "
             , second: "but trouble and misery are in the midst of her."
             , number: 11
               }
           , { first: "There is corruption at her heart; * "
             , second: "her streets are never free of oppression and deceit."
             , number: 12
               }
           , { first: "For had it been an adversary who taunted me, then I could have borne it; * "
             , second: "or had it been an enemy who vaunted himself against me, then I could have hidden from him."
             , number: 13
               }
           , { first: "But it was you, a man after my own heart, * "
             , second: "my companion, my own familiar friend."
             , number: 14
               }
           , { first: "We took sweet counsel together, * "
             , second: "and walked with the throng in the house of God."
             , number: 15
               }
           , { first: "Let death come upon them suddenly; let them go down alive into the grave; * "
             , second: "for wickedness is in their dwellings, in their very midst."
             , number: 16
               }
           , { first: "But I will call upon God, * "
             , second: "and the Lord will deliver me."
             , number: 17
               }
           , { first: "In the evening, in the morning, and at noonday, I will complain and lament, * "
             , second: "and he will hear my voice."
             , number: 18
               }
           , { first: "He will bring me safely back from the battle waged against me; * "
             , second: "for there are many who fight me."
             , number: 19
               }
           , { first: "God, who is enthroned of old, will hear me and bring them down; * "
             , second: "they never change; they do not fear God."
             , number: 20
               }
           , { first: "My companion stretched forth his hand against his comrade; * "
             , second: "he has broken his covenant."
             , number: 21
               }
           , { first: "His speech is softer than butter, * "
             , second: "but war is in his heart."
             , number: 22
               }
           , { first: "His words are smoother than oil, * "
             , second: "but they are drawn swords."
             , number: 23
               }
           , { first: "Cast your burden upon the Lord, and he will sustain you; * "
             , second: "he will never let the righteous stumble."
             , number: 24
               }
           , { first: "For you will bring the bloodthirsty and deceitful * "
             , second: "down to the pit of destruction, O God."
             , number: 25
               }
           , { first: "They shall not live out half their days, * "
             , second: "but I will put my trust in you."
             , number: 26
               }
             ]
    }
  , 56:
    { name: "Psalm 56."
    , title: "Miserere mei, Deus"
    , vss: [ { first: "Have mercy on me, O God, for my enemies are hounding me; * "
             , second: "all day long they assault and oppress me."
             , number: 1
               }
           , { first: "They hound me all the day long; * "
             , second: "truly there are many who fight against me, O Most High."
             , number: 2
               }
           , { first: "Whenever I am afraid, * "
             , second: "I will put my trust in you."
             , number: 3
               }
           , { first: "In God, whose word I praise, In God I trust and will not be afraid, * "
             , second: "for what can flesh do to me?"
             , number: 4
               }
           , { first: "All day long they damage my cause; * "
             , second: "their only thought is to do me evil."
             , number: 5
               }
           , { first: "They band together; they lie in wait; * "
             , second: "they spy upon my footsteps; because they seek my life."
             , number: 6
               }
           , { first: "Shall they escape despite their wickedness? * "
             , second: "O God, in your anger, cast down the peoples."
             , number: 7
               }
           , { first: "You have noted my lamentation; put my tears into your bottle; * "
             , second: "are they not recorded in your book?"
             , number: 8
               }
           , { first: "Whenever I call upon you, my enemies will be put to flight; * "
             , second: "this I know, for God is on my side."
             , number: 9
               }
           , { first: "In God the Lord, whose word I praise, in God I trust and will not be afraid, * "
             , second: "for what can mortals do to me?"
             , number: 10
               }
           , { first: "I am bound by the vow I made to you, O God; * "
             , second: "I will present to you thank-offerings;"
             , number: 11
               }
           , { first: "For you have rescued my soul from death and my feet from stumbling, * "
             , second: "that I may walk before God in the light of the living."
             , number: 12
               }
             ]
    }
  , 57:
    { name: "Psalm 57."
    , title: "Miserere mei, Deus"
    , vss: [ { first: "Be merciful to me, O God, be merciful, for I have taken refuge in you; * "
             , second: "in the shadow of your wings will I take refuge until this time of trouble has gone by."
             , number: 1
               }
           , { first: "I will call upon the Most High God, * "
             , second: "the God who maintains my cause."
             , number: 2
               }
           , { first: "He will send from heaven and save me; he will confound those who trample upon me; * "
             , second: "God will send forth his love and his faithfulness."
             , number: 3
               }
           , { first: "I lie in the midst of lions that devour the people; * "
             , second: "their teeth are spears and arrows, their tongue a sharp sword."
             , number: 4
               }
           , { first: "They have laid a net for my feet, and I am bowed low; * "
             , second: "they have dug a pit before me, but have fallen into it themselves."
             , number: 5
               }
           , { first: "Exalt yourself above the heavens, O God, * "
             , second: "and your glory over all the earth."
             , number: 6
               }
           , { first: "My heart is firmly fixed, O God, my heart is fixed; * "
             , second: "I will sing and make melody."
             , number: 7
               }
           , { first: "Wake up, my spirit;awake, lute and harp; * "
             , second: "I myself will waken the dawn."
             , number: 8
               }
           , { first: "I will confess you among the peoples, O Lord; * "
             , second: "I will sing praise to you among the nations."
             , number: 9
               }
           , { first: "For your loving-kindness is greater than the heavens, * "
             , second: "and your faithfulness reaches to the clouds."
             , number: 10
               }
           , { first: "Exalt yourself above the heavens, O God, * "
             , second: "and your glory over all the earth."
             , number: 11
               }
             ]
    }
  , 58:
    { name: "Psalm 58."
    , title: "Si vere utique"
    , vss: [ { first: "Do you indeed decree righteousness, you rulers? * "
             , second: "do you judge the peoples with equity?"
             , number: 1
               }
           , { first: "No; you devise evil in your hearts, * "
             , second: "and your hands deal out violence in the land."
             , number: 2
               }
           , { first: "The wicked are perverse from the womb; * "
             , second: "liars go astray from their birth."
             , number: 3
               }
           , { first: "They are as venomous as a serpent, * "
             , second: "they are like the deaf adder which stops its ears,"
             , number: 4
               }
           , { first: "Which does not heed the voice of the charmer, * "
             , second: "no matter how skillful his charming."
             , number: 5
               }
           , { first: "O God, break their teeth in their mouths; * "
             , second: "pull the fangs of the young lions, O Lord."
             , number: 6
               }
           , { first: "Let them vanish like water that runs off; * "
             , second: "let them wither like trodden grass."
             , number: 7
               }
           , { first: "Let them be like the snail that melts away, * "
             , second: "like a stillborn child that never sees the sun."
             , number: 8
               }
           , { first: "Before they bear fruit, let them be cut down like a brier; * "
             , second: "like thorns and thistles let them be swept away."
             , number: 9
               }
           , { first: "The righteous will be glad when they see the vengeance; * "
             , second: "they will bathe their feet in the blood of the wicked."
             , number: 10
               }
           , { first: "And they will say, “Surely, there is a reward for the righteous; * "
             , second: "surely, there is a God who rules in the earth.”"
             , number: 11
               }
             ]
    }
  , 59:
    { name: "Psalm 59."
    , title: "Eripe me de inimicis"
    , vss: [ { first: "Rescue me from my enemies, O God; * "
             , second: "protect me from those who rise up against me."
             , number: 1
               }
           , { first: "Rescue me from evildoers * "
             , second: "and save me from those who thirst for my blood."
             , number: 2
               }
           , { first: "See how they lie in wait for my life, how the mighty gather together against me; * "
             , second: "not for any offense or fault of mine, O Lord."
             , number: 3
               }
           , { first: "Not because of any guilt of mine * "
             , second: "they run and prepare themselves for battle."
             , number: 4
               }
           , { first: "Rouse yourself, come to my side, and see; * "
             , second: "for you, Lord God of hosts, are Israel’s God."
             , number: 5
               }
           , { first: "Awake, and punish all the ungodly; * "
             , second: "show no mercy to those who are faithless and evil."
             , number: 6
               }
           , { first: "They go to and fro in the evening; * "
             , second: "they snarl like dogs and run about the city."
             , number: 7
               }
           , { first: "Behold, they boast with their mouths, and taunts are on their lips; * "
             , second: "“For who,” they say, “will hear us?”"
             , number: 8
               }
           , { first: "But you, O Lord, you laugh at them; * "
             , second: "you laugh all the ungodly to scorn."
             , number: 9
               }
           , { first: "My eyes are fixed on you, O my Strength; * "
             , second: "for you, O God, are my stronghold."
             , number: 10
               }
           , { first: "My merciful God comes to meet me; * "
             , second: "God will let me look in triumph on my enemies."
             , number: 11
               }
           , { first: "Slay them, O God, lest my people forget; * "
             , second: "send them reeling by your might and put them down, O Lord our shield."
             , number: 12
               }
           , { first: "For the sins of their mouths, for the words of their lips, for the cursing and lies that they utter, * "
             , second: "let them be caught in their pride."
             , number: 13
               }
           , { first: "Make an end of them in your wrath; * "
             , second: "make an end of them, and they shall be no more."
             , number: 14
               }
           , { first: "Let everyone know that God rules in Jacob, * "
             , second: "and to the ends of the earth."
             , number: 15
               }
           , { first: "They go to and fro in the evening; * "
             , second: "they snarl like dogs and run about the city."
             , number: 16
               }
           , { first: "They forage for food, * "
             , second: "and if they are not filled, they howl."
             , number: 17
               }
           , { first: "For my part, I will sing of your strength; * "
             , second: "I will celebrate your love in the morning;"
             , number: 18
               }
           , { first: "For you have become my stronghold, * "
             , second: "a refuge in the day of my trouble."
             , number: 19
               }
           , { first: "To you, O my Strength, will I sing; * "
             , second: "for you, O God, are my stronghold and my merciful God."
             , number: 20
               }
             ]
    }
  , 60:
    { name: "Psalm 60."
    , title: "Deus, repulisti nos"
    , vss: [ { first: "O God, you have cast us off and broken us; * "
             , second: "you have been angry; oh, take us back to you again."
             , number: 1
               }
           , { first: "You have shaken the earth and split it open; * "
             , second: "repair the cracks in it, for it totters."
             , number: 2
               }
           , { first: "You have made your people know hardship; * "
             , second: "you have given us wine that makes us stagger."
             , number: 3
               }
           , { first: "You have set up a banner for those who fear you, * "
             , second: "to be a refuge from the power of the bow."
             , number: 4
               }
           , { first: "Save us by your right hand and answer us, * "
             , second: "that those who are dear to you may be delivered."
             , number: 5
               }
           , { first: "God spoke from his holy place and said: * "
             , second: "“I will exult and parcel out Shechem; I will divide the valley of Succoth."
             , number: 6
               }
           , { first: "Gilead is mine and Manasseh is mine; * "
             , second: "Ephraim is my helmet and Judah my scepter."
             , number: 7
               }
           , { first: "Moab is my wash-basin, on Edom I throw down my sandal to claim it, * "
             , second: "and over Philistia will I shout in triumph.”"
             , number: 8
               }
           , { first: "Who will lead me into the strong city? * "
             , second: "who will bring me into Edom?"
             , number: 9
               }
           , { first: "Have you not cast us off, O God? * "
             , second: "you no longer go out, O God, with our armies."
             , number: 10
               }
           , { first: "Grant us your help against the enemy, * "
             , second: "for vain is the help of man."
             , number: 11
               }
           , { first: "With God we will do valiant deeds, * "
             , second: "and he shall tread our enemies under foot."
             , number: 12
               }
             ]
    }
  , 61:
    { name: "Psalm 61."
    , title: "Exaudi, Deus"
    , vss: [ { first: "Hear my cry, O God, * "
             , second: "and listen to my prayer."
             , number: 1
               }
           , { first: "I call upon you from the ends of the earth with heaviness in my heart; * "
             , second: "set me upon the rock that is higher than I."
             , number: 2
               }
           , { first: "For you have been my refuge, * "
             , second: "a strong tower against the enemy."
             , number: 3
               }
           , { first: "I will dwell in your house for ever; * "
             , second: "I will take refuge under the cover of your wings."
             , number: 4
               }
           , { first: "For you, O God, have heard my vows; * "
             , second: "you have granted me the heritage of those who fear your Name."
             , number: 5
               }
           , { first: "Add length of days to the king’s life; * "
             , second: "let his years extend over many generations."
             , number: 6
               }
           , { first: "Let him sit enthroned before God for ever; * "
             , second: "bid love and faithfulness watch over him."
             , number: 7
               }
           , { first: "So will I always sing the praise of your Name, * "
             , second: "and day by day I will fulfill my vows."
             , number: 8
               }
             ]
    }
  , 62:
    { name: "Psalm 62."
    , title: "Nonne Deo?"
    , vss: [ { first: "For God alone my soul in silence waits; * "
             , second: "from him comes my salvation."
             , number: 1
               }
           , { first: "He alone is my rock and my salvation, * "
             , second: "my stronghold, so that I shall not be greatly shaken."
             , number: 2
               }
           , { first: "How long will you assail me to crush me, all of you together, * "
             , second: "as if you were a leaning fence, a toppling wall?"
             , number: 3
               }
           , { first: "They seek only to bring me down from my place of honor; * "
             , second: "lies are their chief delight."
             , number: 4
               }
           , { first: "They bless with their lips, * "
             , second: "but in their hearts they curse."
             , number: 5
               }
           , { first: "For God alone my soul in silence waits; * "
             , second: "truly, my hope is in him."
             , number: 6
               }
           , { first: "He alone is my rock and my salvation, * "
             , second: "my stronghold, so that I shall not be shaken."
             , number: 7
               }
           , { first: "In God is my safety and my honor; * "
             , second: "God is my strong rock and my refuge."
             , number: 8
               }
           , { first: "Put your trust in him always, O people, * "
             , second: "pour out your hearts before him, for God is our refuge."
             , number: 9
               }
           , { first: "Those of high degree are but a fleeting breath, * "
             , second: "even those of low estate cannot be trusted."
             , number: 10
               }
           , { first: "On the scales they are lighter than a breath, * "
             , second: "all of them together."
             , number: 11
               }
           , { first: "Put no trust in extortion; in robbery take no empty pride; * "
             , second: "though wealth increase, set not your heart upon it."
             , number: 12
               }
           , { first: "God has spoken once, twice have I heard it, * "
             , second: "that power belongs to God."
             , number: 13
               }
           , { first: "Steadfast love is yours, O Lord, * "
             , second: "for you repay everyone according to his deeds."
             , number: 14
               }
             ]
    }
  , 63:
    { name: "Psalm 63."
    , title: "Deus, Deus meus"
    , vss: [ { first: "O God, you are my God; eagerly I seek you; * "
             , second: "my soul thirsts for you, my flesh faints for you, as in a barren and dry land where there is no water."
             , number: 1
               }
           , { first: "Therefore I have gazed upon you in your holy place, * "
             , second: "that I might behold your power and your glory."
             , number: 2
               }
           , { first: "For your loving-kindness is better than life itself; * "
             , second: "my lips shall give you praise."
             , number: 3
               }
           , { first: "So will I bless you as long as I live * "
             , second: "and lift up my hands in your Name."
             , number: 4
               }
           , { first: "My soul is content, as with marrow and fatness, * "
             , second: "and my mouth praises you with joyful lips,"
             , number: 5
               }
           , { first: "When I remember you upon my bed, * "
             , second: "and meditate on you in the night watches."
             , number: 6
               }
           , { first: "For you have been my helper, * "
             , second: "and under the shadow of your wings I will rejoice."
             , number: 7
               }
           , { first: "My soul clings to you; * "
             , second: "your right hand holds me fast."
             , number: 8
               }
           , { first: "May those who seek my life to destroy it * "
             , second: "go down into the depths of the earth;"
             , number: 9
               }
           , { first: "Let them fall upon the edge of the sword, * "
             , second: "and let them be food for jackals."
             , number: 10
               }
           , { first: "But the king will rejoice in God; all those who swear by him will be glad; * "
             , second: "for the mouth of those who speak lies shall be stopped."
             , number: 11
               }
             ]
    }
  , 64:
    { name: "Psalm 64."
    , title: "Exaudi, Deus"
    , vss: [ { first: "Hear my voice, O God, when I complain; * "
             , second: "protect my life from fear of the enemy."
             , number: 1
               }
           , { first: "Hide me from the conspiracy of the wicked, * "
             , second: "from the mob of evildoers."
             , number: 2
               }
           , { first: "They sharpen their tongue like a sword, * "
             , second: "and aim their bitter words like arrows,"
             , number: 3
               }
           , { first: "That they may shoot down the blameless from ambush; * "
             , second: "they shoot without warning and are not afraid."
             , number: 4
               }
           , { first: "They hold fast to their evil course; * "
             , second: "they plan how they may hide their snares."
             , number: 5
               }
           , { first: "They say, “Who will see us? who will find out our crimes? * "
             , second: "we have thought out a perfect plot.”"
             , number: 6
               }
           , { first: "The human mind and heart are a mystery; * "
             , second: "but God will loose an arrow at them, and suddenly they will be wounded."
             , number: 7
               }
           , { first: "He will make them trip over their tongues, * "
             , second: "and all who see them will shake their heads."
             , number: 8
               }
           , { first: "Everyone will stand in awe and declare God’s deeds; * "
             , second: "they will recognize his works."
             , number: 9
               }
           , { first: "The righteous will rejoice in the Lord and put their trust in him, * "
             , second: "and all who are true of heart will glory."
             , number: 10
               }
             ]
    }
  , 65:
    { name: "Psalm 65."
    , title: "Te decet hymnus"
    , vss: [ { first: "You are to be praised, O God, in Zion; * "
             , second: "to you shall vows be performed in Jerusalem."
             , number: 1
               }
           , { first: "To you that hear prayer shall all flesh come, * "
             , second: "because of their transgressions."
             , number: 2
               }
           , { first: "Our sins are stronger than we are, * "
             , second: "but you will blot them out."
             , number: 3
               }
           , { first: "Happy are they whom you choose and draw to your courts to dwell there! * "
             , second: "they will be satisfied by the beauty of your house, by the holiness of your temple."
             , number: 4
               }
           , { first: "Awesome things will you show us in your righteousness, O God of our salvation, * "
             , second: "O Hope of all the ends of the earth and of the seas that are far away."
             , number: 5
               }
           , { first: "You make fast the mountains by your power; * "
             , second: "they are girded about with might."
             , number: 6
               }
           , { first: "You still the roaring of the seas, * "
             , second: "the roaring of their waves, and the clamor of the peoples."
             , number: 7
               }
           , { first: "Those who dwell at the ends of the earth will tremble at your marvelous signs; * "
             , second: "you make the dawn and the dusk to sing for joy."
             , number: 8
               }
           , { first: "You visit the earth and water it abundantly; you make it very plenteous; * "
             , second: "the river of God is full of water."
             , number: 9
               }
           , { first: "You prepare the grain, * "
             , second: "for so you provide for the earth."
             , number: 10
               }
           , { first: "You drench the furrows and smooth out the ridges; * "
             , second: "with heavy rain you soften the ground and bless its increase."
             , number: 11
               }
           , { first: "You crown the year with your goodness, * "
             , second: "and your paths overflow with plenty."
             , number: 12
               }
           , { first: "May the fields of the wilderness be rich for grazing, * "
             , second: "and the hills be clothed with joy."
             , number: 13
               }
           , { first: "May the meadows cover themselves with flocks, and the valleys cloak themselves with grain; * "
             , second: "let them shout for joy and sing."
             , number: 14
               }
             ]
    }
  , 66:
    { name: "Psalm 66."
    , title: "Jubilate Deo"
    , vss: [ { first: "Be joyful in God, all you lands; * "
             , second: "sing the glory of his Name; sing the glory of his praise."
             , number: 1
               }
           , { first: "Say to God, “How awesome are your deeds! * "
             , second: "because of your great strength your enemies cringe before you."
             , number: 2
               }
           , { first: "All the earth bows down before you, * "
             , second: "sings to you, sings out your Name.”"
             , number: 3
               }
           , { first: "Come now and see the works of God, * "
             , second: "how wonderful he is in his doing toward all people."
             , number: 4
               }
           , { first: "He turned the sea into dry land, so that they went through the water on foot, * "
             , second: "and there we rejoiced in him."
             , number: 5
               }
           , { first: "In his might he rules for ever; his eyes keep watch over the nations; * "
             , second: "let no rebel rise up against him."
             , number: 6
               }
           , { first: "Bless our God, you peoples; * "
             , second: "make the voice of his praise to be heard;"
             , number: 7
               }
           , { first: "Who holds our souls in life, * "
             , second: "and will not allow our feet to slip."
             , number: 8
               }
           , { first: "For you, O God, have proved us; * "
             , second: "you have tried us just as silver is tried."
             , number: 9
               }
           , { first: "You brought us into the snare; * "
             , second: "you laid heavy burdens upon our backs."
             , number: 10
               }
           , { first: "You let enemies ride over our heads; we went through fire and water; * "
             , second: "but you brought us out into a place of refreshment."
             , number: 11
               }
           , { first: "I will enter your house with burnt-offerings and will pay you my vows, * "
             , second: "which I promised with my lips and spoke with my mouth when I was in trouble."
             , number: 12
               }
           , { first: "I will offer you sacrifices of fat beasts with the smoke of rams; * "
             , second: "I will give you oxen and goats."
             , number: 13
               }
           , { first: "Come and listen, all you who fear God, * "
             , second: "and I will tell you what he has done for me."
             , number: 14
               }
           , { first: "I called out to him with my mouth, * "
             , second: "and his praise was on my tongue."
             , number: 15
               }
           , { first: "If I had found evil in my heart, * "
             , second: "the Lord would not have heard me;"
             , number: 16
               }
           , { first: "But in truth God has heard me; * "
             , second: "he has attended to the voice of my prayer."
             , number: 17
               }
           , { first: "Blessed be God, who has not rejected my prayer, * "
             , second: "nor withheld his love from me."
             , number: 18
               }
             ]
    }
  , 67:
    { name: "Psalm 67."
    , title: "Deus misereatur"
    , vss: [ { first: "May God be merciful to us and bless us, * "
             , second: "show us the light of his countenance and come to us."
             , number: 1
               }
           , { first: "Let your ways be known upon earth, * "
             , second: "your saving health among all nations."
             , number: 2
               }
           , { first: "Let the peoples praise you, O God; * "
             , second: "let all the peoples praise you."
             , number: 3
               }
           , { first: "Let the nations be glad and sing for joy, * "
             , second: "for you judge the peoples with equity and guide all the nations upon earth."
             , number: 4
               }
           , { first: "Let the peoples praise you, O God; * "
             , second: "let all the peoples praise you."
             , number: 5
               }
           , { first: "The earth has brought forth her increase; * "
             , second: "may God, our own God, give us his blessing."
             , number: 6
               }
           , { first: "May God give us his blessing, * "
             , second: "and may all the ends of the earth stand in awe of him."
             , number: 7
               }
             ]
    }
  , 68:
    { name: "Psalm 68."
    , title: "Exsurgat Deus"
    , vss: [ { first: "Let God arise, and let his enemies be scattered; * "
             , second: "let those who hate him flee before him."
             , number: 1
               }
           , { first: "Let them vanish like smoke when the wind drives it away; * "
             , second: "as the wax melts at the fire, so let the wicked perish at the presence of God."
             , number: 2
               }
           , { first: "But let the righteous be glad and rejoice before God; * "
             , second: "let them also be merry and joyful."
             , number: 3
               }
           , { first: "Sing to God, sing praises to his Name; exalt him who rides upon the heavens; * "
             , second: "Yahweh is his Name, rejoice before him!"
             , number: 4
               }
           , { first: "Father of orphans, defender of widows, * "
             , second: "God in his holy habitation!"
             , number: 5
               }
           , { first: "God gives the solitary a home and brings forth prisoners into freedom; * "
             , second: "but the rebels shall live in dry places."
             , number: 6
               }
           , { first: "O God, when you went forth before your people, * "
             , second: "when you marched through the wilderness,"
             , number: 7
               }
           , { first: "The earth shook, and the skies poured down rain, at the presence of God, the God of Sinai, * "
             , second: "at the presence of God, the God of Israel."
             , number: 8
               }
           , { first: "You sent a gracious rain, O God, upon your inheritance; * "
             , second: "you refreshed the land when it was weary."
             , number: 9
               }
           , { first: "Your people found their home in it; * "
             , second: "in your goodness, O God, you have made provision for the poor."
             , number: 10
               }
           , { first: "The Lord gave the word; * "
             , second: "great was the company of women who bore the tidings:"
             , number: 11
               }
           , { first: "“Kings with their armies are fleeing away; * "
             , second: "the women at home are dividing the spoils.”"
             , number: 12
               }
           , { first: "Though you lingered among the sheepfolds, * "
             , second: "you shall be like a dove whose wings are covered with silver, whose feathers are like green gold."
             , number: 13
               }
           , { first: "When the Almighty scattered kings, * "
             , second: "it was like snow falling in Zalmon."
             , number: 14
               }
           , { first: "O mighty mountain, O hill of Bashan! * "
             , second: "O rugged mountain, O hill of Bashan!"
             , number: 15
               }
           , { first: "Why do you look with envy, O rugged mountain, at the hill which God chose for his resting place? * "
             , second: "truly, the Lord will dwell there for ever."
             , number: 16
               }
           , { first: "The chariots of God are twenty thousand, even thousands of thousands; * "
             , second: "the Lord comes in holiness from Sinai."
             , number: 17
               }
           , { first: "You have gone up on high and led captivity captive; you have received gifts even from your enemies, * "
             , second: "that the Lord God might dwell among them."
             , number: 18
               }
           , { first: "Blessed be the Lord day by day, * "
             , second: "the God of our salvation, who bears our burdens."
             , number: 19
               }
           , { first: "He is our God, the God of our salvation; * "
             , second: "God is the Lord, by whom we escape death."
             , number: 20
               }
           , { first: "God shall crush the heads of his enemies, * "
             , second: "and the hairy scalp of those who go on still in their wickedness."
             , number: 21
               }
           , { first: "The Lord has said, “I will bring them back from Bashan; * "
             , second: "I will bring them back from the depths of the sea;"
             , number: 22
               }
           , { first: "That your foot may be dipped in blood, * "
             , second: "the tongues of your dogs in the blood of your enemies.”"
             , number: 23
               }
           , { first: "They see your procession, O God, * "
             , second: "your procession into the sanctuary, my God and my King."
             , number: 24
               }
           , { first: "The singers go before, musicians follow after, * "
             , second: "in the midst of maidens playing upon the hand-drums."
             , number: 25
               }
           , { first: "Bless God in the congregation; * "
             , second: "bless the Lord, you that are of the fountain of Israel."
             , number: 26
               }
           , { first: "There is Benjamin, least of the tribes, at the head; the princes of Judah in a company; * "
             , second: "and the princes of Zebulon and Naphtali."
             , number: 27
               }
           , { first: "Send forth your strength, O God; * "
             , second: "establish, O God, what you have wrought for us."
             , number: 28
               }
           , { first: "Kings shall bring gifts to you, * "
             , second: "for your temple’s sake at Jerusalem."
             , number: 29
               }
           , { first: "Rebuke the wild beast of the reeds, * "
             , second: "and the peoples, a herd of wild bulls with its calves."
             , number: 30
               }
           , { first: "Trample down those who lust after silver; * "
             , second: "scatter the peoples that delight in war."
             , number: 31
               }
           , { first: "Let tribute be brought out of Egypt; * "
             , second: "let Ethiopia stretch out her hands to God."
             , number: 32
               }
           , { first: "Sing to God, O kingdoms of the earth; * "
             , second: "sing praises to the Lord."
             , number: 33
               }
           , { first: "He rides in the heavens, the ancient heavens; * "
             , second: "he sends forth his voice, his mighty voice."
             , number: 34
               }
           , { first: "Ascribe power to God; * "
             , second: "his majesty is over Israel; his strength is in the skies."
             , number: 35
               }
           , { first: "How wonderful is God in his holy places! * "
             , second: "the God of Israel giving strength and power to his people! Blessed be God!"
             , number: 36
               }
             ]
    }
  , 69:
    { name: "Psalm 69."
    , title: "Salvum me fac"
    , vss: [ { first: "Save me, O God, * "
             , second: "for the waters have risen up to my neck."
             , number: 1
               }
           , { first: "I am sinking in deep mire, * "
             , second: "and there is no firm ground for my feet."
             , number: 2
               }
           , { first: "I have come into deep waters, * "
             , second: "and the torrent washes over me."
             , number: 3
               }
           , { first: "I have grown weary with my crying; my throat is inflamed; * "
             , second: "my eyes have failed from looking for my God."
             , number: 4
               }
           , { first: "Those who hate me without a cause are more than the hairs of my head; my lying foes who would destroy me are mighty. * "
             , second: "Must I then give back what I never stole?"
             , number: 5
               }
           , { first: "O God, you know my foolishness, * "
             , second: "and my faults are not hidden from you."
             , number: 6
               }
           , { first: "Let not those who hope in you be put to shame through me, Lord God of hosts; * "
             , second: "let not those who seek you be disgraced because of me, O God of Israel."
             , number: 7
               }
           , { first: "Surely, for your sake have I suffered reproach, * "
             , second: "and shame has covered my face."
             , number: 8
               }
           , { first: "I have become a stranger to my own kindred, * "
             , second: "an alien to my mother’s children."
             , number: 9
               }
           , { first: "Zeal for your house has eaten me up; * "
             , second: "the scorn of those who scorn you has fallen upon me."
             , number: 10
               }
           , { first: "I humbled myself with fasting, * "
             , second: "but that was turned to my reproach."
             , number: 11
               }
           , { first: "I put on sack-cloth also, * "
             , second: "and became a byword among them."
             , number: 12
               }
           , { first: "Those who sit at the gate murmur against me, * "
             , second: "and the drunkards make songs about me."
             , number: 13
               }
           , { first: "But as for me, this is my prayer to you, * "
             , second: "at the time you have set, O Lord:"
             , number: 14
               }
           , { first: "“In your great mercy, O God, * "
             , second: "answer me with your unfailing help."
             , number: 15
               }
           , { first: "Save me from the mire; do not let me sink; * "
             , second: "let me be rescued from those who hate me and out of the deep waters."
             , number: 16
               }
           , { first: "Let not the torrent of waters wash over me, neither let the deep swallow me up; * "
             , second: "do not let the Pit shut its mouth upon me."
             , number: 17
               }
           , { first: "Answer me, O Lord, for your love is kind; * "
             , second: "in your great compassion, turn to me.”"
             , number: 18
               }
           , { first: "“Hide not your face from your servant; * "
             , second: "be swift and answer me, for I am in distress."
             , number: 19
               }
           , { first: "Draw near to me and redeem me; * "
             , second: "because of my enemies deliver me."
             , number: 20
               }
           , { first: "You know my reproach, my shame, and my dishonor; * "
             , second: "my adversaries are all in your sight.”"
             , number: 21
               }
           , { first: "Reproach has broken my heart, and it cannot be healed; * "
             , second: "I looked for sympathy, but there was none, for comforters, but I could find no one."
             , number: 22
               }
           , { first: "They gave me gall to eat, * "
             , second: "and when I was thirsty, they gave me vinegar to drink."
             , number: 23
               }
           , { first: "Let the table before them be a trap * "
             , second: "and their sacred feasts a snare."
             , number: 24
               }
           , { first: "Let their eyes be darkened, that they may not see, * "
             , second: "and give them continual trembling in their loins."
             , number: 25
               }
           , { first: "Pour out your indignation upon them, * "
             , second: "and let the fierceness of your anger overtake them."
             , number: 26
               }
           , { first: "Let their camp be desolate, * "
             , second: "and let there be none to dwell in their tents."
             , number: 27
               }
           , { first: "For they persecute him whom you have stricken * "
             , second: "and add to the pain of those whom you have pierced."
             , number: 28
               }
           , { first: "Lay to their charge guilt upon guilt, * "
             , second: "and let them not receive your vindication."
             , number: 29
               }
           , { first: "Let them be wiped out of the book of the living * "
             , second: "and not be written among the righteous."
             , number: 30
               }
           , { first: "As for me, I am afflicted and in pain; * "
             , second: "your help, O God, will lift me up on high."
             , number: 31
               }
           , { first: "I will praise the Name of God in song; * "
             , second: "I will proclaim his greatness with thanksgiving."
             , number: 32
               }
           , { first: "This will please the Lord more than an offering of oxen, * "
             , second: "more than bullocks with horns and hoofs."
             , number: 33
               }
           , { first: "The afflicted shall see and be glad; * "
             , second: "you who seek God, your heart shall live."
             , number: 34
               }
           , { first: "For the Lord listens to the needy, * "
             , second: "and his prisoners he does not despise."
             , number: 35
               }
           , { first: "Let the heavens and the earth praise him, * "
             , second: "the seas and all that moves in them;"
             , number: 36
               }
           , { first: "For God will save Zion and rebuild the cities of Judah; * "
             , second: "they shall live there and have it in possession."
             , number: 37
               }
           , { first: "The children of his servants will inherit it, * "
             , second: "and those who love his Name will dwell therein."
             , number: 38
               }
             ]
    }
  , 70:
    { name: "Psalm 70."
    , title: "Deus, in adjutorium"
    , vss: [ { first: "Be pleased, O God, to deliver me; * "
             , second: "O Lord, make haste to help me."
             , number: 1
               }
           , { first: "Let those who seek my life be ashamed and altogether dismayed; * "
             , second: "let those who take pleasure in my misfortune draw back and be disgraced."
             , number: 2
               }
           , { first: "Let those who say to me “Aha!” and gloat over me turn back, * "
             , second: "because they are ashamed."
             , number: 3
               }
           , { first: "Let all who seek you rejoice and be glad in you; * "
             , second: "let those who love your salvation say for ever, “Great is the Lord!”"
             , number: 4
               }
           , { first: "But as for me, I am poor and needy; * "
             , second: "come to me speedily, O God."
             , number: 5
               }
           , { first: "You are my helper and my deliverer; * "
             , second: "O Lord, do not tarry."
             , number: 6
               }
             ]
    }
  , 71:
    { name: "Psalm 71."
    , title: "In te, Domine, speravi"
    , vss: [ { first: "In you, O Lord, have I taken refuge; * "
             , second: "let me never be ashamed."
             , number: 1
               }
           , { first: "In your righteousness, deliver me and set me free; * "
             , second: "incline your ear to me and save me."
             , number: 2
               }
           , { first: "Be my strong rock, a castle to keep me safe; * "
             , second: "you are my crag and my stronghold."
             , number: 3
               }
           , { first: "Deliver me, my God, from the hand of the wicked, * "
             , second: "from the clutches of the evildoer and the oppressor."
             , number: 4
               }
           , { first: "For you are my hope, O Lord God, * "
             , second: "my confidence since I was young."
             , number: 5
               }
           , { first: "I have been sustained by you ever since I was born; from my mother’s womb you have been my strength; * "
             , second: "my praise shall be always of you."
             , number: 6
               }
           , { first: "I have become a portent to many; * "
             , second: "but you are my refuge and my strength."
             , number: 7
               }
           , { first: "Let my mouth be full of your praise * "
             , second: "and your glory all the day long."
             , number: 8
               }
           , { first: "Do not cast me off in my old age; * "
             , second: "forsake me not when my strength fails."
             , number: 9
               }
           , { first: "For my enemies are talking against me, * "
             , second: "and those who lie in wait for my life take counsel together."
             , number: 10
               }
           , { first: "They say, “God has forsaken him; go after him and seize him; * "
             , second: "because there is none who will save.”"
             , number: 11
               }
           , { first: "O God, be not far from me; * "
             , second: "come quickly to help me, O my God."
             , number: 12
               }
           , { first: "Let those who set themselves against me be put to shame and be disgraced; * "
             , second: "let those who seek to do me evil be covered with scorn and reproach."
             , number: 13
               }
           , { first: "But I shall always wait in patience, * "
             , second: "and shall praise you more and more."
             , number: 14
               }
           , { first: "My mouth shall recount your mighty acts and saving deeds all day long; * "
             , second: "though I cannot know the number of them."
             , number: 15
               }
           , { first: "I will begin with the mighty works of the Lord God; * "
             , second: "I will recall your righteousness, yours alone."
             , number: 16
               }
           , { first: "O God, you have taught me since I was young, * "
             , second: "and to this day I tell of your wonderful works."
             , number: 17
               }
           , { first: "And now that I am old and gray-headed, O God, do not forsake me, * "
             , second: "till I make known your strength to this generation and your power to all who are to come."
             , number: 19
               }
           , { first: "Your righteousness, O God, reaches to the heavens; * "
             , second: "you have done great things; who is like you, O God?"
             , number: 20
               }
           , { first: "You have showed me great troubles and adversities, * "
             , second: "but you will restore my life and bring me up again from the deep places of the earth."
             , number: 21
               }
           , { first: "You strengthen me more and more; * "
             , second: "you enfold and comfort me,"
             , number: 22
               }
           , { first: "Therefore I will praise you upon the lyre for your faithfulness, O my God; * "
             , second: "I will sing to you with the harp, O Holy One of Israel."
             , number: 23
               }
           , { first: "My lips will sing with joy when I play to you, * "
             , second: "and so will my soul, which you have redeemed."
             , number: 24
               }
           , { first: "My tongue will proclaim your righteousness all day long, * "
             , second: "for they are ashamed and disgraced who sought to do me harm."
             , number: 25
               }
             ]
    }
  , 72:
    { name: "Psalm 72."
    , title: "Deus, judicium"
    , vss: [ { first: "Give the King your justice, O God, * "
             , second: "and your righteousness to the King’s Son;"
             , number: 1
               }
           , { first: "That he may rule your people righteously * "
             , second: "and the poor with justice;"
             , number: 2
               }
           , { first: "That the mountains may bring prosperity to the people, * "
             , second: "and the little hills bring righteousness."
             , number: 3
               }
           , { first: "He shall defend the needy among the people; * "
             , second: "he shall rescue the poor and crush the oppressor."
             , number: 4
               }
           , { first: "He shall live as long as the sun and moon endure, * "
             , second: "from one generation to another."
             , number: 5
               }
           , { first: "He shall come down like rain upon the mown field, * "
             , second: "like showers that water the earth."
             , number: 6
               }
           , { first: "In his time shall the righteous flourish; * "
             , second: "there shall be abundance of peace till the moon shall be no more."
             , number: 7
               }
           , { first: "He shall rule from sea to sea, * "
             , second: "and from the River to the ends of the earth."
             , number: 8
               }
           , { first: "His foes shall bow down before him, * "
             , second: "and his enemies lick the dust."
             , number: 9
               }
           , { first: "The kings of Tarshish and of the isles shall pay tribute, * "
             , second: "and the kings of Arabia and Saba offer gifts."
             , number: 10
               }
           , { first: "All kings shall bow down before him, * "
             , second: "and all the nations do him service."
             , number: 11
               }
           , { first: "For he shall deliver the poor who cries out in distress, *  and"
             , second: "the oppressed who has no helper."
             , number: 12
               }
           , { first: "He shall have pity on the lowly and poor; * "
             , second: "he shall preserve the lives of the needy."
             , number: 13
               }
           , { first: "He shall redeem their lives from oppression and violence, * "
             , second: "and dear shall their blood be in his sight."
             , number: 14
               }
           , { first: "Long may he live! and may there be given to him gold from Arabia; * "
             , second: "may prayer be made for him always, and may they bless him all the day long."
             , number: 15
               }
           , { first: "May there be abundance of grain on the earth, growing thick even on the hilltops; * "
             , second: "may its fruit flourish like Lebanon, and its grain like grass upon the earth."
             , number: 16
               }
           , { first: "May his Name remain for ever and be established as long as the sun endures; * "
             , second: "may all the nations bless themselves in him and call him blessed."
             , number: 17
               }
           , { first: "Blessed be the Lord God, the God of Israel, * "
             , second: "who alone does wondrous deeds!"
             , number: 18
               }
           , { first: "And blessed be his glorious Name for ever! * "
             , second: "and may all the earth be filled with his glory. Amen. Amen."
             , number: 19
               }
             ]
    }
  , 73:
    { name: "Psalm 73."
    , title: "Quam bonus Israel!"
    , vss: [ { first: "Truly, God is good to Israel, * "
             , second: "to those who are pure in heart."
             , number: 1
               }
           , { first: "But as for me, my feet had nearly slipped; * "
             , second: "I had almost tripped and fallen;"
             , number: 2
               }
           , { first: "Because I envied the proud * "
             , second: "and saw the prosperity of the wicked:"
             , number: 3
               }
           , { first: "For they suffer no pain, * "
             , second: "and their bodies are sleek and sound;"
             , number: 4
               }
           , { first: "In the misfortunes of others they have no share; * "
             , second: "they are not afflicted as others are;"
             , number: 5
               }
           , { first: "Therefore they wear their pride like a necklace * "
             , second: "and wrap their violence about them like a cloak."
             , number: 6
               }
           , { first: "Their iniquity comes from gross minds, * "
             , second: "and their hearts overflow with wicked thoughts."
             , number: 7
               }
           , { first: "They scoff and speak maliciously; * "
             , second: "out of their haughtiness they plan oppression."
             , number: 8
               }
           , { first: "They set their mouths against the heavens, * "
             , second: "and their evil speech runs through the world."
             , number: 9
               }
           , { first: "And so the people turn to them * "
             , second: "and find in them no fault."
             , number: 10
               }
           , { first: "They say, “How should God know? * "
             , second: "is there knowledge in the Most High?”"
             , number: 11
               }
           , { first: "So then, these are the wicked; * "
             , second: "always at ease, they increase their wealth."
             , number: 12
               }
           , { first: "In vain have I kept my heart clean, * "
             , second: "and washed my hands in innocence."
             , number: 13
               }
           , { first: "I have been afflicted all day long, * "
             , second: "and punished every morning."
             , number: 14
               }
           , { first: "Had I gone on speaking this way, * "
             , second: "I should have betrayed the generation of your children."
             , number: 15
               }
           , { first: "When I tried to understand these things, * "
             , second: "it was too hard for me;"
             , number: 16
               }
           , { first: "Until I entered the sanctuary of God * "
             , second: "and discerned the end of the wicked."
             , number: 17
               }
           , { first: "Surely, you set them in slippery places; * "
             , second: "you cast them down in ruin."
             , number: 18
               }
           , { first: "Oh, how suddenly do they come to destruction, * "
             , second: "come to an end, and perish from terror!"
             , number: 19
               }
           , { first: "Like a dream when one awakens, O Lord, * "
             , second: "when you arise you will make their image vanish."
             , number: 20
               }
           , { first: "When my mind became embittered, * "
             , second: "I was sorely wounded in my heart."
             , number: 21
               }
           , { first: "I was stupid and had no understanding; * "
             , second: "I was like a brute beast in your presence."
             , number: 22
               }
           , { first: "Yet I am always with you; * "
             , second: "you hold me by my right hand."
             , number: 23
               }
           , { first: "You will guide me by your counsel, * "
             , second: "and afterwards receive me with glory."
             , number: 24
               }
           , { first: "Whom have I in heaven but you? * "
             , second: "and having you I desire nothing upon earth."
             , number: 25
               }
           , { first: "Though my flesh and my heart should waste away, * "
             , second: "God is the strength of my heart and my portion for ever."
             , number: 26
               }
           , { first: "Truly, those who forsake you will perish; * "
             , second: "you destroy all who are unfaithful."
             , number: 27
               }
           , { first: "But it is good for me to be near God; * "
             , second: "I have made the Lord God my refuge."
             , number: 28
               }
           , { first: "I will speak of all your works * "
             , second: "in the gates of the city of Zion."
             , number: 29
               }
             ]
    }
  , 74:
    { name: "Psalm 74."
    , title: "Ut quid, Deus?"
    , vss: [ { first: "O God, why have you utterly cast us off? * "
             , second: "why is your wrath so hot against the sheep of your pasture?"
             , number: 1
               }
           , { first: "Remember your congregation that you purchased long ago, * "
             , second: "the tribe you redeemed to be your inheritance, and Mount Zion where you dwell."
             , number: 2
               }
           , { first: "Turn your steps toward the endless ruins; * "
             , second: "the enemy has laid waste everything in your sanctuary."
             , number: 3
               }
           , { first: "Your adversaries roared in your holy place; * "
             , second: "they set up their banners as tokens of victory."
             , number: 4
               }
           , { first: "They were like men coming up with axes to a grove of trees; * "
             , second: "they broke down all your carved work with hatchets and hammers."
             , number: 5
               }
           , { first: "They set fire to your holy place; * "
             , second: "they defiled the dwelling-place of your Name and razed it to the ground."
             , number: 6
               }
           , { first: "They said to themselves, “Let us destroy them altogether.” * "
             , second: "They burned down all the meeting-places of God in the land."
             , number: 7
               }
           , { first: "There are no signs for us to see; there is no prophet left; * "
             , second: "there is not one among us who knows how long."
             , number: 8
               }
           , { first: "How long, O God, will the adversary scoff? * "
             , second: "will the enemy blaspheme your Name for ever?"
             , number: 9
               }
           , { first: "Why do you draw back your hand? * "
             , second: "why is your right hand hidden in your bosom?"
             , number: 10
               }
           , { first: "Yet God is my King from ancient times, * "
             , second: "victorious in the midst of the earth."
             , number: 11
               }
           , { first: "You divided the sea by your might * "
             , second: "and shattered the heads of the dragons upon the waters;"
             , number: 12
               }
           , { first: "You crushed the heads of Leviathan * "
             , second: "and gave him to the people of the desert for food."
             , number: 13
               }
           , { first: "You split open spring and torrent; * "
             , second: "you dried up ever-flowing rivers."
             , number: 14
               }
           , { first: "Yours is the day, yours also the night; * "
             , second: "you established the moon and the sun."
             , number: 15
               }
           , { first: "You fixed all the boundaries of the earth; * "
             , second: "you made both summer and winter."
             , number: 16
               }
           , { first: "Remember, O Lord, how the enemy scoffed, * "
             , second: "how a foolish people despised your Name."
             , number: 17
               }
           , { first: "Do not hand over the life of your dove to wild beasts; * "
             , second: "never forget the lives of your poor."
             , number: 18
               }
           , { first: "Look upon your covenant; * "
             , second: "the dark places of the earth are haunts of violence."
             , number: 19
               }
           , { first: "Let not the oppressed turn away ashamed; * "
             , second: "let the poor and needy praise your Name."
             , number: 20
               }
           , { first: "Arise, O God, maintain your cause; * "
             , second: "remember how fools revile you all day long."
             , number: 21
               }
           , { first: "Forget not the clamor of your adversaries, * "
             , second: "the unending tumult of those who rise up against you."
             , number: 22
               }
             ]
    }
  , 75:
    { name: "Psalm 75."
    , title: "Confitebimur tibi"
    , vss: [ { first: "We give you thanks, O God, we give you thanks, * "
             , second: "calling upon your Name and declaring all your wonderful deeds."
             , number: 1
               }
           , { first: "“I will appoint a time,” says God; * "
             , second: "“I will judge with equity."
             , number: 2
               }
           , { first: "Though the earth and all its inhabitants are quaking, * "
             , second: "I will make its pillars fast."
             , number: 3
               }
           , { first: "I will say to the boasters, ‘Boast no more,’ * "
             , second: "and to the wicked, ‘Do not toss your horns;"
             , number: 4
               }
           , { first: "Do not toss your horns so high, * "
             , second: "nor speak with a proud neck.’”"
             , number: 5
               }
           , { first: "For judgment is neither from the east nor from the west, * "
             , second: "nor yet from the wilderness or the mountains."
             , number: 6
               }
           , { first: "It is God who judges; * "
             , second: "he puts down one and lifts up another."
             , number: 7
               }
           , { first: "For in the Lord’s hand there is a cup, full of spiced and foaming wine, which he pours out, * "
             , second: "and all the wicked of the earth shall drink and drain the dregs."
             , number: 8
               }
           , { first: "But I will rejoice for ever; * "
             , second: "I will sing praises to the God of Jacob."
             , number: 9
               }
           , { first: "He shall break off all the horns of the wicked; * "
             , second: "but the horns of the righteous shall be exalted."
             , number: 10
               }
             ]
    }
  , 76:
    { name: "Psalm 76."
    , title: "Notus in Judæa"
    , vss: [ { first: "In Judah is God known; * "
             , second: "his Name is great in Israel."
             , number: 1
               }
           , { first: "At Salem is his tabernacle, * "
             , second: "and his dwelling is in Zion."
             , number: 2
               }
           , { first: "There he broke the flashing arrows, * "
             , second: "the shield, the sword, and the weapons of battle."
             , number: 3
               }
           , { first: "How glorious you are! * "
             , second: "more splendid than the everlasting mountains!"
             , number: 4
               }
           , { first: "The strong of heart have been despoiled; they sink into sleep; * "
             , second: "none of the warriors can lift a hand."
             , number: 5
               }
           , { first: "At your rebuke, O God of Jacob, * "
             , second: "both horse and rider lie stunned."
             , number: 6
               }
           , { first: "What terror you inspire! * "
             , second: "who can stand before you when you are angry?"
             , number: 7
               }
           , { first: "From heaven you pronounced judgment; * "
             , second: "the earth was afraid and was still;"
             , number: 8
               }
           , { first: "When God rose up to judgment * "
             , second: "and to save all the oppressed of the earth."
             , number: 9
               }
           , { first: "Truly, wrathful Edom will give you thanks, * "
             , second: "and the remnant of Hamath will keep your feasts."
             , number: 10
               }
           , { first: "Make a vow to the Lord your God and keep it; * "
             , second: "let all around him bring gifts to him who is worthy to be feared."
             , number: 11
               }
           , { first: "He breaks the spirit of princes, * "
             , second: "and strikes terror in the kings of the earth."
             , number: 12
               }
             ]
    }
  , 77:
    { name: "Psalm 77."
    , title: "Voce mea ad Dominum"
    , vss: [ { first: "I will cry aloud to God; * "
             , second: "I will cry aloud, and he will hear me."
             , number: 1
               }
           , { first: "In the day of my trouble I sought the Lord; * "
             , second: "my hands were stretched out by night and did not tire; I refused to be comforted."
             , number: 2
               }
           , { first: "I think of God, I am restless, * "
             , second: "I ponder, and my spirit faints."
             , number: 3
               }
           , { first: "You will not let my eyelids close; * "
             , second: "I am troubled and I cannot speak."
             , number: 4
               }
           , { first: "I consider the days of old; * "
             , second: "I remember the years long past;"
             , number: 5
               }
           , { first: "I commune with my heart in the night; * "
             , second: "I ponder and search my mind."
             , number: 6
               }
           , { first: "Will the Lord cast me off for ever? * "
             , second: "will he no more show his favor?"
             , number: 7
               }
           , { first: "Has his loving-kindness come to an end for ever? * "
             , second: "has his promise failed for evermore?"
             , number: 8
               }
           , { first: "Has God forgotten to be gracious? * "
             , second: "has he, in his anger, withheld his compassion?"
             , number: 9
               }
           , { first: "And I said, “My grief is this: * "
             , second: "the right hand of the Most High has lost its power.”"
             , number: 10
               }
           , { first: "I will remember the works of the Lord, * "
             , second: "and call to mind your wonders of old time."
             , number: 11
               }
           , { first: "I will meditate on all your acts * "
             , second: "and ponder your mighty deeds."
             , number: 12
               }
           , { first: "Your way, O God, is holy; * "
             , second: "who is so great a god as our God?"
             , number: 13
               }
           , { first: "You are the God who works wonders * "
             , second: "and have declared your power among the peoples."
             , number: 14
               }
           , { first: "By your strength you have redeemed your people, * "
             , second: "the children of Jacob and Joseph."
             , number: 15
               }
           , { first: "The waters saw you, O God; the waters saw you and trembled; * "
             , second: "the very depths were shaken."
             , number: 16
               }
           , { first: "The clouds poured out water; the skies thundered; * "
             , second: "your arrows flashed to and fro;"
             , number: 17
               }
           , { first: "The sound of your thunder was in the whirlwind; your lightnings lit up the world; * "
             , second: "the earth trembled and shook."
             , number: 18
               }
           , { first: "Your way was in the sea, and your paths in the great waters, * "
             , second: "yet your footsteps were not seen."
             , number: 19
               }
           , { first: "You led your people like a flock * "
             , second: "by the hand of Moses and Aaron."
             , number: 20
               }
             ]
    }
  , 78:
    { name: "Psalm 78."
    , title: ""
    , vss: [ { title: "Part I Attendite, popule"
             , first: "Hear my teaching, O my people; * "
             , second: "incline your ears to the words of my mouth."
             , number: 1
               }
           , { first: "I will open my mouth in a parable; * "
             , second: "I will declare the mysteries of ancient times."
             , number: 2
               }
           , { first: "That which we have heard and known, and what our forefathers have told us, * "
             , second: "we will not hide from their children."
             , number: 3
               }
           , { first: "We will recount to generations to come the praiseworthy deeds and the power of the Lord, * "
             , second: "and the wonderful works he has done."
             , number: 4
               }
           , { first: "He gave his decrees to Jacob and established a law for Israel, * "
             , second: "which he commanded them to teach their children;"
             , number: 5
               }
           , { first: "That the generations to come might know, and the children yet unborn; * "
             , second: "that they in their turn might tell it to their children;"
             , number: 6
               }
           , { first: "So that they might put their trust in God, * "
             , second: "and not forget the deeds of God, but keep his commandments;"
             , number: 7
               }
           , { first: "And not be like their forefathers, a stubborn and rebellious generation, * "
             , second: "a generation whose heart was not steadfast, and whose spirit was not faithful to God."
             , number: 8
               }
           , { first: "The people of Ephraim, armed with the bow, * "
             , second: "turned back in the day of battle;"
             , number: 9
               }
           , { first: "They did not keep the covenant of God, * "
             , second: "and refused to walk in his law;"
             , number: 10
               }
           , { first: "They forgot what he had done, * "
             , second: "and the wonders he had shown them."
             , number: 11
               }
           , { first: "He worked marvels in the sight of their forefathers, * "
             , second: "in the land of Egypt, in the field of Zoan."
             , number: 12
               }
           , { first: "He split open the sea and let them pass through; * "
             , second: "he made the waters stand up like walls."
             , number: 13
               }
           , { first: "He led them with a cloud by day, * "
             , second: "and all the night through with a glow of fire."
             , number: 14
               }
           , { first: "He split the hard rocks in the wilderness * "
             , second: "and gave them drink as from the great deep."
             , number: 15
               }
           , { first: "He brought streams out of the cliff, * "
             , second: "and the waters gushed out like rivers."
             , number: 16
               }
           , { first: "But they went on sinning against him, * "
             , second: "rebelling in the desert against the Most High."
             , number: 17
               }
           , { first: "They tested God in their hearts, * "
             , second: "demanding food for their craving."
             , number: 18
               }
           , { first: "They railed against God and said, * "
             , second: "“Can God set a table in the wilderness?"
             , number: 19
               }
           , { first: "True, he struck the rock, the waters gushed out, and the gullies overflowed; * "
             , second: "but is he able to give bread or to provide meat for his people?”"
             , number: 20
               }
           , { first: "When the Lord heard this, he was full of wrath; * "
             , second: "a fire was kindled against Jacob, and his anger mounted against Israel;"
             , number: 21
               }
           , { first: "For they had no faith in God, * "
             , second: "nor did they put their trust in his saving power."
             , number: 22
               }
           , { first: "So he commanded the clouds above * "
             , second: "and opened the doors of heaven."
             , number: 23
               }
           , { first: "He rained down manna upon them to eat * "
             , second: "and gave them grain from heaven."
             , number: 24
               }
           , { first: "So mortals ate the bread of angels; * "
             , second: "he provided for them food enough."
             , number: 25
               }
           , { first: "He caused the east wind to blow in the heavens * "
             , second: "and led out the south wind by his might."
             , number: 26
               }
           , { first: "He rained down flesh upon them like dust * "
             , second: "and wingèd birds like the sand of the sea."
             , number: 27
               }
           , { first: "He let it fall in the midst of their camp * "
             , second: "and round about their dwellings."
             , number: 28
               }
           , { first: "So they ate and were well filled, * "
             , second: "for he gave them what they craved."
             , number: 29
               }
           , { first: "But they did not stop their craving, * "
             , second: "though the food was still in their mouths."
             , number: 30
               }
           , { first: "So God’s anger mounted against them; * "
             , second: "he slew their strongest men and laid low the youth of Israel."
             , number: 31
               }
           , { first: "In spite of all this, they went on sinning * "
             , second: "and had no faith in his wonderful works."
             , number: 32
               }
           , { first: "So he brought their days to an end like a breath * "
             , second: "and their years in sudden terror."
             , number: 33
               }
           , { first: "Whenever he slew them, they would seek him, * "
             , second: "and repent, and diligently search for God."
             , number: 34
               }
           , { first: "They would remember that God was their rock, * "
             , second: "and the Most High God their redeemer."
             , number: 35
               }
           , { first: "But they flattered him with their mouths * "
             , second: "and lied to him with their tongues."
             , number: 36
               }
           , { first: "Their heart was not steadfast toward him, * "
             , second: "and they were not faithful to his covenant."
             , number: 37
               }
           , { first: "But he was so merciful that he forgave their sins and did not destroy them; * "
             , second: "many times he held back his anger and did not permit his wrath to be roused."
             , number: 38
               }
           , { first: "For he remembered that they were but flesh, * "
             , second: "a breath that goes forth and does not return."
             , number: 39
               }
           , { title: "Part II Quoties exacerbaverunt"
             , first: "How often the people disobeyed him in the wilderness * "
             , second: "and offended him in the desert!"
             , number: 40
               }
           , { first: "Again and again they tempted God * "
             , second: "and provoked the Holy One of Israel."
             , number: 41
               }
           , { first: "They did not remember his power * "
             , second: "in the day when he ransomed them from the enemy;"
             , number: 42
               }
           , { first: "How he wrought his signs in Egypt * "
             , second: "and his omens in the field of Zoan."
             , number: 43
               }
           , { first: "He turned their rivers into blood, * "
             , second: "so that they could not drink of their streams."
             , number: 44
               }
           , { first: "He sent swarms of flies among them, which ate them up, * "
             , second: "and frogs, which destroyed them."
             , number: 45
               }
           , { first: "He gave their crops to the caterpillar, * "
             , second: "the fruit of their toil to the locust."
             , number: 46
               }
           , { first: "He killed their vines with hail * "
             , second: "and their sycamores with frost."
             , number: 47
               }
           , { first: "He delivered their cattle to hailstones * "
             , second: "and their livestock to hot thunderbolts."
             , number: 48
               }
           , { first: "He poured out upon them his blazing anger: * "
             , second: "fury, indignation, and distress, a troop of destroying angels."
             , number: 49
               }
           , { first: "He gave full rein to his anger; he did not spare their souls from death; * "
             , second: "but delivered their lives to the plague."
             , number: 50
               }
           , { first: "He struck down all the firstborn of Egypt, * "
             , second: "the flower of manhood in the dwellings of Ham."
             , number: 51
               }
           , { first: "He led out his people like sheep * "
             , second: "and guided them in the wilderness like a flock."
             , number: 52
               }
           , { first: "He led them to safety, and they were not afraid; * "
             , second: "but the sea overwhelmed their enemies."
             , number: 53
               }
           , { first: "He brought them to his holy land, * "
             , second: "the mountain his right hand had won."
             , number: 54
               }
           , { first: "He drove out the Canaanites before them and apportioned an inheritance to them by lot; * "
             , second: "he made the tribes of Israel to dwell in their tents."
             , number: 55
               }
           , { first: "But they tested the Most High God, and defied him, * "
             , second: "and did not keep his commandments."
             , number: 56
               }
           , { first: "They turned away and were disloyal like their fathers; * "
             , second: "they were undependable like a warped bow."
             , number: 57
               }
           , { first: "They grieved him with their hill-altars * "
             , second: "and provoked his displeasure with their idols."
             , number: 58
               }
           , { first: "When God heard this, he was angry * "
             , second: "and utterly rejected Israel."
             , number: 59
               }
           , { first: "He forsook the shrine at Shiloh, * "
             , second: "the tabernacle where he had lived among his people."
             , number: 60
               }
           , { first: "He delivered the ark into captivity, * "
             , second: "his glory into the adversary’s hand."
             , number: 61
               }
           , { first: "He gave his people to the sword * "
             , second: "and was angered against his inheritance."
             , number: 62
               }
           , { first: "The fire consumed their young men; * "
             , second: "there were no wedding songs for their maidens."
             , number: 63
               }
           , { first: "Their priests fell by the sword, * "
             , second: "and their widows made no lamentation."
             , number: 64
               }
           , { first: "Then the Lord woke as though from sleep, * "
             , second: "like a warrior refreshed with wine."
             , number: 65
               }
           , { first: "He struck his enemies on the backside * "
             , second: "and put them to perpetual shame."
             , number: 66
               }
           , { first: "He rejected the tent of Joseph * "
             , second: "and did not choose the tribe of Ephraim;"
             , number: 67
               }
           , { first: "He chose instead the tribe of Judah * "
             , second: "and Mount Zion, which he loved."
             , number: 68
               }
           , { first: "He built his sanctuary like the heights of heaven, * "
             , second: "like the earth which he founded for ever."
             , number: 69
               }
           , { first: "He chose David his servant, * "
             , second: "and took him away from the sheepfolds."
             , number: 70
               }
           , { first: "He brought him from following the ewes, * "
             , second: "to be a shepherd over Jacob his people and over Israel his inheritance."
             , number: 71
               }
           , { first: "So he shepherded them with a faithful and true heart * "
             , second: "and guided them with the skillfulness of his hands."
             , number: 72
               }
             ]
    }
  , 79:
    { name: "Psalm 79."
    , title: "Deus, venerunt"
    , vss: [ { first: "O God, the heathen have come into your inheritance; they have profaned your holy temple; * "
             , second: "they have made Jerusalem a heap of rubble."
             , number: 1
               }
           , { first: "They have given the bodies of your servants as food for the birds of the air, * "
             , second: "and the flesh of your faithful ones to the beasts of the field."
             , number: 2
               }
           , { first: "They have shed their blood like water on every side of Jerusalem, * "
             , second: "and there was no one to bury them."
             , number: 3
               }
           , { first: "We have become a reproach to our neighbors, * "
             , second: "an object of scorn and derision to those around us."
             , number: 4
               }
           , { first: "How long will you be angry, O Lord? * "
             , second: "will your fury blaze like fire for ever?"
             , number: 5
               }
           , { first: "Pour out your wrath upon the heathen who have not known you * "
             , second: "and upon the kingdoms that have not called upon your Name."
             , number: 6
               }
           , { first: "For they have devoured Jacob * "
             , second: "and made his dwelling a ruin."
             , number: 7
               }
           , { first: "Remember not our past sins; let your compassion be swift to meet us; * "
             , second: "for we have been brought very low."
             , number: 8
               }
           , { first: "Help us, O God our Savior, for the glory of your Name; * "
             , second: "deliver us and forgive us our sins, for your Name’s sake."
             , number: 9
               }
           , { first: "Why should the heathen say, “Where is their God?” * "
             , second: "Let it be known among the heathen and in our sight that you avenge the shedding of your servants’ blood."
             , number: 10
               }
           , { first: "Let the sorrowful sighing of the prisoners come before you, * "
             , second: "and by your great might spare those who are condemned to die."
             , number: 11
               }
           , { first: "May the revilings with which they reviled you, O Lord, * "
             , second: "return seven-fold into their bosoms."
             , number: 12
               }
           , { first: "For we are your people and the sheep of your pasture; * "
             , second: "we will give you thanks for ever and show forth your praise from age to age."
             , number: 13
               }
             ]
    }
  , 80:
    { name: "Psalm 80."
    , title: "Qui regis Israel"
    , vss: [ { first: "Hear, O Shepherd of Israel, leading Joseph like a flock; * "
             , second: "shine forth, you that are enthroned upon the cherubim."
             , number: 1
               }
           , { first: "In the presence of Ephraim, Benjamin, and Manasseh, * "
             , second: "stir up your strength and come to help us."
             , number: 2
               }
           , { first: "Restore us, O God of hosts; * "
             , second: "show the light of your countenance, and we shall be saved."
             , number: 3
               }
           , { first: "O Lord God of hosts, * "
             , second: "how long will you be angered despite the prayers of your people?"
             , number: 4
               }
           , { first: "You have fed them with the bread of tears; * "
             , second: "you have given them bowls of tears to drink."
             , number: 5
               }
           , { first: "You have made us the derision of our neighbors, * "
             , second: "and our enemies laugh us to scorn."
             , number: 6
               }
           , { first: "Restore us, O God of hosts; * "
             , second: "show the light of your countenance, and we shall be saved."
             , number: 7
               }
           , { first: "You have brought a vine out of Egypt; * "
             , second: "you cast out the nations and planted it."
             , number: 8
               }
           , { first: "You prepared the ground for it; * "
             , second: "it took root and filled the land."
             , number: 9
               }
           , { first: "The mountains were covered by its shadow * "
             , second: "and the towering cedar trees by its boughs."
             , number: 10
               }
           , { first: "You stretched out its tendrils to the Sea * "
             , second: "and its branches to the River."
             , number: 11
               }
           , { first: "Why have you broken down its wall, * "
             , second: "so that all who pass by pluck off its grapes?"
             , number: 12
               }
           , { first: "The wild boar of the forest has ravaged it, * "
             , second: "and the beasts of the field have grazed upon it."
             , number: 13
               }
           , { first: "Turn now, O God of hosts, look down from heaven; behold and tend this vine; * "
             , second: "preserve what your right hand has planted."
             , number: 14
               }
           , { first: "They burn it with fire like rubbish; * "
             , second: "at the rebuke of your countenance let them perish."
             , number: 15
               }
           , { first: "Let your hand be upon the man of your right hand, * "
             , second: "the son of man you have made so strong for yourself."
             , number: 16
               }
           , { first: "And so will we never turn away from you; * "
             , second: "give us life, that we may call upon your Name."
             , number: 17
               }
           , { first: "Restore us, O Lord God of hosts; * "
             , second: "show the light of your countenance, and we shall be saved."
             , number: 18
               }
             ]
    }
  , 81:
    { name: "Psalm 81."
    , title: "Exultate Deo"
    , vss: [ { first: "Sing with joy to God our strength * "
             , second: "and raise a loud shout to the God of Jacob."
             , number: 1
               }
           , { first: "Raise a song and sound the timbrel, * "
             , second: "the merry harp, and the lyre."
             , number: 2
               }
           , { first: "Blow the ram’s-horn at the new moon, * "
             , second: "and at the full moon, the day of our feast."
             , number: 3
               }
           , { first: "For this is a statute for Israel, * "
             , second: "a law of the God of Jacob."
             , number: 4
               }
           , { first: "He laid it as a solemn charge upon Joseph, * "
             , second: "when he came out of the land of Egypt."
             , number: 5
               }
           , { first: "I heard an unfamiliar voice saying, * "
             , second: "“I eased his shoulder from the burden; his hands were set free from bearing the load.”"
             , number: 6
               }
           , { first: "You called on me in trouble, and I saved you; * "
             , second: "I answered you from the secret place of thunder and tested you at the waters of Meribah."
             , number: 7
               }
           , { first: "Hear, O my people, and I will admonish you: * "
             , second: "O Israel, if you would but listen to me!"
             , number: 8
               }
           , { first: "There shall be no strange god among you; * "
             , second: "you shall not worship a foreign god."
             , number: 9
               }
           , { first: "I am the Lord your God, who brought you out of the land of Egypt and said, * "
             , second: "“Open your mouth wide, and I will fill it.”"
             , number: 10
               }
           , { first: "And yet my people did not hear my voice, * "
             , second: "and Israel would not obey me."
             , number: 11
               }
           , { first: "So I gave them over to the stubbornness of their hearts, * "
             , second: "to follow their own devices."
             , number: 12
               }
           , { first: "Oh, that my people would listen to me! * "
             , second: "that Israel would walk in my ways!"
             , number: 13
               }
           , { first: "I should soon subdue their enemies * "
             , second: "and turn my hand against their foes."
             , number: 14
               }
           , { first: "Those who hate the Lord would cringe before him, * "
             , second: "and their punishment would last for ever."
             , number: 15
               }
           , { first: "But Israel would I feed with the finest wheat * "
             , second: "and satisfy him with honey from the rock."
             , number: 16
               }
             ]
    }
  , 82:
    { name: "Psalm 82."
    , title: "Deus stetit"
    , vss: [ { first: "God takes his stand in the council of heaven; * "
             , second: "he gives judgment in the midst of the gods:"
             , number: 1
               }
           , { first: "“How long will you judge unjustly, * "
             , second: "and show favor to the wicked?"
             , number: 2
               }
           , { first: "Save the weak and the orphan; * "
             , second: "defend the humble and needy;"
             , number: 3
               }
           , { first: "Rescue the weak and the poor; * "
             , second: "deliver them from the power of the wicked."
             , number: 4
               }
           , { first: "They do not know, neither do they understand; they go about in darkness; * "
             , second: "all the foundations of the earth are shaken."
             , number: 5
               }
           , { first: "Now I say to you, ‘You are gods, * "
             , second: "and all of you children of the Most High;"
             , number: 6
               }
           , { first: "Nevertheless, you shall die like mortals, * "
             , second: "and fall like any prince.’”"
             , number: 7
               }
           , { first: "Arise, O God, and rule the earth, * "
             , second: "for you shall take all nations for your own."
             , number: 8
               }
             ]
    }
  , 83:
    { name: "Psalm 83."
    , title: "Deus, quis similis?"
    , vss: [ { first: "O God, do not be silent; * "
             , second: "do not keep still nor hold your peace, O God;"
             , number: 1
               }
           , { first: "For your enemies are in tumult, * "
             , second: "and those who hate you have lifted up their heads."
             , number: 2
               }
           , { first: "They take secret counsel against your people * "
             , second: "and plot against those whom you protect."
             , number: 3
               }
           , { first: "They have said, “Come, let us wipe them out from among the nations; * "
             , second: "let the name of Israel be remembered no more.”"
             , number: 4
               }
           , { first: "They have conspired together; * "
             , second: "they have made an alliance against you:"
             , number: 5
               }
           , { first: "The tents of Edom and the Ishmaelites; * "
             , second: "the Moabites and the Hagarenes;"
             , number: 6
               }
           , { first: "Gebal, and Ammon, and Amalek; * "
             , second: "the Philistines and those who dwell in Tyre."
             , number: 7
               }
           , { first: "The Assyrians also have joined them, * "
             , second: "and have come to help the people of Lot."
             , number: 8
               }
           , { first: "Do to them as you did to Midian, * "
             , second: "to Sisera, and to Jabin at the river of Kishon:"
             , number: 9
               }
           , { first: "They were destroyed at Endor; * "
             , second: "they became like dung upon the ground."
             , number: 10
               }
           , { first: "Make their leaders like Oreb and Zeëb, * "
             , second: "and all their commanders like Zebah and Zalmunna,"
             , number: 11
               }
           , { first: "Who said, “Let us take for ourselves * "
             , second: "the fields of God as our possession.”"
             , number: 12
               }
           , { first: "O my God, make them like whirling dust * "
             , second: "and like chaff before the wind;"
             , number: 13
               }
           , { first: "Like fire that burns down a forest, * "
             , second: "like the flame that sets mountains ablaze."
             , number: 14
               }
           , { first: "Drive them with your tempest * "
             , second: "and terrify them with your storm;"
             , number: 15
               }
           , { first: "Cover their faces with shame, O Lord, * "
             , second: "that they may seek your Name."
             , number: 16
               }
           , { first: "Let them be disgraced and terrified for ever; * "
             , second: "let them be put to confusion and perish."
             , number: 17
               }
           , { first: "Let them know that you, whose Name is Yahweh, * "
             , second: "you alone are the Most High over all the earth."
             , number: 18
               }
             ]
    }
  , 84:
    { name: "Psalm 84."
    , title: "Quam dilecta!"
    , vss: [ { first: "How dear to me is your dwelling, O Lord of hosts! * "
             , second: "My soul has a desire and longing for the courts of the Lord; my heart and my flesh rejoice in the living God."
             , number: 1
               }
           , { first: "The sparrow has found her a house and the swallow a nest where she may lay her young; * "
             , second: "by the side of your altars, O Lord of hosts, my King and my God."
             , number: 2
               }
           , { first: "Happy are they who dwell in your house! * "
             , second: "they will always be praising you."
             , number: 3
               }
           , { first: "Happy are the people whose strength is in you! * "
             , second: "whose hearts are set on the pilgrims’ way."
             , number: 4
               }
           , { first: "Those who go through the desolate valley will find it a place of springs, * "
             , second: "for the early rains have covered it with pools of water."
             , number: 5
               }
           , { first: "They will climb from height to height, * "
             , second: "and the God of gods will reveal himself in Zion."
             , number: 6
               }
           , { first: "Lord God of hosts, hear my prayer; * "
             , second: "hearken, O God of Jacob."
             , number: 7
               }
           , { first: "Behold our defender, O God; * "
             , second: "and look upon the face of your Anointed."
             , number: 8
               }
           , { first: "For one day in your courts is better than a thousand in my own room, * "
             , second: "and to stand at the threshold of the house of my God than to dwell in the tents of the wicked."
             , number: 9
               }
           , { first: "For the Lord God is both sun and shield; * "
             , second: "he will give grace and glory;"
             , number: 10
               }
           , { first: "No good thing will the Lord withhold * "
             , second: "from those who walk with integrity."
             , number: 11
               }
           , { first: "O Lord of hosts, * "
             , second: "happy are they who put their trust in you!"
             , number: 12
               }
             ]
    }
  , 85:
    { name: "Psalm 85."
    , title: "Benedixisti, Domine"
    , vss: [ { first: "You have been gracious to your land, O Lord, * "
             , second: "you have restored the good fortune of Jacob."
             , number: 1
               }
           , { first: "You have forgiven the iniquity of your people * "
             , second: "and blotted out all their sins."
             , number: 2
               }
           , { first: "You have withdrawn all your fury * "
             , second: "and turned yourself from your wrathful indignation."
             , number: 3
               }
           , { first: "Restore us then, O God our Savior; * "
             , second: "let your anger depart from us."
             , number: 4
               }
           , { first: "Will you be displeased with us for ever? * "
             , second: "will you prolong your anger from age to age?"
             , number: 5
               }
           , { first: "Will you not give us life again, * "
             , second: "that your people may rejoice in you?"
             , number: 6
               }
           , { first: "Show us your mercy, O Lord, * "
             , second: "and grant us your salvation."
             , number: 7
               }
           , { first: "I will listen to what the Lord God is saying, * "
             , second: "for he is speaking peace to his faithful people and to those who turn their hearts to him."
             , number: 8
               }
           , { first: "Truly, his salvation is very near to those who fear him, * "
             , second: "that his glory may dwell in our land."
             , number: 9
               }
           , { first: "Mercy and truth have met together; * "
             , second: "righteousness and peace have kissed each other."
             , number: 10
               }
           , { first: "Truth shall spring up from the earth, * "
             , second: "and righteousness shall look down from heaven."
             , number: 11
               }
           , { first: "The Lord will indeed grant prosperity, * "
             , second: "and our land will yield its increase."
             , number: 12
               }
           , { first: "Righteousness shall go before him, * "
             , second: "and peace shall be a pathway for his feet."
             , number: 13
               }
             ]
    }
  , 86:
    { name: "Psalm 86."
    , title: "Inclina, Domine"
    , vss: [ { first: "Bow down your ear, O Lord, and answer me, * "
             , second: "for I am poor and in misery."
             , number: 1
               }
           , { first: "Keep watch over my life, for I am faithful; * "
             , second: "save your servant who puts his trust in you."
             , number: 2
               }
           , { first: "Be merciful to me, O Lord, for you are my God; * "
             , second: "I call upon you all the day long."
             , number: 3
               }
           , { first: "Gladden the soul of your servant, * "
             , second: "for to you, O Lord, I lift up my soul."
             , number: 4
               }
           , { first: "For you, O Lord, are good and forgiving, * "
             , second: "and great is your love toward all who call upon you."
             , number: 5
               }
           , { first: "Give ear, O Lord, to my prayer, * "
             , second: "and attend to the voice of my supplications."
             , number: 6
               }
           , { first: "In the time of my trouble I will call upon you, * "
             , second: "for you will answer me."
             , number: 7
               }
           , { first: "Among the gods there is none like you, O Lord, * "
             , second: "nor anything like your works."
             , number: 8
               }
           , { first: "All nations you have made will come and worship you, O Lord, * "
             , second: "and glorify your Name."
             , number: 9
               }
           , { first: "For you are great; you do wondrous things; * "
             , second: "and you alone are God."
             , number: 10
               }
           , { first: "Teach me your way, O Lord, and I will walk in your truth; * "
             , second: "knit my heart to you that I may fear your Name."
             , number: 11
               }
           , { first: "I will thank you, O Lord my God, with all my heart, * "
             , second: "and glorify your Name for evermore."
             , number: 12
               }
           , { first: "For great is your love toward me; * "
             , second: "you have delivered me from the nethermost Pit."
             , number: 13
               }
           , { first: "The arrogant rise up against me, O God, and a band of violent men seeks my life; * "
             , second: "they have not set you before their eyes."
             , number: 14
               }
           , { first: "But you, O Lord, are gracious and full of compassion, * "
             , second: "slow to anger, and full of kindness and truth."
             , number: 15
               }
           , { first: "Turn to me and have mercy upon me; * "
             , second: "give your strength to your servant; and save the child of your handmaid."
             , number: 16
               }
           , { first: "Show me a sign of your favor, so that those who hate me may see it and be ashamed; * "
             , second: "because you, O Lord, have helped me and comforted me."
             , number: 17
               }
             ]
    }
  , 87:
    { name: "Psalm 87."
    , title: "Fundamenta ejus"
    , vss: [ { first: "On the holy mountain stands the city he has founded; * "
             , second: "the Lord loves the gates of Zion more than all the dwellings of Jacob."
             , number: 1
               }
           , { first: "Glorious things are spoken of you, * "
             , second: "O city of our God."
             , number: 2
               }
           , { first: "I count Egypt and Babylon among those who know me; * "
             , second: "behold Philistia, Tyre, and Ethiopia: in Zion were they born."
             , number: 3
               }
           , { first: "Of Zion it shall be said, “Everyone was born in her, * "
             , second: "and the Most High himself shall sustain her.”"
             , number: 4
               }
           , { first: "The Lord will record as he enrolls the peoples, * "
             , second: "“These also were born there.”"
             , number: 5
               }
           , { first: "The singers and the dancers will say, * "
             , second: "“All my fresh springs are in you.”"
             , number: 6
               }
             ]
    }
  , 88:
    { name: "Psalm 88."
    , title: "Domine, Deus"
    , vss: [ { first: "O Lord, my God, my Savior, * "
             , second: "by day and night I cry to you."
             , number: 1
               }
           , { first: "Let my prayer enter into your presence; * "
             , second: "incline your ear to my lamentation."
             , number: 2
               }
           , { first: "For I am full of trouble; * "
             , second: "my life is at the brink of the grave."
             , number: 3
               }
           , { first: "I am counted among those who go down to the Pit; * "
             , second: "I have become like one who has no strength;"
             , number: 4
               }
           , { first: "Lost among the dead, * "
             , second: "like the slain who lie in the grave,"
             , number: 5
               }
           , { first: "Whom you remember no more, * "
             , second: "for they are cut off from your hand."
             , number: 6
               }
           , { first: "You have laid me in the depths of the Pit, * "
             , second: "in dark places, and in the abyss."
             , number: 7
               }
           , { first: "Your anger weighs upon me heavily, * "
             , second: "and all your great waves overwhelm me."
             , number: 8
               }
           , { first: "You have put my friends far from me; you have made me to be abhorred by them; * "
             , second: "I am in prison and cannot get free."
             , number: 9
               }
           , { first: "My sight has failed me because of trouble; * "
             , second: "Lord, I have called upon you daily; I have stretched out my hands to you."
             , number: 10
               }
           , { first: "Do you work wonders for the dead? * "
             , second: "will those who have died stand up and give you thanks?"
             , number: 11
               }
           , { first: "Will your loving-kindness be declared in the grave? * "
             , second: "your faithfulness in the land of destruction?"
             , number: 12
               }
           , { first: "Will your wonders be known in the dark? * "
             , second: "or your righteousness in the country where all is forgotten?"
             , number: 13
               }
           , { first: "But as for me, O Lord, I cry to you for help; * "
             , second: "in the morning my prayer comes before you."
             , number: 15
               }
           , { first: "Lord, why have you rejected me? * "
             , second: "why have you hidden your face from me?"
             , number: 16
               }
           , { first: "Ever since my youth, I have been wretched and at the point of death; * "
             , second: "I have borne your terrors with a troubled mind."
             , number: 17
               }
           , { first: "Your blazing anger has swept over me; * "
             , second: "your terrors have destroyed me;"
             , number: 18
               }
           , { first: "They surround me all day long like a flood; * "
             , second: "they encompass me on every side."
             , number: 19
               }
           , { first: "My friend and my neighbor you have put away from me, * "
             , second: "and darkness is my only companion."
             , number: 20
               }
             ]
    }
  , 89:
    { name: "Psalm 89."
    , title: ""
    , vss: [ { title: "Part I Misericordias Domini"
             , first: "Your love, O Lord, for ever will I sing; * "
             , second: "from age to age my mouth will proclaim your faithfulness."
             , number: 1
               }
           , { first: "For I am persuaded that your love is established for ever; * "
             , second: "you have set your faithfulness firmly in the heavens."
             , number: 2
               }
           , { first: "“I have made a covenant with my chosen one; * "
             , second: "I have sworn an oath to David my servant:"
             , number: 3
               }
           , { first: "‘I will establish your line for ever, * "
             , second: "and preserve your throne for all generations.’”"
             , number: 4
               }
           , { first: "The heavens bear witness to your wonders, O Lord, * "
             , second: "and to your faithfulness in the assembly of the holy ones;"
             , number: 5
               }
           , { first: "For who in the skies can be compared to the Lord? * "
             , second: "who is like the Lord among the gods?"
             , number: 6
               }
           , { first: "God is much to be feared in the council of the holy ones, * "
             , second: "great and terrible to all those round about him."
             , number: 7
               }
           , { first: "Who is like you, Lord God of hosts? * "
             , second: "O mighty Lord, your faithfulness is all around you."
             , number: 8
               }
           , { first: "You rule the raging of the sea * "
             , second: "and still the surging of its waves."
             , number: 9
               }
           , { first: "You have crushed Rahab of the deep with a deadly wound; * "
             , second: "you have scattered your enemies with your mighty arm."
             , number: 10
               }
           , { first: "Yours are the heavens; the earth also is yours; * "
             , second: "you laid the foundations of the world and all that is in it."
             , number: 11
               }
           , { first: "You have made the north and the south; * "
             , second: "Tabor and Hermon rejoice in your Name."
             , number: 12
               }
           , { first: "You have a mighty arm; * "
             , second: "strong is your hand and high is your right hand."
             , number: 13
               }
           , { first: "Righteousness and justice are the foundations of your throne; * "
             , second: "love and truth go before your face."
             , number: 14
               }
           , { first: "Happy are the people who know the festal shout! * "
             , second: "they walk, O Lord, in the light of your presence."
             , number: 15
               }
           , { first: "They rejoice daily in your Name; * "
             , second: "they are jubilant in your righteousness."
             , number: 16
               }
           , { first: "For you are the glory of their strength, * "
             , second: "and by your favor our might is exalted."
             , number: 17
               }
           , { first: "Truly, the Lord is our ruler; * "
             , second: "the Holy One of Israel is our King."
             , number: 18
               }
           , { title: "Part II Tunc locutus es"
             , first: "You spoke once in a vision and said to your faithful people: * "
             , second: "“I have set the crown upon a warrior and have exalted one chosen out of the people."
             , number: 19
               }
           , { first: "I have found David my servant; * "
             , second: "with my holy oil have I anointed him."
             , number: 20
               }
           , { first: "My hand will hold him fast * "
             , second: "and my arm will make him strong."
             , number: 21
               }
           , { first: "No enemy shall deceive him, * "
             , second: "nor any wicked man bring him down."
             , number: 22
               }
           , { first: "I will crush his foes before him * "
             , second: "and strike down those who hate him."
             , number: 23
               }
           , { first: "My faithfulness and love shall be with him, * "
             , second: "and he shall be victorious through my Name."
             , number: 24
               }
           , { first: "I shall make his dominion extend * "
             , second: "from the Great Sea to the River."
             , number: 25
               }
           , { first: "He will say to me, ‘You are my Father, * "
             , second: "my God, and the rock of my salvation.’"
             , number: 26
               }
           , { first: "I will make him my firstborn * "
             , second: "and higher than the kings of the earth."
             , number: 27
               }
           , { first: "I will keep my love for him for ever, * "
             , second: "and my covenant will stand firm for him."
             , number: 28
               }
           , { first: "I will establish his line for ever * "
             , second: "and his throne as the days of heaven.”"
             , number: 29
               }
           , { first: "“If his children forsake my law * "
             , second: "and do not walk according to my judgments;"
             , number: 30
               }
           , { first: "If they break my statutes * "
             , second: "and do not keep my commandments;"
             , number: 31
               }
           , { first: "I will punish their transgressions with a rod * "
             , second: "and their iniquities with the lash;"
             , number: 32
               }
           , { first: "But I will not take my love from him, * "
             , second: "nor let my faithfulness prove false."
             , number: 33
               }
           , { first: "I will not break my covenant, * "
             , second: "nor change what has gone out of my lips."
             , number: 34
               }
           , { first: "Once for all I have sworn by my holiness: * "
             , second: "I will not lie to David."
             , number: 35
               }
           , { first: "His line shall endure for ever * "
             , second: "and his throne as the sun before me;"
             , number: 36
               }
           , { first: "It shall stand fast for evermore like the moon, * "
             , second: "the abiding witness in the sky.’”"
             , number: 37
               }
           , { first: "But you have cast off and rejected your anointed; * "
             , second: "you have become enraged at him."
             , number: 38
               }
           , { first: "You have broken your covenant with your servant, * "
             , second: "defiled his crown, and hurled it to the ground."
             , number: 39
               }
           , { first: "You have breached all his walls * "
             , second: "and laid his strongholds in ruins."
             , number: 40
               }
           , { first: "All who pass by despoil him; * "
             , second: "he has become the scorn of his neighbors."
             , number: 41
               }
           , { first: "You have exalted the right hand of his foes * "
             , second: "and made all his enemies rejoice."
             , number: 42
               }
           , { first: "You have turned back the edge of his sword * "
             , second: "and have not sustained him in battle."
             , number: 43
               }
           , { first: "You have put an end to his splendor * "
             , second: "and cast his throne to the ground."
             , number: 44
               }
           , { first: "You have cut short the days of his youth * "
             , second: "and have covered him with shame."
             , number: 45
               }
           , { first: "How long will you hide yourself, O Lord? will you hide yourself for ever? * "
             , second: "how long will your anger burn like fire?"
             , number: 46
               }
           , { first: "Remember, Lord, how short life is, * "
             , second: "how frail you have made all flesh."
             , number: 47
               }
           , { first: "Who can live and not see death? * "
             , second: "who can save himself from the power of the grave?"
             , number: 48
               }
           , { first: "Where, Lord, are your loving-kindnesses of old, * "
             , second: "which you promised David in your faithfulness?"
             , number: 49
               }
           , { first: "Remember, Lord, how your servant is mocked, * "
             , second: "how I carry in my bosom the taunts of many peoples,"
             , number: 50
               }
           , { first: "The taunts your enemies have hurled, O Lord, * "
             , second: "which they hurled at the heels of your anointed."
             , number: 51
               }
           , { first: "Blessed be the Lord for evermore! * "
             , second: "Amen, I say, Amen."
             , number: 52
               }
             ]
    }
  , 90:
    { name: "Psalm 90."
    , title: "Domine, refugium"
    , vss: [ { first: "Lord, you have been our refuge * "
             , second: "from one generation to another."
             , number: 1
               }
           , { first: "Before the mountains were brought forth, or the land and the earth were born, * "
             , second: "from age to age you are God."
             , number: 2
               }
           , { first: "You turn us back to the dust and say, * "
             , second: "“Go back, O child of earth.”"
             , number: 3
               }
           , { first: "For a thousand years in your sight are like yesterday when it is past * "
             , second: "and like a watch in the night."
             , number: 4
               }
           , { first: "You sweep us away like a dream; * "
             , second: "we fade away suddenly like the grass."
             , number: 5
               }
           , { first: "In the morning it is green and flourishes; * "
             , second: "in the evening it is dried up and withered."
             , number: 6
               }
           , { first: "For we consume away in your displeasure; * "
             , second: "we are afraid because of your wrathful indignation."
             , number: 7
               }
           , { first: "Our iniquities you have set before you, * "
             , second: "and our secret sins in the light of your countenance."
             , number: 8
               }
           , { first: "When you are angry, all our days are gone; * "
             , second: "we bring our years to an end like a sigh."
             , number: 9
               }
           , { first: "The span of our life is seventy years, perhaps in strength even eighty; * "
             , second: "yet the sum of them is but labor and sorrow, for they pass away quickly and we are gone."
             , number: 10
               }
           , { first: "Who regards the power of your wrath? * "
             , second: "who rightly fears your indignation?"
             , number: 11
               }
           , { first: "So teach us to number our days * "
             , second: "that we may apply our hearts to wisdom."
             , number: 12
               }
           , { first: "Return, O Lord; how long will you tarry? * "
             , second: "be gracious to your servants."
             , number: 13
               }
           , { first: "Satisfy us by your loving-kindness in the morning; * "
             , second: "so shall we rejoice and be glad all the days of our life."
             , number: 14
               }
           , { first: "Make us glad by the measure of the days that you afflicted us * "
             , second: "and the years in which we suffered adversity."
             , number: 15
               }
           , { first: "Show your servants your works * "
             , second: "and your splendor to their children."
             , number: 16
               }
           , { first: "May the graciousness of the Lord our God be upon us; * "
             , second: "prosper the work of our hands; prosper our handiwork."
             , number: 17
               }
             ]
    }
  , 91:
    { name: "Psalm 91."
    , title: "Qui habitat"
    , vss: [ { first: "He who dwells in the shelter of the Most High, * "
             , second: "abides under the shadow of the Almighty."
             , number: 1
               }
           , { first: "He shall say to the Lord, “You are my refuge and my stronghold, * "
             , second: "my God in whom I put my trust.”"
             , number: 2
               }
           , { first: "He shall deliver you from the snare of the hunter * "
             , second: "and from the deadly pestilence."
             , number: 3
               }
           , { first: "He shall cover you with his pinions, and you shall find refuge under his wings; * "
             , second: "his faithfulness shall be a shield and buckler."
             , number: 4
               }
           , { first: "You shall not be afraid of any terror by night, * "
             , second: "nor of the arrow that flies by day;"
             , number: 5
               }
           , { first: "Of the plague that stalks in the darkness, * "
             , second: "nor of the sickness that lays waste at mid-day."
             , number: 6
               }
           , { first: "A thousand shall fall at your side and ten thousand at your right hand, * "
             , second: "but it shall not come near you."
             , number: 7
               }
           , { first: "Your eyes have only to behold * "
             , second: "to see the reward of the wicked."
             , number: 8
               }
           , { first: "Because you have made the Lord your refuge, * "
             , second: "and the Most High your habitation,"
             , number: 9
               }
           , { first: "There shall no evil happen to you, * "
             , second: "neither shall any plague come near your dwelling."
             , number: 10
               }
           , { first: "For he shall give his angels charge over you, * "
             , second: "to keep you in all your ways."
             , number: 11
               }
           , { first: "They shall bear you in their hands, * "
             , second: "lest you dash your foot against a stone."
             , number: 12
               }
           , { first: "You shall tread upon the lion and adder; * "
             , second: "you shall trample the young lion and the serpent under your feet."
             , number: 13
               }
           , { first: "Because he is bound to me in love, therefore will I deliver him; * "
             , second: "I will protect him, because he knows my Name."
             , number: 14
               }
           , { first: "He shall call upon me, and I will answer him; * "
             , second: "I am with him in trouble; I will rescue him and bring him to honor."
             , number: 15
               }
           , { first: "With long life will I satisfy him, * "
             , second: "and show him my salvation."
             , number: 16
               }
             ]
    }
  , 92:
    { name: "Psalm 92."
    , title: "Bonum est confiteri"
    , vss: [ { first: "It is a good thing to give thanks to the Lord, * "
             , second: "and to sing praises to your Name, O Most High;"
             , number: 1
               }
           , { first: "To tell of your loving-kindness early in the morning * "
             , second: "and of your faithfulness in the night season;"
             , number: 2
               }
           , { first: "On the psaltery, and on the lyre, * "
             , second: "and to the melody of the harp."
             , number: 3
               }
           , { first: "For you have made me glad by your acts, O Lord; * "
             , second: "and I shout for joy because of the works of your hands."
             , number: 4
               }
           , { first: "Lord, how great are your works! * "
             , second: "your thoughts are very deep."
             , number: 5
               }
           , { first: "The dullard does not know, nor does the fool understand, * "
             , second: "that though the wicked grow like weeds, and all the workers of iniquity flourish,"
             , number: 6
               }
           , { first: "They flourish only to be destroyed for ever; * "
             , second: "but you, O Lord, are exalted for evermore."
             , number: 7
               }
           , { first: "For lo, your enemies, O Lord, lo, your enemies shall perish, * "
             , second: "and all the workers of iniquity shall be scattered."
             , number: 8
               }
           , { first: "But my horn you have exalted like the horns of wild bulls; * "
             , second: "I am anointed with fresh oil."
             , number: 9
               }
           , { first: "My eyes also gloat over my enemies, * "
             , second: "and my ears rejoice to hear the doom of the wicked who rise up against me."
             , number: 10
               }
           , { first: "The righteous shall flourish like a palm tree, * "
             , second: "and shall spread abroad like a cedar of Lebanon."
             , number: 11
               }
           , { first: "Those who are planted in the house of the Lord * "
             , second: "shall flourish in the courts of our God;"
             , number: 12
               }
           , { first: "They shall still bear fruit in old age; * "
             , second: "they shall be green and succulent;"
             , number: 13
               }
           , { first: "That they may show how upright the Lord is, * "
             , second: "my Rock, in whom there is no fault."
             , number: 14
               }
             ]
    }
  , 93:
    { name: "Psalm 93."
    , title: "Dominus regnavit"
    , vss: [ { first: "The Lord is King; he has put on splendid apparel; * "
             , second: "the Lord has put on his apparel and girded himself with strength."
             , number: 1
               }
           , { first: "He has made the whole world so sure * "
             , second: "that it cannot be moved;"
             , number: 2
               }
           , { first: "Ever since the world began, your throne has been established; * "
             , second: "you are from everlasting."
             , number: 3
               }
           , { first: "The waters have lifted up, O Lord, the waters have lifted up their voice; * "
             , second: "the waters have lifted up their pounding waves."
             , number: 4
               }
           , { first: "Mightier than the sound of many waters, mightier than the breakers of the sea, * "
             , second: "mightier is the Lord who dwells on high."
             , number: 5
               }
           , { first: "Your testimonies are very sure, * "
             , second: "and holiness adorns your house, O Lord, for ever and for evermore."
             , number: 6
               }
             ]
    }
  , 94:
    { name: "Psalm 94."
    , title: "Deus ultionum"
    , vss: [ { first: "O Lord God of vengeance, * "
             , second: "O God of vengeance, show yourself."
             , number: 1
               }
           , { first: "Rise up, O Judge of the world; * "
             , second: "give the arrogant their just deserts."
             , number: 2
               }
           , { first: "How long shall the wicked, O Lord, * "
             , second: "how long shall the wicked triumph?"
             , number: 3
               }
           , { first: "They bluster in their insolence; * "
             , second: "all evildoers are full of boasting."
             , number: 4
               }
           , { first: "They crush your people, O Lord, * "
             , second: "and afflict your chosen nation."
             , number: 5
               }
           , { first: "They murder the widow and the stranger * "
             , second: "and put the orphans to death."
             , number: 6
               }
           , { first: "Yet they say, “The Lord does not see, * "
             , second: "the God of Jacob takes no notice.”"
             , number: 7
               }
           , { first: "Consider well, you dullards among the people; * "
             , second: "when will you fools understand?"
             , number: 8
               }
           , { first: "He that planted the ear, does he not hear? * "
             , second: "he that formed the eye, does he not see?"
             , number: 9
               }
           , { first: "He who admonishes the nations, will he not punish? * "
             , second: "he who teaches all the world, has he no knowledge?"
             , number: 10
               }
           , { first: "The Lord knows our human thoughts; * "
             , second: "how like a puff of wind they are."
             , number: 11
               }
           , { first: "Happy are they whom you instruct, O Lord! * "
             , second: "whom you teach out of your law;"
             , number: 12
               }
           , { first: "To give them rest in evil days, * "
             , second: "until a pit is dug for the wicked."
             , number: 13
               }
           , { first: "For the Lord will not abandon his people, * "
             , second: "nor will he forsake his own."
             , number: 14
               }
           , { first: "For judgment will again be just, * "
             , second: "and all the true of heart will follow it."
             , number: 15
               }
           , { first: "Who rose up for me against the wicked? * "
             , second: "who took my part against the evildoers?"
             , number: 16
               }
           , { first: "If the Lord had not come to my help, * "
             , second: "I should soon have dwelt in the land of silence."
             , number: 17
               }
           , { first: "As often as I said, “My foot has slipped,” * "
             , second: "your love, O Lord, upheld me."
             , number: 18
               }
           , { first: "When many cares fill my mind, * "
             , second: "your consolations cheer my soul."
             , number: 19
               }
           , { first: "Can a corrupt tribunal have any part with you, * "
             , second: "one which frames evil into law?"
             , number: 20
               }
           , { first: "They conspire against the life of the just * "
             , second: "and condemn the innocent to death."
             , number: 21
               }
           , { first: "But the Lord has become my stronghold, * "
             , second: "and my God the rock of my trust."
             , number: 22
               }
           , { first: "He will turn their wickedness back upon them and destroy them in their own malice; * "
             , second: "the Lord our God will destroy them."
             , number: 23
               }
             ]
    }
  , 95:
    { name: "Psalm 95."
    , title: "Venite, exultemus"
    , vss: [ { first: "Come, let us sing to the Lord; * "
             , second: "let us shout for joy to the Rock of our salvation."
             , number: 1
               }
           , { first: "Let us come before his presence with thanksgiving * "
             , second: "and raise a loud shout to him with psalms."
             , number: 2
               }
           , { first: "For the Lord is a great God, * "
             , second: "and a great King above all gods."
             , number: 3
               }
           , { first: "In his hand are the caverns of the earth, * "
             , second: "and the heights of the hills are his also."
             , number: 4
               }
           , { first: "The sea is his, for he made it, * "
             , second: "and his hands have molded the dry land."
             , number: 5
               }
           , { first: "Come, let us bow down, and bend the knee, * "
             , second: "and kneel before the Lord our Maker."
             , number: 6
               }
           , { first: "For he is our God, and we are the people of his pasture and the sheep of his hand. * "
             , second: "Oh, that today you would hearken to his voice!"
             , number: 7
               }
           , { first: "Harden not your hearts, as your forebears did in the wilderness, * "
             , second: "at Meribah, and on that day at Massah, when they tempted me."
             , number: 8
               }
           , { first: "They put me to the test, * "
             , second: "though they had seen my works."
             , number: 9
               }
           , { first: "Forty years long I detested that generation and said, * "
             , second: "“This people are wayward in their hearts; they do not know my ways.”"
             , number: 10
               }
           , { first: "So I swore in my wrath, * "
             , second: "“They shall not enter into my rest.”"
             , number: 11
               }
             ]
    }
  , 96:
    { name: "Psalm 96."
    , title: "Cantate Domino"
    , vss: [ { first: "Sing to the Lord a new song; * "
             , second: "sing to the Lord, all the whole earth."
             , number: 1
               }
           , { first: "Sing to the Lord and bless his Name; * "
             , second: "proclaim the good news of his salvation from day to day."
             , number: 2
               }
           , { first: "Declare his glory among the nations * "
             , second: "and his wonders among all peoples."
             , number: 3
               }
           , { first: "For great is the Lord and greatly to be praised; * "
             , second: "he is more to be feared than all gods."
             , number: 4
               }
           , { first: "As for all the gods of the nations, they are but idols; * "
             , second: "but it is the Lord who made the heavens."
             , number: 5
               }
           , { first: "Oh, the majesty and magnificence of his presence! * "
             , second: "Oh, the power and the splendor of his sanctuary!"
             , number: 6
               }
           , { first: "Ascribe to the Lord, you families of the peoples; * "
             , second: "ascribe to the Lord honor and power."
             , number: 7
               }
           , { first: "Ascribe to the Lord the honor due his Name; * "
             , second: "bring offerings and come into his courts."
             , number: 8
               }
           , { first: "Worship the Lord in the beauty of holiness; * "
             , second: "let the whole earth tremble before him."
             , number: 9
               }
           , { first: "Tell it out among the nations: “The Lord is King! * "
             , second: "he has made the world so firm that it cannot be moved; he will judge the peoples with equity.”"
             , number: 10
               }
           , { first: "Let the heavens rejoice, and let the earth be glad; let the sea thunder and all that is in it; * "
             , second: "let the field be joyful and all that is therein."
             , number: 11
               }
           , { first: "Then shall all the trees of the wood shout for joy before the Lord when he comes, * "
             , second: "when he comes to judge the earth."
             , number: 12
               }
           , { first: "He will judge the world with righteousness * "
             , second: "and the peoples with his truth."
             , number: 13
               }
             ]
    }
  , 97:
    { name: "Psalm 97."
    , title: "Dominus regnavit"
    , vss: [ { first: "The Lord is King; let the earth rejoice; * "
             , second: "let the multitude of the isles be glad."
             , number: 1
               }
           , { first: "Clouds and darkness are round about him, * "
             , second: "righteousness and justice are the foundations of his throne."
             , number: 2
               }
           , { first: "A fire goes before him * "
             , second: "and burns up his enemies on every side."
             , number: 3
               }
           , { first: "His lightnings light up the world; * "
             , second: "the earth sees it and is afraid."
             , number: 4
               }
           , { first: "The mountains melt like wax at the presence of the Lord, * "
             , second: "at the presence of the Lord of the whole earth."
             , number: 5
               }
           , { first: "The heavens declare his righteousness, * "
             , second: "and all the peoples see his glory."
             , number: 6
               }
           , { first: "Confounded be all who worship carved images and delight in false gods! * "
             , second: "Bow down before him, all you gods."
             , number: 7
               }
           , { first: "Zion hears and is glad, and the cities of Judah rejoice, * "
             , second: "because of your judgments, O Lord."
             , number: 8
               }
           , { first: "For you are the Lord, most high over all the earth; * "
             , second: "you are exalted far above all gods."
             , number: 9
               }
           , { first: "The Lord loves those who hate evil; * "
             , second: "he preserves the lives of his saints and delivers them from the hand of the wicked."
             , number: 10

               }
           , { first: "Light has sprung up for the righteous, * "
             , second: "and joyful gladness for those who are truehearted."
             , number: 11
               }
           , { first: "Rejoice in the Lord, you righteous, * "
             , second: "and give thanks to his holy Name."
             , number: 12
               }
             ]
    }
  , 98:
    { name: "Psalm 98."
    , title: "Cantate Domino"
    , vss: [ { first: "Sing to the Lord a new song, * "
             , second: "for he has done marvelous things."
             , number: 1
               }
           , { first: "With his right hand and his holy arm * "
             , second: "has he won for himself the victory."
             , number: 2
               }
           , { first: "The Lord has made known his victory; * "
             , second: "his righteousness has he openly shown in the sight of the nations."
             , number: 3
               }
           , { first: "He remembers his mercy and faithfulness to the house of Israel, * "
             , second: "and all the ends of the earth have seen the victory of our God."
             , number: 4
               }
           , { first: "Shout with joy to the Lord, all you lands; * "
             , second: "lift up your voice, rejoice, and sing."
             , number: 5
               }
           , { first: "Sing to the Lord with the harp, * "
             , second: "with the harp and the voice of song."
             , number: 6
               }
           , { first: "With trumpets and the sound of the horn * "
             , second: "shout with joy before the King, the Lord."
             , number: 7
               }
           , { first: "Let the sea make a noise and all that is in it, * "
             , second: "the lands and those who dwell therein."
             , number: 8
               }
           , { first: "Let the rivers clap their hands, * "
             , second: "and let the hills ring out with joy before the Lord, when he comes to judge the earth."
             , number: 9
               }
           , { first: "In righteousness shall he judge the world * "
             , second: "and the peoples with equity."
             , number: 10
               }
             ]
    }
  , 99:
    { name: "Psalm 99."
    , title: "Dominus regnavit"
    , vss: [ { first: "The Lord is King; let the people tremble; * "
             , second: "he is enthroned upon the cherubim; let the earth shake."
             , number: 1
               }
           , { first: "The Lord is great in Zion; * "
             , second: "he is high above all peoples."
             , number: 2
               }
           , { first: "Let them confess his Name, which is great and awesome; * "
             , second: "he is the Holy One."
             , number: 3
               }
           , { first: "“O mighty King, lover of justice, you have established equity; * "
             , second: "you have executed justice and righteousness in Jacob.”"
             , number: 4
               }
           , { first: "Proclaim the greatness of the Lord our God and fall down before his footstool; * "
             , second: "he is the Holy One."
             , number: 5
               }
           , { first: "Moses and Aaron among his priests, and Samuel among those who call upon his Name, * "
             , second: "they called upon the Lord, and he answered them."
             , number: 6
               }
           , { first: "He spoke to them out of the pillar of cloud; * "
             , second: "they kept his testimonies and the decree that he gave them."
             , number: 7
               }
           , { first: "“O Lord our God, you answered them indeed; * "
             , second: "you were a God who forgave them, yet punished them for their evil deeds.”"
             , number: 8
               }
           , { first: "Proclaim the greatness of the Lord our God and worship him upon his holy hill; * "
             , second: "for the Lord our God is the Holy One."
             , number: 9
               }
             ]
    }
  , 100:
    { name: "Psalm 100."
    , title: "Jubilate Deo"
    , vss: [ { first: "Be joyful in the Lord, all you lands; * "
             , second: "serve the Lord with gladness and come before his presence with a song."
             , number: 1
               }
           , { first: "Know this: The Lord himself is God; * "
             , second: "he himself has made us, and we are his; we are his people and the sheep of his pasture."
             , number: 2
               }
           , { first: "Enter his gates with thanksgiving; go into his courts with praise; * "
             , second: "give thanks to him and call upon his Name."
             , number: 3
               }
           , { first: "For the Lord is good; his mercy is everlasting; * "
             , second: "and his faithfulness endures from age to age."
             , number: 4
               }
             ]
    }
  , 101:
    { name: "Psalm 101."
    , title: "Misericordiam et judicium"
    , vss: [ { first: "I will sing of mercy and justice; * "
             , second: "to you, O Lord, will I sing praises."
             , number: 1
               }
           , { first: "I will strive to follow a blameless course; oh, when will you come to me? * "
             , second: "I will walk with sincerity of heart within my house."
             , number: 2
               }
           , { first: "I will set no worthless thing before my eyes; * "
             , second: "I hate the doers of evil deeds; they shall not remain with me."
             , number: 3
               }
           , { first: "A crooked heart shall be far from me; * "
             , second: "I will not know evil."
             , number: 4
               }
           , { first: "Those who in secret slander their neighbors I will destroy; * "
             , second: "those who have a haughty look and a proud heart I cannot abide."
             , number: 5
               }
           , { first: "My eyes are upon the faithful in the land, that they may dwell with me, * "
             , second: "and only those who lead a blameless life shall be my servants."
             , number: 6
               }
           , { first: "Those who act deceitfully shall not dwell in my house, * "
             , second: "and those who tell lies shall not continue in my sight."
             , number: 7
               }
           , { first: "I will soon destroy all the wicked in the land, * "
             , second: "that I may root out all evildoers from the city of the Lord."
             , number: 8
               }
             ]
    }
  , 102:
    { name: "Psalm 102."
    , title: "Domine, exaudi"
    , vss: [ { first: "Lord, hear my prayer, and let my cry come before you; * "
             , second: "hide not your face from me in the day of my trouble."
             , number: 1
               }
           , { first: "Incline your ear to me; * "
             , second: "when I call, make haste to answer me,"
             , number: 2
               }
           , { first: "For my days drift away like smoke, * "
             , second: "and my bones are hot as burning coals."
             , number: 3
               }
           , { first: "My heart is smitten like grass and withered, * "
             , second: "so that I forget to eat my bread."
             , number: 4
               }
           , { first: "Because of the voice of my groaning * "
             , second: "I am but skin and bones."
             , number: 5
               }
           , { first: "I have become like a vulture in the wilderness, * "
             , second: "like an owl among the ruins."
             , number: 6
               }
           , { first: "I lie awake and groan; * "
             , second: "I am like a sparrow, lonely on a house-top."
             , number: 7
               }
           , { first: "My enemies revile me all day long, * "
             , second: "and those who scoff at me have taken an oath against me."
             , number: 8
               }
           , { first: "For I have eaten ashes for bread * "
             , second: "and mingled my drink with weeping."
             , number: 9
               }
           , { first: "Because of your indignation and wrath * "
             , second: "you have lifted me up and thrown me away."
             , number: 10
               }
           , { first: "My days pass away like a shadow, * "
             , second: "and I wither like the grass."
             , number: 11
               }
           , { first: "But you, O Lord, endure for ever, * "
             , second: "and your Name from age to age."
             , number: 12
               }
           , { first: "You will arise and have compassion on Zion, for it is time to have mercy upon her; * "
             , second: "indeed, the appointed time has come."
             , number: 13
               }
           , { first: "For your servants love her very rubble, * "
             , second: "and are moved to pity even for her dust."
             , number: 14
               }
           , { first: "The nations shall fear your Name, O Lord, * "
             , second: "and all the kings of the earth your glory."
             , number: 15
               }
           , { first: "For the Lord will build up Zion, * "
             , second: "and his glory will appear."
             , number: 16
               }
           , { first: "He will look with favor on the prayer of the homeless; * "
             , second: "he will not despise their plea."
             , number: 17
               }
           , { first: "Let this be written for a future generation, * "
             , second: "so that a people yet unborn may praise the Lord."
             , number: 18
               }
           , { first: "For the Lord looked down from his holy place on high; * "
             , second: "from the heavens he beheld the earth;"
             , number: 19
               }
           , { first: "That he might hear the groan of the captive * "
             , second: "and set free those condemned to die;"
             , number: 20
               }
           , { first: "That they may declare in Zion the Name of the Lord, * "
             , second: "and his praise in Jerusalem;"
             , number: 21
               }
           , { first: "When the peoples are gathered together, * "
             , second: "and the kingdoms also, to serve the Lord."
             , number: 22
               }
           , { first: "He has brought down my strength before my time; * "
             , second: "he has shortened the number of my days;"
             , number: 23
               }
           , { first: "And I said, “O my God, do not take me away in the midst of my days; * "
             , second: "your years endure throughout all generations."
             , number: 24
               }
           , { first: "In the beginning, O Lord, you laid the foundations of the earth, * "
             , second: "and the heavens are the work of your hands;"
             , number: 25
               }
           , { first: "They shall perish, but you will endure; they all shall wear out like a garment; * "
             , second: "as clothing you will change them, and they shall be changed;"
             , number: 26
               }
           , { first: "But you are always the same, * "
             , second: "and your years will never end."
             , number: 27
               }
           , { first: "The children of your servants shall continue, * "
             , second: "and their offspring shall stand fast in your sight.”"
             , number: 28
               }
             ]
    }
  , 103:
    { name: "Psalm 103."
    , title: "Benedic, anima mea"
    , vss: [ { first: "Bless the Lord, O my soul, * "
             , second: "and all that is within me, bless his holy Name."
             , number: 1
               }
           , { first: "Bless the Lord, O my soul, * "
             , second: "and forget not all his benefits."
             , number: 2
               }
           , { first: "He forgives all your sins * "
             , second: "and heals all your infirmities;"
             , number: 3
               }
           , { first: "He redeems your life from the grave * "
             , second: "and crowns you with mercy and loving-kindness;"
             , number: 4
               }
           , { first: "He satisfies you with good things, * "
             , second: "and your youth is renewed like an eagle’s."
             , number: 5
               }
           , { first: "The Lord executes righteousness * "
             , second: "and judgment for all who are oppressed."
             , number: 6
               }
           , { first: "He made his ways known to Moses * "
             , second: "and his works to the children of Israel."
             , number: 7
               }
           , { first: "The Lord is full of compassion and mercy, * "
             , second: "slow to anger and of great kindness."
             , number: 8
               }
           , { first: "He will not always accuse us, * "
             , second: "nor will he keep his anger for ever."
             , number: 9
               }
           , { first: "He has not dealt with us according to our sins, * "
             , second: "nor rewarded us according to our wickedness."
             , number: 10
               }
           , { first: "For as the heavens are high above the earth, * "
             , second: "so is his mercy great upon those who fear him."
             , number: 11
               }
           , { first: "As far as the east is from the west, * "
             , second: "so far has he removed our sins from us."
             , number: 12
               }
           , { first: "As a father cares for his children, * "
             , second: "so does the Lord care for those who fear him."
             , number: 13
               }
           , { first: "For he himself knows whereof we are made; * "
             , second: "he remembers that we are but dust."
             , number: 14
               }
           , { first: "Our days are like the grass; * "
             , second: "we flourish like a flower of the field;"
             , number: 15
               }
           , { first: "When the wind goes over it, it is gone, * "
             , second: "and its place shall know it no more."
             , number: 16
               }
           , { first: "But the merciful goodness of the Lord endures for ever on those who fear him, * "
             , second: "and his righteousness on children’s children;"
             , number: 17
               }
           , { first: "On those who keep his covenant * "
             , second: "and remember his commandments and do them."
             , number: 18
               }
           , { first: "The Lord has set his throne in heaven, * "
             , second: "and his kingship has dominion over all."
             , number: 19
               }
           , { first: "Bless the Lord, you angels of his, you mighty ones who do his bidding, * "
             , second: "and hearken to the voice of his word."
             , number: 20
               }
           , { first: "Bless the Lord, all you his hosts, * "
             , second: "you ministers of his who do his will."
             , number: 21
               }
           , { first: "Bless the Lord, all you works of his, in all places of his dominion; * "
             , second: "bless the Lord, O my soul."
             , number: 22
               }
             ]
    }
  , 104:
    { name: "Psalm 104."
    , title: "Benedic, anima mea"
    , vss: [ { first: "Bless the Lord, O my soul; * "
             , second: "O Lord my God, how excellent is your greatness! you are clothed with majesty and splendor."
             , number: 1
               }
           , { first: "You wrap yourself with light as with a cloak * "
             , second: "and spread out the heavens like a curtain."
             , number: 2
               }
           , { first: "You lay the beams of your chambers in the waters above; * "
             , second: "you make the clouds your chariot; you ride on the wings of the wind."
             , number: 3
               }
           , { first: "You make the winds your messengers * "
             , second: "and flames of fire your servants."
             , number: 4
               }
           , { first: "You have set the earth upon its foundations, * "
             , second: "so that it never shall move at any time."
             , number: 5
               }
           , { first: "You covered it with the Deep as with a mantle; * "
             , second: "the waters stood higher than the mountains."
             , number: 6
               }
           , { first: "At your rebuke they fled; * "
             , second: "at the voice of your thunder they hastened away."
             , number: 7
               }
           , { first: "They went up into the hills and down to the valleys beneath, * "
             , second: "to the places you had appointed for them."
             , number: 8
               }
           , { first: "You set the limits that they should not pass; * "
             , second: "they shall not again cover the earth."
             , number: 9
               }
           , { first: "You send the springs into the valleys; * "
             , second: "they flow between the mountains."
             , number: 10
               }
           , { first: "All the beasts of the field drink their fill from them, * "
             , second: "and the wild asses quench their thirst."
             , number: 11
               }
           , { first: "Beside them the birds of the air make their nests * "
             , second: "and sing among the branches."
             , number: 12
               }
           , { first: "You water the mountains from your dwelling on high; * "
             , second: "the earth is fully satisfied by the fruit of your works."
             , number: 13
               }
           , { first: "You make grass grow for flocks and herds * "
             , second: "and plants to serve mankind;"
             , number: 14
               }
           , { first: "That they may bring forth food from the earth, * "
             , second: "and wine to gladden our hearts,"
             , number: 15
               }
           , { first: "Oil to make a cheerful countenance, * "
             , second: "and bread to strengthen the heart."
             , number: 16
               }
           , { first: "The trees of the Lord are full of sap, * "
             , second: "the cedars of Lebanon which he planted,"
             , number: 17
               }
           , { first: "In which the birds build their nests, * "
             , second: "and in whose tops the stork makes his dwelling."
             , number: 18
               }
           , { first: "The high hills are a refuge for the mountain goats, * "
             , second: "and the stony cliffs for the rock badgers."
             , number: 19
               }
           , { first: "You appointed the moon to mark the seasons, * "
             , second: "and the sun knows the time of its setting."
             , number: 20
               }
           , { first: "You make darkness that it may be night, * "
             , second: "in which all the beasts of the forest prowl."
             , number: 21
               }
           , { first: "The lions roar after their prey * "
             , second: "and seek their food from God."
             , number: 22
               }
           , { first: "The sun rises, and they slip away * "
             , second: "and lay themselves down in their dens."
             , number: 23
               }
           , { first: "Man goes forth to his work * "
             , second: "and to his labor until the evening."
             , number: 24
               }
           , { first: "O Lord, how manifold are your works! * "
             , second: "in wisdom you have made them all; the earth is full of your creatures."
             , number: 25
               }
           , { first: "Yonder is the great and wide sea with its living things too many to number, * "
             , second: "creatures both small and great."
             , number: 26
               }
           , { first: "There move the ships, and there is that Leviathan, * "
             , second: "which you have made for the sport of it."
             , number: 27
               }
           , { first: "All of them look to you * "
             , second: "to give them their food in due season."
             , number: 28
               }
           , { first: "You give it to them; they gather it; * "
             , second: "you open your hand, and they are filled with good things."
             , number: 29
               }
           , { first: "You hide your face, and they are terrified; * "
             , second: "you take away their breath, and they die and return to their dust."
             , number: 30
               }
           , { first: "You send forth your Spirit, and they are created; * "
             , second: "and so you renew the face of the earth."
             , number: 31
               }
           , { first: "May the glory of the Lord endure for ever; * "
             , second: "may the Lord rejoice in all his works."
             , number: 32
               }
           , { first: "He looks at the earth and it trembles; * "
             , second: "he touches the mountains and they smoke."
             , number: 33
               }
           , { first: "I will sing to the Lord as long as I live; * "
             , second: "I will praise my God while I have my being."
             , number: 34
               }
           , { first: "May these words of mine please him; * "
             , second: "I will rejoice in the Lord."
             , number: 35
               }
           , { first: "Let sinners be consumed out of the earth, * "
             , second: "and the wicked be no more."
             , number: 36
               }
           , { first: "Bless the Lord, O my soul. * "
             , second: "Hallelujah!"
             , number: 37
               }
             ]
    }
  , 105:
    { name: "Psalm 105."
    , title: ""
    , vss: [ { title: "Part I Confitemini Domino"
             , first: "Give thanks to the Lord and call upon his Name; * "
             , second: "make known his deeds among the peoples."
             , number: 1
               }
           , { first: "Sing to him, sing praises to him, * "
             , second: "and speak of all his marvelous works."
             , number: 2
               }
           , { first: "Glory in his holy Name; * "
             , second: "let the hearts of those who seek the Lord rejoice."
             , number: 3
               }
           , { first: "Search for the Lord and his strength; * "
             , second: "continually seek his face."
             , number: 4
               }
           , { first: "Remember the marvels he has done, * "
             , second: "his wonders and the judgments of his mouth,"
             , number: 5
               }
           , { first: "O offspring of Abraham his servant, * "
             , second: "O children of Jacob his chosen."
             , number: 6
               }
           , { first: "He is the Lord our God; * "
             , second: "his judgments prevail in all the world."
             , number: 7
               }
           , { first: "He has always been mindful of his covenant, * "
             , second: "the promise he made for a thousand generations:"
             , number: 8
               }
           , { first: "The covenant he made with Abraham, * "
             , second: "the oath that he swore to Isaac,"
             , number: 9
               }
           , { first: "Which he established as a statute for Jacob, * "
             , second: "an everlasting covenant for Israel,"
             , number: 10
               }
           , { first: "Saying, “To you will I give the land of Canaan * "
             , second: "to be your allotted inheritance.”"
             , number: 11
               }
           , { first: "When they were few in number, * "
             , second: "of little account, and sojourners in the land,"
             , number: 12
               }
           , { first: "Wandering from nation to nation * "
             , second: "and from one kingdom to another,"
             , number: 13
               }
           , { first: "He let no one oppress them * "
             , second: "and rebuked kings for their sake,"
             , number: 14
               }
           , { first: "Saying, “Do not touch my anointed * "
             , second: "and do my prophets no harm.”"
             , number: 15
               }
           , { first: "Then he called for a famine in the land * "
             , second: "and destroyed the supply of bread."
             , number: 16
               }
           , { first: "He sent a man before them, * "
             , second: "Joseph, who was sold as a slave."
             , number: 17
               }
           , { first: "They bruised his feet in fetters; * "
             , second: "his neck they put in an iron collar."
             , number: 18
               }
           , { first: "Until his prediction came to pass, * "
             , second: "the word of the Lord tested him."
             , number: 19
               }
           , { first: "The king sent and released him; * "
             , second: "the ruler of the peoples set him free."
             , number: 20
               }
           , { first: "He set him as a master over his household, * "
             , second: "as a ruler over all his possessions,"
             , number: 21
               }
           , { first: "To instruct his princes according to his will * "
             , second: "and to teach his elders wisdom."
             , number: 22
               }
           , { title: "Part II Et intravit Israel"
             , first: "Israel came into Egypt, * "
             , second: "and Jacob became a sojourner in the land of Ham."
             , number: 23
               }
           , { first: "The Lord made his people exceedingly fruitful; * "
             , second: "he made them stronger than their enemies;"
             , number: 24
               }
           , { first: "Whose heart he turned, so that they hated his people, * "
             , second: "and dealt unjustly with his servants."
             , number: 25
               }
           , { first: "He sent Moses his servant, * "
             , second: "and Aaron whom he had chosen."
             , number: 26
               }
           , { first: "They worked his signs among them, * "
             , second: "and portents in the land of Ham."
             , number: 27
               }
           , { first: "He sent darkness, and it grew dark; * "
             , second: "but the Egyptians rebelled against his words."
             , number: 28
               }
           , { first: "He turned their waters into blood * "
             , second: "and caused their fish to die."
             , number: 29
               }
           , { first: "Their land was overrun by frogs, * "
             , second: "in the very chambers of their kings."
             , number: 30
               }
           , { first: "He spoke, and there came swarms of insects * "
             , second: "and gnats within all their borders."
             , number: 31
               }
           , { first: "He gave them hailstones instead of rain, * "
             , second: "and flames of fire throughout their land."
             , number: 32
               }
           , { first: "He blasted their vines and their fig trees * "
             , second: "and shattered every tree in their country."
             , number: 33
               }
           , { first: "He spoke, and the locust came, * "
             , second: "and young locusts without number,"
             , number: 34
               }
           , { first: "Which ate up all the green plants in their land * "
             , second: "and devoured the fruit of their soil."
             , number: 35
               }
           , { first: "He struck down the firstborn of their land, * "
             , second: "the firstfruits of all their strength."
             , number: 36
               }
           , { first: "He led out his people with silver and gold; * "
             , second: "in all their tribes there was not one that stumbled."
             , number: 37
               }
           , { first: "Egypt was glad of their going, * "
             , second: "because they were afraid of them."
             , number: 38
               }
           , { first: "He spread out a cloud for a covering * "
             , second: "and a fire to give light in the night season."
             , number: 39
               }
           , { first: "They asked, and quails appeared, * "
             , second: "and he satisfied them with bread from heaven."
             , number: 40
               }
           , { first: "He opened the rock, and water flowed, * "
             , second: "so the river ran in the dry places."
             , number: 41
               }
           , { first: "For God remembered his holy word * "
             , second: "and Abraham his servant."
             , number: 42
               }
           , { first: "So he led forth his people with gladness, * "
             , second: "his chosen with shouts of joy."
             , number: 43
               }
           , { first: "He gave his people the lands of the nations, * "
             , second: "and they took the fruit of others’ toil,"
             , number: 44
               }
           , { first: "That they might keep his statutes * "
             , second: "and observe his laws. Hallelujah!"
             , number: 45
               }
             ]
    }
  , 106:
    { name: "Psalm 106."
    , title: ""
    , vss: [ { title: "Part I Confitemini Domino"
             , first: "Hallelujah! Give thanks to the Lord, for he is good, * "
             , second: "for his mercy endures for ever."
             , number: 1
               }
           , { first: "Who can declare the mighty acts of the Lord * "
             , second: "or show forth all his praise?"
             , number: 2
               }
           , { first: "Happy are those who act with justice * "
             , second: "and always do what is right!"
             , number: 3
               }
           , { first: "Remember me, O Lord, with the favor you have for your people, * "
             , second: "and visit me with your saving help;"
             , number: 4
               }
           , { first: "That I may see the prosperity of your elect and be glad with the gladness of your people, * "
             , second: "that I may glory with your inheritance."
             , number: 5
               }
           , { first: "We have sinned as our forebears did; * "
             , second: "we have done wrong and dealt wickedly."
             , number: 6
               }
           , { first: "In Egypt they did not consider your marvelous works, nor remember the abundance of your love; * "
             , second: "they defied the Most High at the Red Sea."
             , number: 7
               }
           , { first: "But he saved them for his Name’s sake, * "
             , second: "to make his power known."
             , number: 8
               }
           , { first: "He rebuked the Red Sea, and it dried up, * "
             , second: "and he led them through the deep as through a desert."
             , number: 9
               }
           , { first: "He saved them from the hand of those who hated them * "
             , second: "and redeemed them from the hand of the enemy."
             , number: 0
               }
           , { first: "The waters covered their oppressors; * "
             , second: "not one of them was left."
             , number: 10
               }
           , { first: "Then they believed his words * "
             , second: "and sang him songs of praise."
             , number: 11
               }
           , { first: "But they soon forgot his deeds * "
             , second: "and did not wait for his counsel."
             , number: 12
               }
           , { first: "A craving seized them in the wilderness, * "
             , second: "and they put God to the test in the desert."
             , number: 13
               }
           , { first: "He gave them what they asked, * "
             , second: "but sent leanness into their soul."
             , number: 14
               }
           , { first: "They envied Moses in the camp, * "
             , second: "and Aaron, the holy one of the Lord."
             , number: 15
               }
           , { first: "The earth opened and swallowed Dathan * "
             , second: "and covered the company of Abiram."
             , number: 16
               }
           , { first: "Fire blazed up against their company, * "
             , second: "and flames devoured the wicked."
             , number: 17
               }
           , { title: "Part II Et fecerunt vitulum"
             , first: "Israel made a bull-calf at Horeb * "
             , second: "and worshiped a molten image;"
             , number: 18
               }
           , { first: "And so they exchanged their Glory * "
             , second: "for the image of an ox that feeds on grass."
             , number: 19
               }
           , { first: "They forgot God their Savior, * "
             , second: "who had done great things in Egypt,"
             , number: 20
               }
           , { first: "Wonderful deeds in the land of Ham, * "
             , second: "and fearful things at the Red Sea."
             , number: 21
               }
           , { first: "So he would have destroyed them, had not Moses his chosen stood before him in the breach, * "
             , second: "to turn away his wrath from consuming them."
             , number: 22
               }
           , { first: "They refused the pleasant land * "
             , second: "and would not believe his promise."
             , number: 23
               }
           , { first: "They grumbled in their tents * "
             , second: "and would not listen to the voice of the Lord."
             , number: 24
               }
           , { first: "So he lifted his hand against them, * "
             , second: "to overthrow them in the wilderness,"
             , number: 25
               }
           , { first: "To cast out their seed among the nations, * "
             , second: "and to scatter them throughout the lands."
             , number: 26
               }
           , { first: "They joined themselves to Baal-Peor * "
             , second: "and ate sacrifices offered to the dead."
             , number: 27
               }
           , { first: "They provoked him to anger with their actions, * "
             , second: "and a plague broke out among them."
             , number: 28
               }
           , { first: "Then Phinehas stood up and interceded, * "
             , second: "and the plague came to an end."
             , number: 29
               }
           , { first: "This was reckoned to him as righteousness * "
             , second: "throughout all generations for ever."
             , number: 30
               }
           , { first: "Again they provoked his anger at the waters of Meribah, * "
             , second: "so that he punished Moses because of them;"
             , number: 31
               }
           , { first: "For they so embittered his spirit * "
             , second: "that he spoke rash words with his lips."
             , number: 32
               }
           , { first: "They did not destroy the peoples * "
             , second: "as the Lord had commanded them."
             , number: 33
               }
           , { first: "They intermingled with the heathen * "
             , second: "and learned their pagan ways,"
             , number: 34
               }
           , { first: "So that they worshiped their idols, * "
             , second: "which became a snare to them."
             , number: 35
               }
           , { first: "They sacrificed their sons * "
             , second: "and their daughters to evil spirits."
             , number: 36
               }
           , { first: "They shed innocent blood, the blood of their sons and daughters, * "
             , second: "which they offered to the idols of Canaan, and the land was defiled with blood."
             , number: 37
               }
           , { first: "Thus they were polluted by their actions * "
             , second: "and went whoring in their evil deeds."
             , number: 38
               }
           , { first: "Therefore the wrath of the Lord was kindled against his people * "
             , second: "and he abhorred his inheritance."
             , number: 39
               }
           , { first: "He gave them over to the hand of the heathen, * "
             , second: "and those who hated them ruled over them."
             , number: 40
               }
           , { first: "Their enemies oppressed them, * "
             , second: "and they were humbled under their hand."
             , number: 41
               }
           , { first: "Many a time did he deliver them, but they rebelled through their own devices, * "
             , second: "and were brought down in their iniquity."
             , number: 42
               }
           , { first: "Nevertheless, he saw their distress, * "
             , second: "when he heard their lamentation."
             , number: 43
               }
           , { first: "He remembered his covenant with them * "
             , second: "and relented in accordance with his great mercy."
             , number: 44
               }
           , { first: "He caused them to be pitied * "
             , second: "by those who held them captive."
             , number: 45
               }
           , { first: "Save us, O Lord our God, and gather us from among the nations, * "
             , second: "that we may give thanks to your holy Name and glory in your praise."
             , number: 46
               }
           , { first: "Blessed be the Lord, the God of Israel, from everlasting and to everlasting; * "
             , second: "and let all the people say, “Amen!” Hallelujah!"
             , number: 47
               }
             ]
    }
  , 107:
    { name: "Psalm 107."
    , title: ""
    , vss: [ { title: "Part I Confitemini Domino"
             , first: "Give thanks to the Lord, for he is good, * "
             , second: "and his mercy endures for ever."
             , number: 1
               }
           , { first: "Let all those whom the Lord has redeemed proclaim * "
             , second: "that he redeemed them from the hand of the foe."
             , number: 2
               }
           , { first: "He gathered them out of the lands; * "
             , second: "from the east and from the west, from the north and from the south."
             , number: 3
               }
           , { first: "Some wandered in desert wastes; * "
             , second: "they found no way to a city where they might dwell."
             , number: 4
               }
           , { first: "They were hungry and thirsty; * "
             , second: "their spirits languished within them."
             , number: 5
               }
           , { first: "Then they cried to the Lord in their trouble, * "
             , second: "and he delivered them from their distress."
             , number: 6
               }
           , { first: "He put their feet on a straight path * "
             , second: "to go to a city where they might dwell."
             , number: 7
               }
           , { first: "Let them give thanks to the Lord for his mercy * "
             , second: "and the wonders he does for his children."
             , number: 8
               }
           , { first: "For he satisfies the thirsty * "
             , second: "and fills the hungry with good things."
             , number: 9
               }
           , { first: "Some sat in darkness and deep gloom, * "
             , second: "bound fast in misery and iron;"
             , number: 10
               }
           , { first: "Because they rebelled against the words of God * "
             , second: "and despised the counsel of the Most High."
             , number: 11
               }
           , { first: "So he humbled their spirits with hard labor; * "
             , second: "they stumbled, and there was none to help."
             , number: 12
               }
           , { first: "Then they cried to the Lord in their trouble, * "
             , second: "and he delivered them from their distress."
             , number: 13
               }
           , { first: "He led them out of darkness and deep gloom * "
             , second: "and broke their bonds asunder."
             , number: 14
               }
           , { first: "Let them give thanks to the Lord for his mercy * "
             , second: "and the wonders he does for his children."
             , number: 15
               }
           , { first: "For he shatters the doors of bronze * "
             , second: "and breaks in two the iron bars."
             , number: 16
               }
           , { first: "Some were fools and took to rebellious ways; * "
             , second: "they were afflicted because of their sins."
             , number: 17
               }
           , { first: "They abhorred all manner of food * "
             , second: "and drew near to death’s door."
             , number: 18
               }
           , { first: "Then they cried to the Lord in their trouble, * "
             , second: "and he delivered them from their distress."
             , number: 19
               }
           , { first: "He sent forth his word and healed them * "
             , second: "and saved them from the grave."
             , number: 20
               }
           , { first: "Let them give thanks to the Lord for his mercy * "
             , second: "and the wonders he does for his children."
             , number: 21
               }
           , { first: "Let them offer a sacrifice of thanksgiving * "
             , second: "and tell of his acts with shouts of joy."
             , number: 22
               }
           , { first: "Some went down to the sea in ships * "
             , second: "and plied their trade in deep waters;"
             , number: 23
               }
           , { first: "They beheld the works of the Lord * "
             , second: "and his wonders in the deep."
             , number: 24
               }
           , { first: "Then he spoke, and a stormy wind arose, * "
             , second: "which tossed high the waves of the sea."
             , number: 25
               }
           , { first: "They mounted up to the heavens and fell back to the depths; * "
             , second: "their hearts melted because of their peril."
             , number: 26
               }
           , { first: "They reeled and staggered like drunkards * "
             , second: "and were at their wits’ end."
             , number: 27
               }
           , { first: "Then they cried to the Lord in their trouble, * "
             , second: "and he delivered them from their distress."
             , number: 28
               }
           , { first: "He stilled the storm to a whisper * "
             , second: "and quieted the waves of the sea."
             , number: 29
               }
           , { first: "Then were they glad because of the calm, * "
             , second: "and he brought them to the harbor they were bound for."
             , number: 30
               }
           , { first: "Let them give thanks to the Lord for his mercy * "
             , second: "and the wonders he does for his children."
             , number: 40
               }
           , { first: "Let them exalt him in the congregation of the people * "
             , second: "and praise him in the council of the elders."
             , number: 41
               }
           , { title: "Part II Posuit flumina"
             , first: "The Lord changed rivers into deserts, * "
             , second: "and water-springs into thirsty ground,"
             , number: 42
               }
           , { first: "A fruitful land into salt flats, * "
             , second: "because of the wickedness of those who dwell there."
             , number: 43
               }
           , { first: "He changed deserts into pools of water * "
             , second: "and dry land into water-springs."
             , number: 44
               }
           , { first: "He settled the hungry there, * "
             , second: "and they founded a city to dwell in."
             , number: 45
               }
           , { first: "They sowed fields, and planted vineyards, * "
             , second: "and brought in a fruitful harvest."
             , number: 46
               }
           , { first: "He blessed them, so that they increased greatly; * "
             , second: "he did not let their herds decrease."
             , number: 47
               }
           , { first: "Yet when they were diminished and brought low, * "
             , second: "through stress of adversity and sorrow,"
             , number: 48
               }
           , { first: "(He pours contempt on princes * "
             , second: "and makes them wander in trackless wastes)"
             , number: 49
               }
           , { first: "He lifted up the poor out of misery * "
             , second: "and multiplied their families like flocks of sheep."
             , number: 50
               }
           , { first: "The upright will see this and rejoice, * "
             , second: "but all wickedness will shut its mouth."
             , number: 51
               }
           , { first: "Whoever is wise will ponder these things, * "
             , second: "and consider well the mercies of the Lord."
             , number: 52
               }
             ]
    }
  , 108:
    { name: "Psalm 108."
    , title: "Paratum cor meum"
    , vss: [ { first: "My heart is firmly fixed, O God, my heart is fixed; * "
             , second: "I will sing and make melody."
             , number: 1
               }
           , { first: "Wake up, my spirit; awake, lute and harp; * "
             , second: "I myself will waken the dawn."
             , number: 2
               }
           , { first: "I will confess you among the peoples, O Lord; * "
             , second: "I will sing praises to you among the nations."
             , number: 3
               }
           , { first: "For your loving-kindness is greater than the heavens, * "
             , second: "and your faithfulness reaches to the clouds."
             , number: 4
               }
           , { first: "Exalt yourself above the heavens, O God, * "
             , second: "and your glory over all the earth."
             , number: 5
               }
           , { first: "So that those who are dear to you may be delivered, * "
             , second: "save with your right hand and answer me."
             , number: 6
               }
           , { first: "God spoke from his holy place and said, * "
             , second: "“I will exult and parcel out Shechem; I will divide the valley of Succoth."
             , number: 7
               }
           , { first: "Gilead is mine and Manasseh is mine; * "
             , second: "Ephraim is my helmet and Judah my scepter."
             , number: 8
               }
           , { first: "Moab is my washbasin, on Edom I throw down my sandal to claim it, * "
             , second: "and over Philistia will I shout in triumph.”"
             , number: 9
               }
           , { first: "Who will lead me into the strong city? * "
             , second: "who will bring me into Edom?"
             , number: 10
               }
           , { first: "Have you not cast us off, O God? * "
             , second: "you no longer go out, O God, with our armies."
             , number: 11
               }
           , { first: "Grant us your help against the enemy, * "
             , second: "for vain is the help of man."
             , number: 12
               }
           , { first: "With God we will do valiant deeds, * "
             , second: "and he shall tread our enemies under foot."
             , number: 13
               }
             ]
    }
  , 109:
    { name: "Psalm 109."
    , title: "Deus, laudem"
    , vss: [ { first: "Hold not your tongue, O God of my praise; * "
             , second: "for the mouth of the wicked, the mouth of the deceitful, is opened against me."
             , number: 1
               }
           , { first: "They speak to me with a lying tongue; * "
             , second: "they encompass me with hateful words and fight against me without a cause."
             , number: 2
               }
           , { first: "Despite my love, they accuse me; * "
             , second: "but as for me, I pray for them."
             , number: 3
               }
           , { first: "They repay evil for good, * "
             , second: "and hatred for my love."
             , number: 4
               }
           , { first: "Set a wicked man against him, * "
             , second: "and let an accuser stand at his right hand."
             , number: 5
               }
           , { first: "When he is judged, let him be found guilty, * "
             , second: "and let his appeal be in vain."
             , number: 6
               }
           , { first: "Let his days be few, * "
             , second: "and let another take his office."
             , number: 7
               }
           , { first: "Let his children be fatherless, * "
             , second: "and his wife become a widow."
             , number: 8
               }
           , { first: "Let his children be waifs and beggars; * "
             , second: "let them be driven from the ruins of their homes."
             , number: 9
               }
           , { first: "Let the creditor seize everything he has; * "
             , second: "let strangers plunder his gains."
             , number: 10
               }
           , { first: "Let there be no one to show him kindness, * "
             , second: "and none to pity his fatherless children."
             , number: 11
               }
           , { first: "Let his descendants be destroyed, * "
             , second: "and his name be blotted out in the next generation."
             , number: 12
               }
           , { first: "Let the wickedness of his fathers be remembered before the Lord, * "
             , second: "and his mother’s sin not be blotted out;"
             , number: 13
               }
           , { first: "Let their sin be always before the Lord; * "
             , second: "but let him root out their names from the earth;"
             , number: 14
               }
           , { first: "Because he did not remember to show mercy, * "
             , second: "but persecuted the poor and needy and sought to kill the brokenhearted."
             , number: 15
               }
           , { first: "He loved cursing, let it come upon him; * "
             , second: "he took no delight in blessing, let it depart from him."
             , number: 16
               }
           , { first: "He put on cursing like a garment, * "
             , second: "let it soak into his body like water and into his bones like oil;"
             , number: 17
               }
           , { first: "Let it be to him like the cloak which he wraps around himself, * "
             , second: "and like the belt that he wears continually."
             , number: 18
               }
           , { first: "Let this be the recompense from the Lord to my accusers, * "
             , second: "and to those who speak evil against me."
             , number: 19
               }
           , { first: "But you, O Lord my God, oh, deal with me according to your Name; * "
             , second: "for your tender mercy’s sake, deliver me."
             , number: 20
               }
           , { first: "For I am poor and needy, * "
             , second: "and my heart is wounded within me."
             , number: 21
               }
           , { first: "I have faded away like a shadow when it lengthens; * "
             , second: "I am shaken off like a locust."
             , number: 22
               }
           , { first: "My knees are weak through fasting, * "
             , second: "and my flesh is wasted and gaunt."
             , number: 23
               }
           , { first: "I have become a reproach to them; * "
             , second: "they see and shake their heads."
             , number: 24
               }
           , { first: "Help me, O Lord my God; * "
             , second: "save me for your mercy’s sake."
             , number: 25
               }
           , { first: "Let them know that this is your hand, * "
             , second: "that you, O Lord, have done it."
             , number: 26
               }
           , { first: "They may curse, but you will bless; * "
             , second: "let those who rise up against me be put to shame, and your servant will rejoice."
             , number: 27
               }
           , { first: "Let my accusers be clothed with disgrace * "
             , second: "and wrap themselves in their shame as in a cloak."
             , number: 28
               }
           , { first: "I will give great thanks to the Lord with my mouth; * "
             , second: "in the midst of the multitude will I praise him;"
             , number: 29
               }
           , { first: "Because he stands at the right hand of the needy, * "
             , second: "to save his life from those who would condemn him."
             , number: 30
               }
             ]
    }
  , 110:
    { name: "Psalm 110."
    , title: "Dixit Dominus"
    , vss: [ { first: "The Lord said to my Lord, “Sit at my right hand, * "
             , second: "until I make your enemies your footstool.”"
             , number: 1
               }
           , { first: "The Lord will send the scepter of your power out of Zion, * "
             , second: "saying, “Rule over your enemies round about you."
             , number: 2
               }
           , { first: "Princely state has been yours from the day of your birth; * "
             , second: "in the beauty of holiness have I begotten you, like dew from the womb of the morning.”"
             , number: 3
               }
           , { first: "The Lord has sworn and he will not recant: * "
             , second: "“You are a priest for ever after the order of Melchizedek.”"
             , number: 4
               }
           , { first: "The Lord who is at your right hand will smite kings in the day of his wrath; * "
             , second: "he will rule over the nations."
             , number: 5
               }
           , { first: "He will heap high the corpses; * "
             , second: "he will smash heads over the wide earth."
             , number: 6
               }
           , { first: "He will drink from the brook beside the road; * "
             , second: "therefore he will lift high his head."
             , number: 7
               }
             ]
    }
  , 111:
    { name: "Psalm 111."
    , title: "Confitebor tibi"
    , vss: [ { first: "Hallelujah! I will give thanks to the Lord with my whole heart, * "
             , second: "in the assembly of the upright, in the congregation."
             , number: 1
               }
           , { first: "Great are the deeds of the Lord! * "
             , second: "they are studied by all who delight in them."
             , number: 2
               }
           , { first: "His work is full of majesty and splendor, * "
             , second: "and his righteousness endures for ever."
             , number: 3
               }
           , { first: "He makes his marvelous works to be remembered; * "
             , second: "the Lord is gracious and full of compassion."
             , number: 4
               }
           , { first: "He gives food to those who fear him; * "
             , second: "he is ever mindful of his covenant."
             , number: 5
               }
           , { first: "He has shown his people the power of his works * "
             , second: "in giving them the lands of the nations."
             , number: 6
               }
           , { first: "The works of his hands are faithfulness and justice; * "
             , second: "all his commandments are sure."
             , number: 7
               }
           , { first: "They stand fast for ever and ever, * "
             , second: "because they are done in truth and equity."
             , number: 8
               }
           , { first: "He sent redemption to his people; he commanded his covenant for ever; * "
             , second: "holy and awesome is his Name."
             , number: 9
               }
           , { first: "The fear of the Lord is the beginning of wisdom; * "
             , second: "those who act accordingly have a good understanding; his praise endures for ever."
             , number: 10
               }
             ]
    }
  , 112:
    { name: "Psalm 112."
    , title: "Beatus vir"
    , vss: [ { first: "Hallelujah! Happy are they who fear the Lord * "
             , second: "and have great delight in his commandments!"
             , number: 1
               }
           , { first: "Their descendants will be mighty in the land; * "
             , second: "the generation of the upright will be blessed."
             , number: 2
               }
           , { first: "Wealth and riches will be in their house, * "
             , second: "and their righteousness will last for ever."
             , number: 3
               }
           , { first: "Light shines in the darkness for the upright; * "
             , second: "the righteous are merciful and full of compassion."
             , number: 4
               }
           , { first: "It is good for them to be generous in lending * "
             , second: "and to manage their affairs with justice."
             , number: 5
               }
           , { first: "For they will never be shaken; * "
             , second: "the righteous will be kept in everlasting remembrance."
             , number: 6
               }
           , { first: "They will not be afraid of any evil rumors; * "
             , second: "their heart is right; they put their trust in the Lord."
             , number: 7
               }
           , { first: "Their heart is established and will not shrink, * "
             , second: "until they see their desire upon their enemies."
             , number: 8
               }
           , { first: "They have given freely to the poor, * "
             , second: "and their righteousness stands fast for ever; they will hold up their head with honor."
             , number: 9
               }
           , { first: "The wicked will see it and be angry; they will gnash their teeth and pine away; * "
             , second: "the desires of the wicked will perish."
             , number: 10
               }
             ]
    }
  , 113:
    { name: "Psalm 113."
    , title: "Laudate, pueri"
    , vss: [ { first: "Hallelujah! Give praise, you servants of the Lord; * "
             , second: "praise the Name of the Lord."
             , number: 1
               }
           , { first: "Let the Name of the Lord be blessed, * "
             , second: "from this time forth for evermore."
             , number: 2
               }
           , { first: "From the rising of the sun to its going down * "
             , second: "let the Name of the Lord be praised."
             , number: 3
               }
           , { first: "The Lord is high above all nations, * "
             , second: "and his glory above the heavens."
             , number: 4
               }
           , { first: "Who is like the Lord our God, who sits enthroned on high, * "
             , second: "but stoops to behold the heavens and the earth?"
             , number: 5
               }
           , { first: "He takes up the weak out of the dust * "
             , second: "and lifts up the poor from the ashes."
             , number: 6
               }
           , { first: "He sets them with the princes, * "
             , second: "with the princes of his people."
             , number: 7
               }
           , { first: "He makes the woman of a childless house * "
             , second: "to be a joyful mother of children."
             , number: 8
               }
             ]
    }
  , 114:
    { name: "Psalm 114."
    , title: "In exitu Israel"
    , vss: [ { first: "Hallelujah! When Israel came out of Egypt, * "
             , second: "the house of Jacob from a people of strange speech,"
             , number: 1
               }
           , { first: "Judah became God’s sanctuary * "
             , second: "and Israel his dominion."
             , number: 2
               }
           , { first: "The sea beheld it and fled; * "
             , second: "Jordan turned and went back."
             , number: 3
               }
           , { first: "The mountains skipped like rams, * "
             , second: "and the little hills like young sheep."
             , number: 4
               }
           , { first: "What ailed you, O sea, that you fled? * "
             , second: "O Jordan, that you turned back?"
             , number: 5
               }
           , { first: "You mountains, that you skipped like rams? * "
             , second: "you little hills like young sheep?"
             , number: 6
               }
           , { first: "Tremble, O earth, at the presence of the Lord, * "
             , second: "at the presence of the God of Jacob,"
             , number: 7
               }
           , { first: "Who turned the hard rock into a pool of water * "
             , second: "and flint-stone into a flowing spring."
             , number: 8
               }
             ]
    }
  , 115:
    { name: "Psalm 115."
    , title: "Non nobis, Domine"
    , vss: [ { first: "Not to us, O Lord, not to us, but to your Name give glory; * "
             , second: "because of your love and because of your faithfulness."
             , number: 1
               }
           , { first: "Why should the heathen say, * "
             , second: "“Where then is their God?”"
             , number: 2
               }
           , { first: "Our God is in heaven; * "
             , second: "whatever he wills to do he does."
             , number: 3
               }
           , { first: "Their idols are silver and gold, * "
             , second: "the work of human hands."
             , number: 4
               }
           , { first: "They have mouths, but they cannot speak; * "
             , second: "eyes have they, but they cannot see;"
             , number: 5
               }
           , { first: "They have ears, but they cannot hear; * "
             , second: "noses, but they cannot smell;"
             , number: 6
               }
           , { first: "They have hands, but they cannot feel; feet, but they cannot walk; * "
             , second: "they make no sound with their throat."
             , number: 7
               }
           , { first: "Those who make them are like them, * "
             , second: "and so are all who put their trust in them."
             , number: 8
               }
           , { first: "O Israel, trust in the Lord; * "
             , second: "he is their help and their shield."
             , number: 9
               }
           , { first: "O house of Aaron, trust in the Lord; * "
             , second: "he is their help and their shield."
             , number: 10
               }
           , { first: "You who fear the Lord, trust in the Lord; * "
             , second: "he is their help and their shield."
             , number: 11
               }
           , { first: "The Lord has been mindful of us, and he will bless us; * "
             , second: "he will bless the house of Israel; he will bless the house of Aaron;"
             , number: 12
               }
           , { first: "He will bless those who fear the Lord, * "
             , second: "both small and great together."
             , number: 13
               }
           , { first: "May the Lord increase you more and more, * "
             , second: "you and your children after you."
             , number: 14
               }
           , { first: "May you be blessed by the Lord, * "
             , second: "the maker of heaven and earth."
             , number: 15
               }
           , { first: "The heaven of heavens is the Lord’s, * "
             , second: "but he entrusted the earth to its peoples."
             , number: 16
               }
           , { first: "The dead do not praise the Lord, * "
             , second: "nor all those who go down into silence;"
             , number: 17
               }
           , { first: "But we will bless the Lord, * "
             , second: "from this time forth for evermore. Hallelujah!"
             , number: 18
               }
             ]
    }
  , 116:
    { name: "Psalm 116."
    , title: "Dilexi, quoniam"
    , vss: [ { first: "I love the Lord, because he has heard the voice of my supplication, * "
             , second: "because he has inclined his ear to me whenever I called upon him."
             , number: 1
               }
           , { first: "The cords of death entangled me; the grip of the grave took hold of me; * "
             , second: "I came to grief and sorrow."
             , number: 2
               }
           , { first: "Then I called upon the Name of the Lord: * "
             , second: "“O Lord, I pray you, save my life.”"
             , number: 3
               }
           , { first: "Gracious is the Lord and righteous; * "
             , second: "our God is full of compassion."
             , number: 4
               }
           , { first: "The Lord watches over the innocent; * "
             , second: "I was brought very low, and he helped me."
             , number: 5
               }
           , { first: "Turn again to your rest, O my soul, * "
             , second: "for the Lord has treated you well."
             , number: 6
               }
           , { first: "For you have rescued my life from death, * "
             , second: "my eyes from tears, and my feet from stumbling."
             , number: 7
               }
           , { first: "I will walk in the presence of the Lord * "
             , second: "in the land of the living."
             , number: 8
               }
           , { first: "I believed, even when I said, “I have been brought very low.” * "
             , second: "In my distress I said, “No one can be trusted.”"
             , number: 9
               }
           , { first: "How shall I repay the Lord * "
             , second: "for all the good things he has done for me?"
             , number: 10
               }
           , { first: "I will lift up the cup of salvation * "
             , second: "and call upon the Name of the Lord."
             , number: 11
               }
           , { first: "I will fulfill my vows to the Lord * "
             , second: "in the presence of all his people."
             , number: 12
               }
           , { first: "Precious in the sight of the Lord * "
             , second: "is the death of his servants."
             , number: 13
               }
           , { first: "O Lord, I am your servant; * "
             , second: "I am your servant and the child of your handmaid; you have freed me from my bonds."
             , number: 14
               }
           , { first: "I will offer you the sacrifice of thanksgiving * "
             , second: "and call upon the Name of the Lord."
             , number: 15
               }
           , { first: "I will fulfill my vows to the Lord * "
             , second: "in the presence of all his people,"
             , number: 16
               }
           , { first: "In the courts of the Lord’s house, * "
             , second: "in the midst of you, O Jerusalem. Hallelujah!"
             , number: 17
               }
             ]
    }
  , 117:
    { name: "Psalm 117."
    , title: "Laudate Dominum"
    , vss: [ { first: "Praise the Lord, all you nations; * "
             , second: "laud him, all you peoples."
             , number: 1
               }
           , { first: "For his loving-kindness toward us is great, * "
             , second: "and the faithfulness of the Lord endures for ever. Hallelujah!"
             , number: 2
               }
             ]
    }
  , 118:
    { name: "Psalm 118."
    , title: "Confitemini Domino"
    , vss: [ { first: "Give thanks to the Lord, for he is good; * "
             , second: "his mercy endures for ever."
             , number: 1
               }
           , { first: "Let Israel now proclaim, * "
             , second: "“His mercy endures for ever.”"
             , number: 2
               }
           , { first: "Let the house of Aaron now proclaim, * "
             , second: "“His mercy endures for ever.”"
             , number: 3
               }
           , { first: "Let those who fear the Lord now proclaim, * "
             , second: "“His mercy endures for ever.”"
             , number: 4
               }
           , { first: "I called to the Lord in my distress; * "
             , second: "the Lord answered by setting me free."
             , number: 5
               }
           , { first: "The Lord is at my side, therefore I will not fear; * "
             , second: "what can anyone do to me?"
             , number: 6
               }
           , { first: "The Lord is at my side to help me; * "
             , second: "I will triumph over those who hate me."
             , number: 7
               }
           , { first: "It is better to rely on the Lord * "
             , second: "than to put any trust in flesh."
             , number: 8
               }
           , { first: "It is better to rely on the Lord * "
             , second: "than to put any trust in rulers."
             , number: 9
               }
           , { first: "All the ungodly encompass me; * "
             , second: "in the name of the Lord I will repel them."
             , number: 10
               }
           , { first: "They hem me in, they hem me in on every side; * "
             , second: "in the name of the Lord I will repel them."
             , number: 11
               }
           , { first: "They swarm about me like bees; they blaze like a fire of thorns; * "
             , second: "in the name of the Lord I will repel them."
             , number: 12
               }
           , { first: "I was pressed so hard that I almost fell, * "
             , second: "but the Lord came to my help."
             , number: 13
               }
           , { first: "The Lord is my strength and my song, * "
             , second: "and he has become my salvation."
             , number: 14
               }
           , { first: "There is a sound of exultation and victory * "
             , second: "in the tents of the righteous:"
             , number: 15
               }
           , { first: "“The right hand of the Lord has triumphed! * "
             , second: "the right hand of the Lord is exalted! the right hand of the Lord has triumphed!”"
             , number: 16
               }
           , { first: "I shall not die, but live, * "
             , second: "and declare the works of the Lord."
             , number: 17
               }
           , { first: "The Lord has punished me sorely, * "
             , second: "but he did not hand me over to death."
             , number: 18
               }
           , { first: "Open for me the gates of righteousness; * "
             , second: "I will enter them; I will offer thanks to the Lord."
             , number: 19
               }
           , { first: "“This is the gate of the Lord; * "
             , second: "he who is righteous may enter.”"
             , number: 20
               }
           , { first: "I will give thanks to you, for you answered me * "
             , second: "and have become my salvation."
             , number: 21
               }
           , { first: "The same stone which the builders rejected * "
             , second: "has become the chief cornerstone."
             , number: 22
               }
           , { first: "This is the Lord’s doing, * "
             , second: "and it is marvelous in our eyes."
             , number: 23
               }
           , { first: "On this day the Lord has acted; * "
             , second: "we will rejoice and be glad in it."
             , number: 24
               }
           , { first: "Hosannah, Lord, hosannah! * "
             , second: "Lord, send us now success."
             , number: 25
               }
           , { first: "Blessed is he who comes in the name of the Lord; * "
             , second: "we bless you from the house of the Lord."
             , number: 26
               }
           , { first: "God is the Lord; he has shined upon us; * "
             , second: "form a procession with branches up to the horns of the altar."
             , number: 27
               }
           , { first: "“You are my God, and I will thank you; * "
             , second: "you are my God, and I will exalt you.”"
             , number: 28
               }
           , { first: "Give thanks to the Lord, for he is good; * "
             , second: "his mercy endures for ever."
             , number: 29
               }
             ]
    }
  , 119:
    { name: "Psalm 119."
    , title: ""
    , vss: [ { title: "Aleph Beati immaculati"
             , first: "Happy are they whose way is blameless, * "
             , second: "who walk in the law of the Lord!"
             , number: 1
               }
           , { first: "Happy are they who observe his decrees * "
             , second: "and seek him with all their hearts!"
             , number: 2
               }
           , { first: "Who never do any wrong, * "
             , second: "but always walk in his ways."
             , number: 3
               }
           , { first: "You laid down your commandments, * "
             , second: "that we should fully keep them."
             , number: 4
               }
           , { first: "Oh, that my ways were made so direct * "
             , second: "that I might keep your statutes!"
             , number: 5
               }
           , { first: "Then I should not be put to shame, * "
             , second: "when I regard all your commandments."
             , number: 6
               }
           , { first: "I will thank you with an unfeigned heart, * "
             , second: "when I have learned your righteous judgments."
             , number: 7
               }
           , { first: "I will keep your statutes; * "
             , second: "do not utterly forsake me.  Beth In quo corrigit?"
             , number: 8
               }
           , { first: "How shall a young man cleanse his way? * "
             , second: "By keeping to your words."
             , number: 9
               }
           , { first: "With my whole heart I seek you; * "
             , second: "let me not stray from your commandments."
             , number: 10
               }
           , { first: "I treasure your promise in my heart, * "
             , second: "that I may not sin against you."
             , number: 11
               }
           , { first: "Blessed are you, O Lord; * "
             , second: "instruct me in your statutes."
             , number: 12
               }
           , { first: "With my lips will I recite * "
             , second: "all the judgments of your mouth."
             , number: 13
               }
           , { first: "I have taken greater delight in the way of your decrees * "
             , second: "than in all manner of riches."
             , number: 14
               }
           , { first: "I will meditate on your commandments * "
             , second: "and give attention to your ways."
             , number: 15
               }
           , { first: "My delight is in your statutes; * "
             , second: "I will not forget your word. Gimel Retribue servo tuo"
             , number: 16
               }
           , { first: "Deal bountifully with your servant, * "
             , second: "that I may live and keep your word."
             , number: 17
               }
           , { first: "Open my eyes, that I may see * "
             , second: "the wonders of your law."
             , number: 18
               }
           , { first: "I am a stranger here on earth; * "
             , second: "do not hide your commandments from me."
             , number: 19
               }
           , { first: "My soul is consumed at all times * "
             , second: "with longing for your judgments."
             , number: 20
               }
           , { first: "You have rebuked the insolent; * "
             , second: "cursed are they who stray from your commandments!"
             , number: 21
               }
           , { first: "Turn from me shame and rebuke, * "
             , second: "for I have kept your decrees."
             , number: 22
               }
           , { first: "Even though rulers sit and plot against me, * "
             , second: "I will meditate on your statutes."
             , number: 23
               }
           , { first: "For your decrees are my delight, * "
             , second: "and they are my counselors. "
             , number: 24
               }
           , { title: "Daleth Adhæsit pavimento"
             , first: "My soul cleaves to the dust; * "
             , second: "give me life according to your word."
             , number: 25
               }
           , { first: "I have confessed my ways, and you answered me; * "
             , second: "instruct me in your statutes."
             , number: 26
               }
           , { first: "Make me understand the way of your commandments, * "
             , second: "that I may meditate on your marvelous works."
             , number: 27
               }
           , { first: "My soul melts away for sorrow; * "
             , second: "strengthen me according to your word."
             , number: 28
               }
           , { first: "Take from me the way of lying; * "
             , second: "let me find grace through your law."
             , number: 29
               }
           , { first: "I have chosen the way of faithfulness; * "
             , second: "I have set your judgments before me."
             , number: 30
               }
           , { first: "I hold fast to your decrees; * "
             , second: "O Lord, let me not be put to shame."
             , number: 31
               }
           , { first: "I will run the way of your commandments, * "
             , second: "for you have set my heart at liberty. He Legem pone"
             , number: 32
               }
           , { first: "Teach me, O Lord, the way of your statutes, * "
             , second: "and I shall keep it to the end."
             , number: 33
               }
           , { first: "Give me understanding, and I shall keep your law; * "
             , second: "I shall keep it with all my heart."
             , number: 34
               }
           , { first: "Make me go in the path of your commandments, * "
             , second: "for that is my desire."
             , number: 35
               }
           , { first: "Incline my heart to your decrees * "
             , second: "and not to unjust gain."
             , number: 36
               }
           , { first: "Turn my eyes from watching what is worthless; * "
             , second: "give me life in your ways."
             , number: 37
               }
           , { first: "Fulfill your promise to your servant, * "
             , second: "which you make to those who fear you."
             , number: 38
               }
           , { first: "Turn away the reproach which I dread, * "
             , second: "because your judgments are good."
             , number: 39
               }
           , { first: "Behold, I long for your commandments; * "
             , second: "in your righteousness preserve my life."
             , number: 40
               }
           , { title: "Waw Et veniat super me"
             , first: "Let your loving-kindness come to me, O Lord, * "
             , second: "and your salvation, according to your promise."
             , number: 41
               }
           , { first: "Then shall I have a word for those who taunt me, * "
             , second: "because I trust in your words."
             , number: 42
               }
           , { first: "Do not take the word of truth out of my mouth, * "
             , second: "for my hope is in your judgments."
             , number: 43
               }
           , { first: "I shall continue to keep your law; * "
             , second: "I shall keep it for ever and ever."
             , number: 44
               }
           , { first: "I will walk at liberty, * "
             , second: "because I study your commandments."
             , number: 45
               }
           , { first: "I will tell of your decrees before kings * "
             , second: "and will not be ashamed."
             , number: 46
               }
           , { first: "I delight in your commandments, * "
             , second: "which I have always loved."
             , number: 47
               }
           , { first: "I will lift up my hands to your commandments, * "
             , second: "and I will meditate on your statutes."
             , number: 48
               }
           , { title: "Zayin Memor esto verbi tui"
             , first: "Remember your word to your servant, * "
             , second: "because you have given me hope."
             , number: 49
               }
           , { first: "This is my comfort in my trouble, * "
             , second: "that your promise gives me life."
             , number: 50
               }
           , { first: "The proud have derided me cruelly, * "
             , second: "but I have not turned from your law."
             , number: 51
               }
           , { first: "When I remember your judgments of old, * "
             , second: "O Lord, I take great comfort."
             , number: 52
               }
           , { first: "I am filled with a burning rage, * "
             , second: "because of the wicked who forsake your law."
             , number: 53
               }
           , { first: "Your statutes have been like songs to me * "
             , second: "wherever I have lived as a stranger."
             , number: 54
               }
           , { first: "I remember your Name in the night, O Lord, * "
             , second: "and dwell upon your law."
             , number: 55
               }
           , { first: "This is how it has been with me, * "
             , second: "because I have kept your commandments."
             , number: 56
               }
           , { title: "Heth Portio mea, Domine"
             , first: "You only are my portion, O Lord; * "
             , second: "I have promised to keep your words."
             , number: 57
               }
           , { first: "I entreat you with all my heart, * "
             , second: "be merciful to me according to your promise."
             , number: 58
               }
           , { first: "I have considered my ways * "
             , second: "and turned my feet toward your decrees."
             , number: 59
               }
           , { first: "I hasten and do not tarry * "
             , second: "to keep your commandments."
             , number: 60
               }
           , { first: "Though the cords of the wicked entangle me, * "
             , second: "I do not forget your law."
             , number: 61
               }
           , { first: "At midnight I will rise to give you thanks, * "
             , second: "because of your righteous judgments."
             , number: 62
               }
           , { first: "I am a companion of all who fear you * "
             , second: "and of those who keep your commandments."
             , number: 63
               }
           , { first: "The earth, O Lord, is full of your love; * "
             , second: "instruct me in your statutes."
             , number: 64
               }
           , { title: "Teth Bonitatem fecisti"
             , first: "O Lord, you have dealt graciously with your servant, * "
             , second: "according to your word."
             , number: 65
               }
           , { first: "Teach me discernment and knowledge, * "
             , second: "for I have believed in your commandments."
             , number: 66
               }
           , { first: "Before I was afflicted I went astray, * "
             , second: "but now I keep your word."
             , number: 67
               }
           , { first: "You are good and you bring forth good; * "
             , second: "instruct me in your statutes."
             , number: 68
               }
           , { first: "The proud have smeared me with lies, * "
             , second: "but I will keep your commandments with my whole heart."
             , number: 69
               }
           , { first: "Their heart is gross and fat, * "
             , second: "but my delight is in your law."
             , number: 70
               }
           , { first: "It is good for me that I have been afflicted, * "
             , second: "that I might learn your statutes."
             , number: 71
               }
           , { first: "The law of your mouth is dearer to me * "
             , second: "than thousands in gold and silver."
             , number: 72
               }
           , { title: "Yodh Manus tuæ fecerunt me"
             , first: "Your hands have made me and fashioned me; * "
             , second: "give me understanding, that I may learn your commandments."
             , number: 73
               }
           , { first: "Those who fear you will be glad when they see me, * "
             , second: "because I trust in your word."
             , number: 74
               }
           , { first: "I know, O Lord, that your judgments are right * "
             , second: "and that in faithfulness you have afflicted me."
             , number: 75
               }
           , { first: "Let your loving-kindness be my comfort, * "
             , second: "as you have promised to your servant."
             , number: 76
               }
           , { first: "Let your compassion come to me, that I may live, * "
             , second: "for your law is my delight."
             , number: 77
               }
           , { first: "Let the arrogant be put to shame, for they wrong me  with lies; * "
             , second: "but I will meditate on your commandments."
             , number: 78
               }
           , { first: "Let those who fear you turn to me, * "
             , second: "and also those who know your decrees."
             , number: 79
               }
           , { first: "Let my heart be sound in your statutes, * "
             , second: "that I may not be put to shame."
             , number: 80
               }
           , { title: "Kaph Defecit in salutare"
             , first: "My soul has longed for your salvation; * "
             , second: "I have put my hope in your word."
             , number: 81
               }
           , { first: "My eyes have failed from watching for your promise, * "
             , second: "and I say, “When will you comfort me?”"
             , number: 82
               }
           , { first: "I have become like a leather flask in the smoke, * "
             , second: "but I have not forgotten your statutes."
             , number: 83
               }
           , { first: "How much longer must I wait? * "
             , second: "when will you give judgment against those who persecute me?"
             , number: 84
               }
           , { first: "The proud have dug pits for me; * "
             , second: "they do not keep your law."
             , number: 85
               }
           , { first: "All your commandments are true; * "
             , second: "help me, for they persecute me with lies."
             , number: 86
               }
           , { first: "They had almost made an end of me on earth, * "
             , second: "but I have not forsaken your commandments."
             , number: 87
               }
           , { first: "In your loving-kindness, revive me, * "
             , second: "that I may keep the decrees of your mouth."
             , number: 88
             }
           , { title: "Lamedh In æternum, Domine"
             , first: "O Lord, your word is everlasting; * "
             , second: "it stands firm in the heavens."
             , number: 89
             }
           , { first: "Your faithfulness remains from one generation to another; * "
             , second: "you established the earth, and it abides."
             , number: 90
               }
           , { first: "By your decree these continue to this day, * "
             , second: "for all things are your servants."
             , number: 91
               }
           , { first: "If my delight had not been in your law, * "
             , second: "I should have perished in my affliction."
             , number: 92
               }
           , { first: "I will never forget your commandments, * "
             , second: "because by them you give me life."
             , number: 93
               }
           , { first: "I am yours; oh, that you would save me! * "
             , second: "for I study your commandments."
             , number: 94
               }
           , { first: "Though the wicked lie in wait for me to destroy me, * "
             , second: "I will apply my mind to your decrees."
             , number: 95
               }
           , { first: "I see that all things come to an end, * "
             , second: "but your commandment has no bounds."
             , number: 96
               }
           , { title: "Mem Quomodo dilexi!"
             , first: "Oh, how I love your law! * "
             , second: "all the day long it is in my mind."
             , number: 97
               }
           , { first: "Your commandment has made me wiser than my enemies, * "
             , second: "and it is always with me."
             , number: 98
               }
           , { first: "I have more understanding than all my teachers, * "
             , second: "for your decrees are my study."
             , number: 99
               }
           , { first: "I am wiser than the elders, * "
             , second: "because I observe your commandments."
             , number: 100
               }
           , { first: "I restrain my feet from every evil way, * "
             , second: "that I may keep your word."
             , number: 101
               }
           , { first: "I do not shrink from your judgments, * "
             , second: "because you yourself have taught me."
             , number: 102
               }
           , { first: "How sweet are your words to my taste! * "
             , second: "they are sweeter than honey to my mouth."
             , number: 103
               }
           , { first: "Through your commandments I gain understanding; * "
             , second: "therefore I hate every lying way."
             , number: 104
               }
           , { title: "Nun Lucerna pedibus meis"
             , first: "Your word is a lantern to my feet * "
             , second: "and a light upon my path."
             , number: 105
               }
           , { first: "I have sworn and am determined * "
             , second: "to keep your righteous judgments."
             , number: 106
               }
           , { first: "I am deeply troubled; * "
             , second: "preserve my life, O Lord, according to your word."
             , number: 107
               }
           , { first: "Accept, O Lord, the willing tribute of my lips, * "
             , second: "and teach me your judgments."
             , number: 108
               }
           , { first: "My life is always in my hand, * "
             , second: "yet I do not forget your law."
             , number: 109
               }
           , { first: "The wicked have set a trap for me, * "
             , second: "but I have not strayed from your commandments."
             , number: 110
               }
           , { first: "Your decrees are my inheritance for ever; * "
             , second: "truly, they are the joy of my heart."
             , number: 111
               }
           , { first: "I have applied my heart to fulfill your statutes * "
             , second: "for ever and to the end."
             , number: 112
               }
           , { title: "Samekh Iniquos odio habui"
             , first: "I hate those who have a divided heart, * "
             , second: "but your law do I love."
             , number: 113
               }
           , { first: "You are my refuge and shield; * "
             , second: "my hope is in your word."
             , number: 114
               }
           , { first: "Away from me, you wicked! * "
             , second: "I will keep the commandments of my God."
             , number: 115
               }
           , { first: "Sustain me according to your promise, that I may live, * "
             , second: "and let me not be disappointed in my hope."
             , number: 116
               }
           , { first: "Hold me up, and I shall be safe, * "
             , second: "and my delight shall be ever in your statutes."
             , number: 117
               }
           , { first: "You spurn all who stray from your statutes; * "
             , second: "their deceitfulness is in vain."
             , number: 118
               }
           , { first: "In your sight all the wicked of the earth are but dross; * "
             , second: "therefore I love your decrees."
             , number: 119
               }
           , { first: "My flesh trembles with dread of you; * "
             , second: "I am afraid of your judgments."
             , number: 120
               }
           , { title: "Ayin Feci judicium"
             , first: "I have done what is just and right; * "
             , second: "do not deliver me to my oppressors."
             , number: 121
               }
           , { first: "Be surety for your servant’s good; * "
             , second: "let not the proud oppress me."
             , number: 122
               }
           , { first: "My eyes have failed from watching for your salvation * "
             , second: "and for your righteous promise."
             , number: 123
               }
           , { first: "Deal with your servant according to your loving-kindness * "
             , second: "and teach me your statutes."
             , number: 124
               }
           , { first: "I am your servant; grant me understanding, * "
             , second: "that I may know your decrees."
             , number: 125
               }
           , { first: "It is time for you to act, O Lord, * "
             , second: "for they have broken your law."
             , number: 126
               }
           , { first: "Truly, I love your commandments * "
             , second: "more than gold and precious stones."
             , number: 127
               }
           , { first: "I hold all your commandments to be right for me; * "
             , second: "all paths of falsehood I abhor."
             , number: 128
               }
           , { title: "Pe Mirabilia"
             , first: "Your decrees are wonderful; * "
             , second: "therefore I obey them with all my heart."
             , number: 129
               }
           , { first: "When your word goes forth it gives light; * "
             , second: "it gives understanding to the simple."
             , number: 130
               }
           , { first: "I open my mouth and pant; * "
             , second: "I long for your commandments."
             , number: 131
               }
           , { first: "Turn to me in mercy, * "
             , second: "as you always do to those who love your Name."
             , number: 132
               }
           , { first: "Steady my footsteps in your word; * "
             , second: "let no iniquity have dominion over me."
             , number: 133
               }
           , { first: "Rescue me from those who oppress me, * "
             , second: "and I will keep your commandments."
             , number: 134
               }
           , { first: "Let your countenance shine upon your servant * "
             , second: "and teach me your statutes."
             , number: 135
               }
           , { first: "My eyes shed streams of tears, * "
             , second: "because people do not keep your law."
             , number: 136
               }
           , { title: "Sadhe Justus es, Domine"
             , first: "You are righteous, O Lord, * "
             , second: "and upright are your judgments."
             , number: 137
               }
           , { first: "You have issued your decrees * "
             , second: "with justice and in perfect faithfulness."
             , number: 138
               }
           , { first: "My indignation has consumed me, * "
             , second: "because my enemies forget your words."
             , number: 139
               }
           , { first: "Your word has been tested to the uttermost, * "
             , second: "and your servant holds it dear."
             , number: 140
               }
           , { first: "I am small and of little account, * "
             , second: "yet I do not forget your commandments."
             , number: 141
               }
           , { first: "Your justice is an everlasting justice * "
             , second: "and your law is the truth."
             , number: 142
               }
           , { first: "Trouble and distress have come upon me, * "
             , second: "yet your commandments are my delight."
             , number: 143
               }
           , { first: "The righteousness of your decrees is everlasting; * "
             , second: "grant me understanding, that I may live."
             , number: 144
               }
           , { title: "Qoph Clamavi in toto corde meo"
             , first: "I call with my whole heart; * "
             , second: "answer me, O Lord, that I may keep your statutes."
             , number: 145
               }
           , { first: "I call to you; oh, that you would save me! * "
             , second: "I will keep your decrees."
             , number: 146
               }
           , { first: "Early in the morning I cry out to you, * "
             , second: "for in your word is my trust."
             , number: 147
               }
           , { first: "My eyes are open in the night watches, * "
             , second: "that I may meditate upon your promise."
             , number: 148
               }
           , { first: "Hear my voice, O Lord, according to your loving-kindness; * "
             , second: "according to your judgments, give me life."
             , number: 149
               }
           , { first: "They draw near who in malice persecute me; * "
             , second: "they are very far from your law."
             , number: 150
               }
           , { first: "You, O Lord, are near at hand, * "
             , second: "and all your commandments are true."
             , number: 151
               }
           , { first: "Long have I known from your decrees * "
             , second: "that you have established them for ever."
             , number: 152
               }
           , { title: "Resh Vide humilitatem"
             , first: "Behold my affliction and deliver me, * "
             , second: "for I do not forget your law."
             , number: 153
             }
           , { first: "Plead my cause and redeem me; * "
             , second: "according to your promise, give me life."
             , number: 154
               }
           , { first: "Deliverance is far from the wicked, * "
             , second: "for they do not study your statutes."
             , number: 154
               }
           , { first: "Great is your compassion, O Lord; * "
             , second: "preserve my life, according to your judgments."
             , number: 155
               }
           , { first: "There are many who persecute and oppress me, * "
             , second: "yet I have not swerved from your decrees."
             , number: 156
               }
           , { first: "I look with loathing at the faithless, * "
             , second: "for they have not kept your word."
             , number: 157
               }
           , { first: "See how I love your commandments! * "
             , second: "O Lord, in your mercy, preserve me."
             , number: 158
               }
           , { first: "The heart of your word is truth; * "
             , second: "all your righteous judgments endure for evermore."
             , number: 159
               }
           , { title: "Shin Principes persecuti sunt"
             , first: "Rulers have persecuted me without a cause, * "
             , second: "but my heart stands in awe of your word."
             , number: 160
               }
           , { first: "I am as glad because of your promise * "
             , second: "as one who finds great spoils."
             , number: 161
               }
           , { first: "As for lies, I hate and abhor them, * "
             , second: "but your law is my love."
             , number: 162
               }
           , { first: "Seven times a day do I praise you, * "
             , second: "because of your righteous judgments."
             , number: 163
               }
           , { first: "Great peace have they who love your law; * "
             , second: "for them there is no stumbling block."
             , number: 164
               }
           , { first: "I have hoped for your salvation, O Lord, * "
             , second: "and have fulfilled your commandments."
             , number: 165
               }
           , { first: "I have kept your decrees * "
             , second: "and I have loved them deeply."
             , number: 166
               }
           , { first: "I have kept your commandments and decrees, * "
             , second: "for all my ways are before you."
             , number: 167
               }
           , { title: "Taw Appropinquet deprecatio"
             , first: "Let my cry come before you, O Lord; * "
             , second: "give me understanding, according to your word."
             , number: 168
               }
           , { first: "Let my supplication come before you; * "
             , second: "deliver me, according to your promise."
             , number: 169
               }
           , { first: "My lips shall pour forth your praise, * "
             , second: "when you teach me your statutes."
             , number: 170
               }
           , { first: "My tongue shall sing of your promise, * "
             , second: "for all your commandments are righteous."
             , number: 171
               }
           , { first: "Let your hand be ready to help me, * "
             , second: "for I have chosen your commandments."
             , number: 172
               }
           , { first: "I long for your salvation, O Lord, * "
             , second: "and your law is my delight."
             , number: 173
               }
           , { first: "Let me live, and I will praise you, * "
             , second: "and let your judgments help me."
             , number: 174
               }
           , { first: "I have gone astray like a sheep that is lost; * "
             , second: "search for your servant, for I do not forget your commandments."
             , number: 175
               }
             ]
    }
  , 120:
    { name: "Psalm 120."
    , title: "Ad Dominum"
    , vss: [ { first: "When I was in trouble, I called to the Lord; * "
             , second: "I called to the Lord, and he answered me."
             , number: 1
               }
           , { first: "Deliver me, O Lord, from lying lips * "
             , second: "and from the deceitful tongue."
             , number: 2
               }
           , { first: "What shall be done to you, and what more besides, * "
             , second: "O you deceitful tongue?"
             , number: 3
               }
           , { first: "The sharpened arrows of a warrior, * "
             , second: "along with hot glowing coals."
             , number: 4
               }
           , { first: "How hateful it is that I must lodge in Meshech * "
             , second: "and dwell among the tents of Kedar!"
             , number: 5
               }
           , { first: "Too long have I had to live * "
             , second: "among the enemies of peace."
             , number: 6
               }
           , { first: "I am on the side of peace, * "
             , second: "but when I speak of it, they are for war."
             , number: 7
               }
             ]
    }
  , 121:
    { name: "Psalm 121."
    , title: "Levavi oculos"
    , vss: [ { first: "I lift up my eyes to the hills; * "
             , second: "from where is my help to come?"
             , number: 1
               }
           , { first: "My help comes from the Lord, * "
             , second: "the maker of heaven and earth."
             , number: 2
               }
           , { first: "He will not let your foot be moved * "
             , second: "and he who watches over you will not fall asleep."
             , number: 3
               }
           , { first: "Behold, he who keeps watch over Israel * "
             , second: "shall neither slumber nor sleep;"
             , number: 4
               }
           , { first: "The Lord himself watches over you; * "
             , second: "the Lord is your shade at your right hand,"
             , number: 5
               }
           , { first: "So that the sun shall not strike you by day, * "
             , second: "nor the moon by night."
             , number: 6
               }
           , { first: "The Lord shall preserve you from all evil; * "
             , second: "it is he who shall keep you safe."
             , number: 7
               }
           , { first: "The Lord shall watch over your going out and your coming in, * "
             , second: "from this time forth for evermore."
             , number: 8
               }
             ]
    }
  , 122:
    { name: "Psalm 122."
    , title: "Lætatus sum"
    , vss: [ { first: "I was glad when they said to me, * "
             , second: "“Let us go to the house of the Lord.”"
             , number: 1
               }
           , { first: "Now our feet are standing * "
             , second: "within your gates, O Jerusalem."
             , number: 2
               }
           , { first: "Jerusalem is built as a city * "
             , second: "that is at unity with itself;"
             , number: 3
               }
           , { first: "To which the tribes go up, the tribes of the Lord, * "
             , second: "the assembly of Israel, to praise the Name of the Lord."
             , number: 4
               }
           , { first: "For there are the thrones of judgment, * "
             , second: "the thrones of the house of David."
             , number: 5
               }
           , { first: "Pray for the peace of Jerusalem: * "
             , second: "“May they prosper who love you."
             , number: 6
               }
           , { first: "Peace be within your walls * "
             , second: "and quietness within your towers."
             , number: 7
               }
           , { first: "For my brethren and companions’ sake, * "
             , second: "I pray for your prosperity."
             , number: 8
               }
           , { first: "Because of the house of the Lord our God, * "
             , second: "I will seek to do you good.”"
             , number: 9
               }
             ]
    }
  , 123:
    { name: "Psalm 123."
    , title: "Ad te levavi oculos meos"
    , vss: [ { first: "To you I lift up my eyes, * "
             , second: "to you enthroned in the heavens."
             , number: 1
               }
           , { first: "As the eyes of servants look to the hand of their masters, * "
             , second: "and the eyes of a maid to the hand of her mistress,"
             , number: 2
               }
           , { first: "So our eyes look to the Lord our God, * "
             , second: "until he show us his mercy."
             , number: 3
               }
           , { first: "Have mercy upon us, O Lord, have mercy, * "
             , second: "for we have had more than enough of contempt,"
             , number: 4
               }
           , { first: "Too much of the scorn of the indolent rich, * "
             , second: "and of the derision of the proud."
             , number: 5
               }
             ]
    }
  , 124:
    { name: "Psalm 124."
    , title: "Nisi quia Dominus"
    , vss: [ { first: "If the Lord had not been on our side, * "
             , second: "let Israel now say;"
             , number: 1
               }
           , { first: "If the Lord had not been on our side, * "
             , second: "when enemies rose up against us;"
             , number: 2
               }
           , { first: "Then would they have swallowed us up alive * "
             , second: "in their fierce anger toward us;"
             , number: 3
               }
           , { first: "Then would the waters have overwhelmed us * "
             , second: "and the torrent gone over us;"
             , number: 4
               }
           , { first: "Then would the raging waters * "
             , second: "have gone right over us."
             , number: 5
               }
           , { first: "Blessed be the Lord! * "
             , second: "he has not given us over to be a prey for their teeth."
             , number: 6
               }
           , { first: "We have escaped like a bird from the snare of the fowler; * "
             , second: "the snare is broken, and we have escaped."
             , number: 7
               }
           , { first: "Our help is in the Name of the Lord, * "
             , second: "the maker of heaven and earth."
             , number: 8
               }
             ]
    }
  , 125:
    { name: "Psalm 125."
    , title: "Qui confidunt"
    , vss: [ { first: "Those who trust in the Lord are like Mount Zion, * "
             , second: "which cannot be moved, but stands fast for ever."
             , number: 1
               }
           , { first: "The hills stand about Jerusalem; * "
             , second: "so does the Lord stand round about his people, from this time forth for evermore."
             , number: 2
               }
           , { first: "The scepter of the wicked shall not hold sway over the land allotted to the just, * "
             , second: "so that the just shall not put their hands to evil."
             , number: 3
               }
           , { first: "Show your goodness, O Lord, to those who are good * "
             , second: "and to those who are true of heart."
             , number: 4
               }
           , { first: "As for those who turn aside to crooked ways, the Lord will lead them away with the evildoers; * "
             , second: "but peace be upon Israel."
             , number: 5
               }
             ]
    }
  , 126:
    { name: "Psalm 126."
    , title: "In convertendo"
    , vss: [ { first: "When the Lord restored the fortunes of Zion, * "
             , second: "then were we like those who dream."
             , number: 1
               }
           , { first: "Then was our mouth filled with laughter, * "
             , second: "and our tongue with shouts of joy."
             , number: 2
               }
           , { first: "Then they said among the nations, * "
             , second: "“The Lord has done great things for them.”"
             , number: 3
               }
           , { first: "The Lord has done great things for us, * "
             , second: "and we are glad indeed."
             , number: 4
               }
           , { first: "Restore our fortunes, O Lord, * "
             , second: "like the watercourses of the Negev."
             , number: 5
               }
           , { first: "Those who sowed with tears * "
             , second: "will reap with songs of joy."
             , number: 6
               }
           , { first: "Those who go out weeping, carrying the seed, * "
             , second: "will come again with joy, shouldering their sheaves."
             , number: 7
               }
             ]
    }
  , 127:
    { name: "Psalm 127."
    , title: "Nisi Dominus"
    , vss: [ { first: "Unless the Lord builds the house, * "
             , second: "their labor is in vain who build it."
             , number: 1
               }
           , { first: "Unless the Lord watches over the city, * "
             , second: "in vain the watchman keeps his vigil."
             , number: 2
               }
           , { first: "It is in vain that you rise so early and go to bed so late; * "
             , second: "vain, too, to eat the bread of toil, for he gives to his beloved sleep."
             , number: 3
               }
           , { first: "Children are a heritage from the Lord, * "
             , second: "and the fruit of the womb is a gift."
             , number: 4
               }
           , { first: "Like arrows in the hand of a warrior * "
             , second: "are the children of one’s youth."
             , number: 5
               }
           , { first: "Happy is the man who has his quiver full of them! * "
             , second: "he shall not be put to shame when he contends with his enemies in the gate."
             , number: 6
               }
             ]
    }
  , 128:
    { name: "Psalm 128."
    , title: "Beati omnes"
    , vss: [ { first: "Happy are they all who fear the Lord, * "
             , second: "and who follow in his ways!"
             , number: 1
               }
           , { first: "You shall eat the fruit of your labor; * "
             , second: "happiness and prosperity shall be yours."
             , number: 2
               }
           , { first: "Your wife shall be like a fruitful vine within your house, * "
             , second: "your children like olive shoots round about your table."
             , number: 3
               }
           , { first: "The man who fears the Lord * "
             , second: "shall thus indeed be blessed."
             , number: 4
               }
           , { first: "The Lord bless you from Zion, * "
             , second: "and may you see the prosperity of Jerusalem all the days of your life."
             , number: 5
               }
           , { first: "May you live to see your children’s children; * "
             , second: "may peace be upon Israel."
             , number: 6
               }
             ]
    }
  , 129:
    { name: "Psalm 129."
    , title: "Sæpe expugnaverunt"
    , vss: [ { first: "“Greatly have they oppressed me since my youth,” * "
             , second: "let Israel now say;"
             , number: 1
               }
           , { first: "“Greatly have they oppressed me since my youth, * "
             , second: "but they have not prevailed against me.”"
             , number: 2
               }
           , { first: "The plowmen plowed upon my back * "
             , second: "and made their furrows long."
             , number: 3
               }
           , { first: "The Lord, the Righteous One, * "
             , second: "has cut the cords of the wicked."
             , number: 4
               }
           , { first: "Let them be put to shame and thrown back, * "
             , second: "all those who are enemies of Zion."
             , number: 5
               }
           , { first: "Let them be like grass upon the housetops, * "
             , second: "which withers before it can be plucked;"
             , number: 6
               }
           , { first: "Which does not fill the hand of the reaper, * "
             , second: "nor the bosom of him who binds the sheaves;"
             , number: 7
               }
           , { first: "So that those who go by say not so much as, “The Lord prosper you. * "
             , second: "We wish you well in the Name of the Lord.”"
             , number: 8
               }
             ]
    }
  , 130:
    { name: "Psalm 130."
    , title: "De profundis"
    , vss: [ { first: "Out of the depths have I called to you, O Lord; Lord, hear my voice; * "
             , second: "let your ears consider well the voice of my supplication."
             , number: 1
               }
           , { first: "If you, Lord, were to note what is done amiss, * "
             , second: "O Lord, who could stand?"
             , number: 2
               }
           , { first: "For there is forgiveness with you; * "
             , second: "therefore you shall be feared."
             , number: 3
               }
           , { first: "I wait for the Lord; my soul waits for him; * "
             , second: "in his word is my hope."
             , number: 4
               }
           , { first: "My soul waits for the Lord, more than watchmen for the morning, * "
             , second: "more than watchmen for the morning."
             , number: 5
               }
           , { first: "O Israel, wait for the Lord, * "
             , second: "for with the Lord there is mercy;"
             , number: 6
               }
           , { first: "With him there is plenteous redemption, * "
             , second: "and he shall redeem Israel from all their sins."
             , number: 7
               }
             ]
    }
  , 131:
    { name: "Psalm 131."
    , title: "Domine, non est"
    , vss: [ { first: "O Lord, I am not proud; * "
             , second: "I have no haughty looks."
             , number: 1
               }
           , { first: "I do not occupy myself with great matters, * "
             , second: "or with things that are too hard for me."
             , number: 2
               }
           , { first: "But I still my soul and make it quiet, like a child upon its mother’s breast; * "
             , second: "my soul is quieted within me."
             , number: 3
               }
           , { first: "O Israel, wait upon the Lord, * "
             , second: "from this time forth for evermore."
             , number: 4
               }
             ]
    }
  , 132:
    { name: "Psalm 132."
    , title: "Memento, Domine"
    , vss: [ { first: "Lord, remember David, * "
             , second: "and all the hardships he endured;"
             , number: 1
               }
           , { first: "How he swore an oath to the Lord * "
             , second: "and vowed a vow to the Mighty One of Jacob:"
             , number: 2
               }
           , { first: "“I will not come under the roof of my house, * "
             , second: "nor climb up into my bed;"
             , number: 3
               }
           , { first: "I will not allow my eyes to sleep, * "
             , second: "nor let my eyelids slumber;"
             , number: 4
               }
           , { first: "Until I find a place for the Lord, * "
             , second: "a dwelling for the Mighty One of Jacob.”"
             , number: 5
               }
           , { first: "“The ark! We heard it was in Ephratah; * "
             , second: "we found it in the fields of Jearim."
             , number: 6
               }
           , { first: "Let us go to God’s dwelling place; * "
             , second: "let us fall upon our knees before his footstool.”"
             , number: 7
               }
           , { first: "Arise, O Lord, into your resting-place, * "
             , second: "you and the ark of your strength."
             , number: 8
               }
           , { first: "Let your priests be clothed with righteousness; * "
             , second: "let your faithful people sing with joy."
             , number: 9
               }
           , { first: "For your servant David’s sake, * "
             , second: "do not turn away the face of your Anointed."
             , number: 10
               }
           , { first: "The Lord has sworn an oath to David; * "
             , second: "in truth, he will not break it:"
             , number: 11
               }
           , { first: "“A son, the fruit of your body * "
             , second: "will I set upon your throne."
             , number: 12
               }
           , { first: "If your children keep my covenant and my testimonies that I shall teach them, * "
             , second: "their children will sit upon your throne for evermore.”"
             , number: 13
               }
           , { first: "For the Lord has chosen Zion; * "
             , second: "he has desired her for his habitation:"
             , number: 14
               }
           , { first: "“This shall be my resting-place for ever; * "
             , second: "here will I dwell, for I delight in her."
             , number: 15
               }
           , { first: "I will surely bless her provisions, * "
             , second: "and satisfy her poor with bread."
             , number: 16
               }
           , { first: "I will clothe her priests with salvation, * "
             , second: "and her faithful people will rejoice and sing."
             , number: 17
               }
           , { first: "There will I make the horn of David flourish; * "
             , second: "I have prepared a lamp for my Anointed."
             , number: 18
               }
           , { first: "As for his enemies, I will clothe them with shame; * "
             , second: "but as for him, his crown will shine.”"
             , number: 19
               }
             ]
    }
  , 133:
    { name: "Psalm 133."
    , title: "Ecce, quam bonum!"
    , vss: [ { first: "Oh, how good and pleasant it is, * "
             , second: "when brethren live together in unity!"
             , number: 1
               }
           , { first: "It is like fine oil upon the head * "
             , second: "that runs down upon the beard,"
             , number: 2
               }
           , { first: "Upon the beard of Aaron, * "
             , second: "and runs down upon the collar of his robe."
             , number: 3
               }
           , { first: "It is like the dew of Hermon * "
             , second: "that falls upon the hills of Zion."
             , number: 4
               }
           , { first: "For there the Lord has ordained the blessing: * "
             , second: "life for evermore."
             , number: 5
               }
             ]
    }
  , 134:
    { name: "Psalm 134."
    , title: "Ecce nunc"
    , vss: [ { first: "Behold now, bless the Lord, all you servants of the Lord, * "
             , second: "you that stand by night in the house of the Lord."
             , number: 1
               }
           , { first: "Lift up your hands in the holy place and bless the Lord; * "
             , second: "the Lord who made heaven and earth bless you out of Zion."
             , number: 2
               }
             ]
    }
  , 135:
    { name: "Psalm 135."
    , title: "Laudate nomen"
    , vss: [ { first: "Hallelujah! Praise the Name of the Lord; * "
             , second: "give praise, you servants of the Lord,"
             , number: 1
               }
           , { first: "You who stand in the house of the Lord, * "
             , second: "in the courts of the house of our God."
             , number: 2
               }
           , { first: "Praise the Lord, for the Lord is good; * "
             , second: "sing praises to his Name, for it is lovely."
             , number: 3
               }
           , { first: "For the Lord has chosen Jacob for himself * "
             , second: "and Israel for his own possession."
             , number: 4
               }
           , { first: "For I know that the Lord is great, * "
             , second: "and that our Lord is above all gods."
             , number: 5
               }
           , { first: "The Lord does whatever pleases him, in heaven and on earth, * "
             , second: "in the seas and all the deeps."
             , number: 6
               }
           , { first: "He brings up rain clouds from the ends of the earth; * "
             , second: "he sends out lightning with the rain, and brings the winds out of his storehouse."
             , number: 7
               }
           , { first: "It was he who struck down the firstborn of Egypt, * "
             , second: "the firstborn both of man and beast."
             , number: 8
               }
           , { first: "He sent signs and wonders into the midst of you, O Egypt, * "
             , second: "against Pharaoh and all his servants."
             , number: 9
               }
           , { first: "He overthrew many nations * "
             , second: "and put mighty kings to death:"
             , number: 10
               }
           , { first: "Sihon, king of the Amorites, and Og, the king of Bashan, * "
             , second: "and all the kingdoms of Canaan."
             , number: 11
               }
           , { first: "He gave their land to be an inheritance, * "
             , second: "an inheritance for Israel his people."
             , number: 12
               }
           , { first: "O Lord, your Name is everlasting; * "
             , second: "your renown, O Lord, endures from age to age."
             , number: 13
               }
           , { first: "For the Lord gives his people justice * "
             , second: "and shows compassion to his servants."
             , number: 14
               }
           , { first: "The idols of the heathen are silver and gold, * "
             , second: "the work of human hands."
             , number: 15
               }
           , { first: "They have mouths, but they cannot speak; * "
             , second: "eyes have they, but they cannot see."
             , number: 16
               }
           , { first: "They have ears, but they cannot hear; * "
             , second: "neither is there any breath in their mouth."
             , number: 17
               }
           , { first: "Those who make them are like them, * "
             , second: "and so are all who put their trust in them."
             , number: 18
               }
           , { first: "Bless the Lord, O house of Israel; * "
             , second: "O house of Aaron, bless the Lord."
             , number: 19
               }
           , { first: "Bless the Lord, O house of Levi; * "
             , second: "you who fear the Lord, bless the Lord."
             , number: 20
               }
           , { first: "Blessed be the Lord out of Zion, * "
             , second: "who dwells in Jerusalem. Hallelujah!"
             , number: 21
               }
             ]
    }
  , 136:
    { name: "Psalm 136."
    , title: "Confitemini"
    , vss: [ { first: "Give thanks to the Lord, for he is good, * "
             , second: "for his mercy endures for ever."
             , number: 1
               }
           , { first: "Give thanks to the God of gods, * "
             , second: "for his mercy endures for ever."
             , number: 2
               }
           , { first: "Give thanks to the Lord of lords, * "
             , second: "for his mercy endures for ever."
             , number: 3
               }
           , { first: "Who only does great wonders, * "
             , second: "for his mercy endures for ever;"
             , number: 4
               }
           , { first: "Who by wisdom made the heavens, * "
             , second: "for his mercy endures for ever;"
             , number: 5
               }
           , { first: "Who spread out the earth upon the waters, * "
             , second: "for his mercy endures for ever;"
             , number: 6
               }
           , { first: "Who created great lights, * "
             , second: "for his mercy endures for ever;"
             , number: 7
               }
           , { first: "The sun to rule the day, * "
             , second: "for his mercy endures for ever;"
             , number: 8
               }
           , { first: "The moon and the stars to govern the night, * "
             , second: "for his mercy endures for ever."
             , number: 9
               }
           , { first: "Who struck down the firstborn of Egypt, * "
             , second: "for his mercy endures for ever;"
             , number: 10
               }
           , { first: "And brought out Israel from among them, * "
             , second: "for his mercy endures for ever;"
             , number: 11
               }
           , { first: "With a mighty hand and a stretched-out arm, * "
             , second: "for his mercy endures for ever;"
             , number: 12
               }
           , { first: "Who divided the Red Sea in two, * "
             , second: "for his mercy endures for ever;"
             , number: 13
               }
           , { first: "And made Israel to pass through the midst of it, * "
             , second: "for his mercy endures for ever;"
             , number: 14
               }
           , { first: "But swept Pharaoh and his army into the Red Sea, * "
             , second: "for his mercy endures for ever;"
             , number: 15
               }
           , { first: "Who led his people through the wilderness, * "
             , second: "for his mercy endures for ever."
             , number: 16
               }
           , { first: "Who struck down great kings, * "
             , second: "for his mercy endures for ever;"
             , number: 17
               }
           , { first: "And slew mighty kings, * "
             , second: "for his mercy endures for ever;"
             , number: 18
               }
           , { first: "Sihon, king of the Amorites, * "
             , second: "for his mercy endures for ever;"
             , number: 19
               }
           , { first: "And Og, the king of Bashan, * "
             , second: "for his mercy endures for ever;"
             , number: 20
               }
           , { first: "And gave away their lands for an inheritance, * "
             , second: "for his mercy endures for ever;"
             , number: 21
               }
           , { first: "An inheritance for Israel his servant, * "
             , second: "for his mercy endures for ever."
             , number: 22
               }
           , { first: "Who remembered us in our low estate, * "
             , second: "for his mercy endures for ever;"
             , number: 23
               }
           , { first: "And delivered us from our enemies, * "
             , second: "for his mercy endures for ever;"
             , number: 24
               }
           , { first: "Who gives food to all creatures, * "
             , second: "for his mercy endures for ever."
             , number: 25
               }
           , { first: "Give thanks to the God of heaven, * "
             , second: "for his mercy endures for ever."
             , number: 26
               }
             ]
    }
  , 137:
    { name: "Psalm 137."
    , title: "Super flumina"
    , vss: [ { first: "By the waters of Babylon we sat down and wept, * "
             , second: "when we remembered you, O Zion."
             , number: 1
               }
           , { first: "As for our harps, we hung them up * "
             , second: "on the trees in the midst of that land."
             , number: 2
               }
           , { first: "For those who led us away captive asked us for a song, and our oppressors called for mirth: * "
             , second: "“Sing us one of the songs of Zion.”"
             , number: 3
               }
           , { first: "How shall we sing the Lord’s song * "
             , second: "upon an alien soil?"
             , number: 4
               }
           , { first: "If I forget you, O Jerusalem, * "
             , second: "let my right hand forget its skill."
             , number: 5
               }
           , { first: "Let my tongue cleave to the roof of my mouth if I do not remember you, * "
             , second: "if I do not set Jerusalem above my highest joy."
             , number: 6
               }
           , { first: "Remember the day of Jerusalem, O Lord, against the people of Edom, * "
             , second: "who said, “Down with it! down with it! even to the ground!”"
             , number: 7
               }
           , { first: "O Daughter of Babylon, doomed to destruction, * "
             , second: "happy the one who pays you back for what you have done to us!"
             , number: 8
               }
           , { first: "Happy shall he be who takes your little ones, * "
             , second: "and dashes them against the rock!"
             , number: 9
               }
             ]
    }
  , 138:
    { name: "Psalm 138."
    , title: "Confitebor tibi"
    , vss: [ { first: "I will give thanks to you, O Lord, with my whole heart; * "
             , second: "before the gods I will sing your praise."
             , number: 1
               }
           , { first: "I will bow down toward your holy temple and praise your Name, * "
             , second: "because of your love and faithfulness;"
             , number: 2
               }
           , { first: "For you have glorified your Name * "
             , second: "and your word above all things."
             , number: 3
               }
           , { first: "When I called, you answered me; * "
             , second: "you increased my strength within me."
             , number: 4
               }
           , { first: "All the kings of the earth will praise you, O Lord, * "
             , second: "when they have heard the words of your mouth."
             , number: 5
               }
           , { first: "They will sing of the ways of the Lord, * "
             , second: "that great is the glory of the Lord."
             , number: 6
               }
           , { first: "Though the Lord be high, he cares for the lowly; * "
             , second: "he perceives the haughty from afar."
             , number: 7
               }
           , { first: "Though I walk in the midst of trouble, you keep me safe; * "
             , second: "you stretch forth your hand against the fury of my enemies; your right hand shall save me."
             , number: 8
               }
           , { first: "The Lord will make good his purpose for me; * "
             , second: "O Lord, your love endures for ever; do not abandon the works of your hands."
             , number: 9
               }
             ]
    }
  , 139:
    { name: "Psalm 139."
    , title: "Domine, probasti"
    , vss: [ { first: "Lord, you have searched me out and known me; * "
             , second: "you know my sitting down and my rising up; you discern my thoughts from afar."
             , number: 1
               }
           , { first: "You trace my journeys and my resting-places * "
             , second: "and are acquainted with all my ways."
             , number: 2
               }
           , { first: "Indeed, there is not a word on my lips, * "
             , second: "but you, O Lord, know it altogether."
             , number: 3
               }
           , { first: "You press upon me behind and before * "
             , second: "and lay your hand upon me."
             , number: 4
               }
           , { first: "Such knowledge is too wonderful for me; * "
             , second: "it is so high that I cannot attain to it."
             , number: 5
               }
           , { first: "Where can I go then from your Spirit? * "
             , second: "where can I flee from your presence?"
             , number: 6
               }
           , { first: "If I climb up to heaven, you are there; * "
             , second: "if I make the grave my bed, you are there also."
             , number: 7
               }
           , { first: "If I take the wings of the morning * "
             , second: "and dwell in the uttermost parts of the sea,"
             , number: 8
               }
           , { first: "Even there your hand will lead me * "
             , second: "and your right hand hold me fast."
             , number: 9
               }
           , { first: "If I say, “Surely the darkness will cover me, * "
             , second: "and the light around me turn to night,”"
             , number: 10
               }
           , { first: "Darkness is not dark to you; the night is as bright as the day; * "
             , second: "darkness and light to you are both alike."
             , number: 11
               }
           , { first: "For you yourself created my inmost parts; * "
             , second: "you knit me together in my mother’s womb."
             , number: 12
               }
           , { first: "I will thank you because I am marvelously made; * "
             , second: "your works are wonderful, and I know it well."
             , number: 13
               }
           , { first: "My body was not hidden from you, * "
             , second: "while I was being made in secret and woven in the depths of the earth."
             , number: 14
               }
           , { first: "Your eyes beheld my limbs, yet unfinished in the womb; all of them were written in your book; * "
             , second: "they were fashioned day by day, when as yet there was none of them."
             , number: 15
               }
           , { first: "How deep I find your thoughts, O God! * "
             , second: "how great is the sum of them!"
             , number: 16
               }
           , { first: "If I were to count them, they would be more in number than the sand; * "
             , second: "to count them all, my life span would need to be like yours."
             , number: 17
               }
           , { first: "Oh, that you would slay the wicked, O God! * "
             , second: "You that thirst for blood, depart from me."
             , number: 18
               }
           , { first: "They speak despitefully against you; * "
             , second: "your enemies take your Name in vain."
             , number: 19
               }
           , { first: "Do I not hate those, O Lord, who hate you? * "
             , second: "and do I not loathe those who rise up against you?"
             , number: 20
               }
           , { first: "I hate them with a perfect hatred; * "
             , second: "they have become my own enemies."
             , number: 21
               }
           , { first: "Search me out, O God, and know my heart; * "
             , second: "try me and know my restless thoughts."
             , number: 22
               }
           , { first: "Look well whether there be any wickedness in me * "
             , second: "and lead me in the way that is everlasting."
             , number: 23
               }
             ]
    }
  , 140:
    { name: "Psalm 140."
    , title: "Eripe me, Domine"
    , vss: [ { first: "Deliver me, O Lord, from evildoers; * "
             , second: "protect me from the violent,"
             , number: 1
               }
           , { first: "Who devise evil in their hearts * "
             , second: "and stir up strife all day long."
             , number: 2
               }
           , { first: "They have sharpened their tongues like a serpent; * "
             , second: "adder’s poison is under their lips."
             , number: 3
               }
           , { first: "Keep me, O Lord, from the hands of the wicked; * "
             , second: "protect me from the violent, who are determined to trip me up."
             , number: 4
               }
           , { first: "The proud have hidden a snare for me and stretched out a net of cords; * "
             , second: "they have set traps for me along the path."
             , number: 5
               }
           , { first: "I have said to the Lord, “You are my God; * "
             , second: "listen, O Lord, to my supplication."
             , number: 6
               }
           , { first: "O Lord God, the strength of my salvation, * "
             , second: "you have covered my head in the day of battle."
             , number: 7
               }
           , { first: "Do not grant the desires of the wicked, O Lord, * "
             , second: "nor let their evil plans prosper."
             , number: 8
               }
           , { first: "Let not those who surround me lift up their heads; * "
             , second: "let the evil of their lips overwhelm them."
             , number: 9
               }
           , { first: "Let hot burning coals fall upon them; * "
             , second: "let them be cast into the mire, never to rise up again.”"
             , number: 10
               }
           , { first: "A slanderer shall not be established on the earth, * "
             , second: "and evil shall hunt down the lawless."
             , number: 11
               }
           , { first: "I know that the Lord will maintain the cause of the poor * "
             , second: "and render justice to the needy."
             , number: 12
               }
           , { first: "Surely, the righteous will give thanks to your Name, * "
             , second: "and the upright shall continue in your sight."
             , number: 13
               }
             ]
    }
  , 141:
    { name: "Psalm 141."
    , title: "Domine, clamavi"
    , vss: [ { first: "O Lord, I call to you; come to me quickly; * "
             , second: "hear my voice when I cry to you."
             , number: 1
               }
           , { first: "Let my prayer be set forth in your sight as incense, * "
             , second: "the lifting up of my hands as the evening sacrifice."
             , number: 2
               }
           , { first: "Set a watch before my mouth, O Lord, and guard the door of my lips; * "
             , second: "let not my heart incline to any evil thing."
             , number: 3
               }
           , { first: "Let me not be occupied in wickedness with evildoers, * "
             , second: "nor eat of their choice foods."
             , number: 4
               }
           , { first: "Let the righteous smite me in friendly rebuke; let not the oil of the unrighteous anoint my head; * "
             , second: "for my prayer is continually against their wicked deeds."
             , number: 5
               }
           , { first: "Let their rulers be overthrown in stony places, * "
             , second: "that they may know my words are true."
             , number: 6
               }
           , { first: "As when a plowman turns over the earth in furrows, * "
             , second: "let their bones be scattered at the mouth of the grave."
             , number: 7
               }
           , { first: "But my eyes are turned to you, Lord God; * "
             , second: "in you I take refuge; do not strip me of my life."
             , number: 8
               }
           , { first: "Protect me from the snare which they have laid for me * "
             , second: "and from the traps of the evildoers."
             , number: 9
               }
           , { first: "Let the wicked fall into their own nets, * "
             , second: "while I myself escape."
             , number: 10
               }
             ]
    }
  , 142:
    { name: "Psalm 142."
    , title: "Voce mea ad Dominum"
    , vss: [ { first: "I cry to the Lord with my voice; * "
             , second: "to the Lord I make loud supplication."
             , number: 1
               }
           , { first: "I pour out my complaint before him * "
             , second: "and tell him all my trouble."
             , number: 2
               }
           , { first: "When my spirit languishes within me, you know my path; * "
             , second: "in the way wherein I walk they have hidden a trap for me."
             , number: 3
               }
           , { first: "I look to my right hand and find no one who knows me; * "
             , second: "I have no place to flee to, and no one cares for me."
             , number: 4
               }
           , { first: "I cry out to you, O Lord; * "
             , second: "I say, “You are my refuge, my portion in the land of the living.”"
             , number: 5
               }
           , { first: "Listen to my cry for help, for I have been brought very low; * "
             , second: "save me from those who pursue me, for they are too strong for me."
             , number: 6
               }
           , { first: "Bring me out of prison, that I may give thanks to your Name; * "
             , second: "when you have dealt bountifully with me, the righteous will gather around me."
             , number: 7
               }
             ]
    }
  , 143:
    { name: "Psalm 143."
    , title: "Domine, exaudi"
    , vss: [ { first: "Lord, hear my prayer, and in your faithfulness heed my supplications; * "
             , second: "answer me in your righteousness."
             , number: 1
               }
           , { first: "Enter not into judgment with your servant, * "
             , second: "for in your sight shall no one living be justified."
             , number: 2
               }
           , { first: "For my enemy has sought my life; he has crushed me to the ground; * "
             , second: "he has made me live in dark places like those who are long dead."
             , number: 3
               }
           , { first: "My spirit faints within me; * "
             , second: "my heart within me is desolate."
             , number: 4
               }
           , { first: "I remember the time past; I muse upon all your deeds; * "
             , second: "I consider the works of your hands."
             , number: 5
               }
           , { first: "I spread out my hands to you; * "
             , second: "my soul gasps to you like a thirsty land."
             , number: 6
               }
           , { first: "O Lord, make haste to answer me; my spirit fails me; * "
             , second: "do not hide your face from me or I shall be like those who go down to the Pit."
             , number: 7
               }
           , { first: "Let me hear of your loving-kindness in the morning, for I put my trust in you; * "
             , second: "show me the road that I must walk, for I lift up my soul to you."
             , number: 8
               }
           , { first: "Deliver me from my enemies, O Lord, * "
             , second: "for I flee to you for refuge."
             , number: 9
               }
           , { first: "Teach me to do what pleases you, for you are my God; * "
             , second: "let your good Spirit lead me on level ground."
             , number: 10
               }
           , { first: "Revive me, O Lord, for your Name’s sake; * "
             , second: "for your righteousness’ sake, bring me out of trouble."
             , number: 11
               }
           , { first: "Of your goodness, destroy my enemies and bring all my foes to naught, * "
             , second: "for truly I am your servant."
             , number: 12
               }
             ]
    }
  , 144:
    { name: "Psalm 144."
    , title: "Benedictus Dominus"
    , vss: [ { first: "Blessed be the Lord my rock! * "
             , second: "who trains my hands to fight and my fingers to battle;"
             , number: 1
               }
           , { first: "My help and my fortress, my stronghold and my deliverer, * "
             , second: "my shield in whom I trust, who subdues the peoples under me."
             , number: 2
               }
           , { first: "O Lord, what are we that you should care for us? * "
             , second: "mere mortals that you should think of us?"
             , number: 3
               }
           , { first: "We are like a puff of wind; * "
             , second: "our days are like a passing shadow."
             , number: 4
               }
           , { first: "Bow your heavens, O Lord, and come down; * "
             , second: "touch the mountains, and they shall smoke."
             , number: 5
               }
           , { first: "Hurl the lightning and scatter them; * "
             , second: "shoot out your arrows and rout them."
             , number: 6
               }
           , { first: "Stretch out your hand from on high; * "
             , second: "rescue me and deliver me from the great waters, from the hand of foreign peoples,"
             , number: 7
               }
           , { first: "Whose mouths speak deceitfully * "
             , second: "and whose right hand is raised in falsehood."
             , number: 8
               }
           , { first: "O God, I will sing to you a new song; * "
             , second: "I will play to you on a ten-stringed lyre."
             , number: 9
               }
           , { first: "You give victory to kings * "
             , second: "and have rescued David your servant."
             , number: 10
               }
           , { first: "Rescue me from the hurtful sword * "
             , second: "and deliver me from the hand of foreign peoples,"
             , number: 11
               }
           , { first: "Whose mouths speak deceitfully * "
             , second: "and whose right hand is raised in falsehood."
             , number: 12
               }
           , { first: "May our sons be like plants well nurtured from their youth, * "
             , second: "and our daughters like sculptured corners of a palace."
             , number: 13
               }
           , { first: "May our barns be filled to overflowing with all manner of crops; * "
             , second: "may the flocks in our pastures increase by thousands and tens of thousands; may our cattle be fat and sleek."
             , number: 14
               }
           , { first: "May there be no breaching of the walls, no going into exile, * "
             , second: "no wailing in the public squares."
             , number: 15
               }
           , { first: "Happy are the people of whom this is so! * "
             , second: "happy are the people whose God is the Lord!"
             , number: 16
               }
             ]
    }
  , 145:
    { name: "Psalm 145."
    , title: "Exaltabo te, Deus"
    , vss: [ { first: "I will exalt you, O God my King, * "
             , second: "and bless your Name for ever and ever."
             , number: 1
               }
           , { first: "Every day will I bless you * "
             , second: "and praise your Name for ever and ever."
             , number: 2
               }
           , { first: "Great is the Lord and greatly to be praised; * "
             , second: "there is no end to his greatness."
             , number: 3
               }
           , { first: "One generation shall praise your works to another * "
             , second: "and shall declare your power."
             , number: 4
               }
           , { first: "I will ponder the glorious splendor of your majesty * "
             , second: "and all your marvelous works."
             , number: 5
               }
           , { first: "They shall speak of the might of your wondrous acts, * "
             , second: "and I will tell of your greatness."
             , number: 6
               }
           , { first: "They shall publish the remembrance of your great goodness; * "
             , second: "they shall sing of your righteous deeds."
             , number: 7
               }
           , { first: "The Lord is gracious and full of compassion, * "
             , second: "slow to anger and of great kindness."
             , number: 8
               }
           , { first: "The Lord is loving to everyone * "
             , second: "and his compassion is over all his works."
             , number: 9
               }
           , { first: "All your works praise you, O Lord, * "
             , second: "and your faithful servants bless you."
             , number: 10
               }
           , { first: "They make known the glory of your kingdom * "
             , second: "and speak of your power;"
             , number: 11
               }
           , { first: "That the peoples may know of your power * "
             , second: "and the glorious splendor of your kingdom."
             , number: 12
               }
           , { first: "Your kingdom is an everlasting kingdom; * "
             , second: "your dominion endures throughout all ages."
             , number: 13
               }
           , { first: "The Lord is faithful in all his words * "
             , second: "and merciful in all his deeds."
             , number: 14
               }
           , { first: "The Lord upholds all those who fall; * "
             , second: "he lifts up those who are bowed down."
             , number: 15
               }
           , { first: "The eyes of all wait upon you, O Lord, * "
             , second: "and you give them their food in due season."
             , number: 16
               }
           , { first: "You open wide your hand * "
             , second: "and satisfy the needs of every living creature."
             , number: 17
               }
           , { first: "The Lord is righteous in all his ways * "
             , second: "and loving in all his works."
             , number: 18
               }
           , { first: "The Lord is near to those who call upon him, * "
             , second: "to all who call upon him faithfully."
             , number: 19
               }
           , { first: "He fulfills the desire of those who fear him; * "
             , second: "he hears their cry and helps them."
             , number: 20
               }
           , { first: "The Lord preserves all those who love him, * "
             , second: "but he destroys all the wicked."
             , number: 21
               }
           , { first: "My mouth shall speak the praise of the Lord; * "
             , second: "let all flesh bless his holy Name for ever and ever."
             , number: 22
               }
             ]
    }
  , 146:
    { name: "Psalm 146."
    , title: "Lauda, anima mea"
    , vss: [ { first: "Hallelujah! Praise the Lord, O my soul! * "
             , second: "I will praise the Lord as long as I live; I will sing praises to my God while I have my being."
             , number: 1
               }
           , { first: "Put not your trust in rulers, nor in any child of earth, * "
             , second: "for there is no help in them."
             , number: 2
               }
           , { first: "When they breathe their last, they return to earth, * "
             , second: "and in that day their thoughts perish."
             , number: 3
               }
           , { first: "Happy are they who have the God of Jacob for their help! * "
             , second: "whose hope is in the Lord their God;"
             , number: 4
               }
           , { first: "Who made heaven and earth, the seas, and all that is in them; * "
             , second: "who keeps his promise for ever;"
             , number: 5
               }
           , { first: "Who gives justice to those who are oppressed, * "
             , second: "and food to those who hunger."
             , number: 6
               }
           , { first: "The Lord sets the prisoners free; the Lord opens the eyes of the blind; * "
             , second: "the Lord lifts up those who are bowed down;"
             , number: 7
               }
           , { first: "The Lord loves the righteous; the Lord cares for the stranger; * "
             , second: "he sustains the orphan and widow, but frustrates the way of the wicked."
             , number: 8
               }
           , { first: "The Lord shall reign for ever, * "
             , second: "your God, O Zion, throughout all generations. Hallelujah!"
             , number: 9
               }
             ]
    }
  , 147:
    { name: "Psalm 147."
    , title: "Laudate Dominum"
    , vss: [ { first: "Hallelujah! How good it is to sing praises to our God! * "
             , second: "how pleasant it is to honor him with praise!"
             , number: 1
               }
           , { first: "The Lord rebuilds Jerusalem; * "
             , second: "he gathers the exiles of Israel."
             , number: 2
               }
           , { first: "He heals the brokenhearted * "
             , second: "and binds up their wounds."
             , number: 3
               }
           , { first: "He counts the number of the stars * "
             , second: "and calls them all by their names."
             , number: 4
               }
           , { first: "Great is our Lord and mighty in power; * "
             , second: "there is no limit to his wisdom."
             , number: 5
               }
           , { first: "The Lord lifts up the lowly, * "
             , second: "but casts the wicked to the ground."
             , number: 6
               }
           , { first: "Sing to the Lord with thanksgiving; * "
             , second: "make music to our God upon the harp."
             , number: 7
               }
           , { first: "He covers the heavens with clouds * "
             , second: "and prepares rain for the earth;"
             , number: 8
               }
           , { first: "He makes grass to grow upon the mountains * "
             , second: "and green plants to serve mankind."
             , number: 9
               }
           , { first: "He provides food for flocks and herds * "
             , second: "and for the young ravens when they cry."
             , number: 10
               }
           , { first: "He is not impressed by the might of a horse; * "
             , second: "he has no pleasure in the strength of a man;"
             , number: 11
               }
           , { first: "But the Lord has pleasure in those who fear him, * "
             , second: "in those who await his gracious favor."
             , number: 12
               }
           , { first: "Worship the Lord, O Jerusalem; * "
             , second: "praise your God, O Zion;"
             , number: 13
               }
           , { first: "For he has strengthened the bars of your gates; * "
             , second: "he has blessed your children within you."
             , number: 14
               }
           , { first: "He has established peace on your borders; * "
             , second: "he satisfies you with the finest wheat."
             , number: 15
               }
           , { first: "He sends out his command to the earth, * "
             , second: "and his word runs very swiftly."
             , number: 16
               }
           , { first: "He gives snow like wool; * "
             , second: "he scatters hoarfrost like ashes."
             , number: 17
               }
           , { first: "He scatters his hail like bread crumbs; * "
             , second: "who can stand against his cold?"
             , number: 18
               }
           , { first: "He sends forth his word and melts them; * "
             , second: "he blows with his wind, and the waters flow."
             , number: 19
               }
           , { first: "He declares his word to Jacob, * "
             , second: "his statutes and his judgments to Israel."
             , number: 20
               }
           , { first: "He has not done so to any other nation; * "
             , second: "to them he has not revealed his judgments. Hallelujah!"
             , number: 21
               }
             ]
    }
  , 148:
    { name: "Psalm 148."
    , title: "Laudate Dominum"
    , vss: [ { first: "Hallelujah! Praise the Lord from the heavens; * "
             , second: "praise him in the heights."
             , number: 1
               }
           , { first: "Praise him, all you angels of his; * "
             , second: "praise him, all his host."
             , number: 2
               }
           , { first: "Praise him, sun and moon; * "
             , second: "praise him, all you shining stars."
             , number: 3
               }
           , { first: "Praise him, heaven of heavens, * "
             , second: "and you waters above the heavens."
             , number: 4
               }
           , { first: "Let them praise the Name of the Lord; * "
             , second: "for he commanded, and they were created."
             , number: 5
               }
           , { first: "He made them stand fast for ever and ever; * "
             , second: "he gave them a law which shall not pass away."
             , number: 6
               }
           , { first: "Praise the Lord from the earth, * "
             , second: "you sea-monsters and all deeps;"
             , number: 7
               }
           , { first: "Fire and hail, snow and fog, * "
             , second: "tempestuous wind, doing his will;"
             , number: 8
               }
           , { first: "Mountains and all hills, * "
             , second: "fruit trees and all cedars;"
             , number: 9
               }
           , { first: "Wild beasts and all cattle, * "
             , second: "creeping things and wingèd birds;"
             , number: 10
               }
           , { first: "Kings of the earth and all peoples, * "
             , second: "princes and all rulers of the world;"
             , number: 11
               }
           , { first: "Young men and maidens, * "
             , second: "old and young together."
             , number: 12
               }
           , { first: "Let them praise the Name of the Lord, * "
             , second: "for his Name only is exalted, his splendor is over earth and heaven."
             , number: 13
               }
           , { first: "He has raised up strength for his people and praise for all his loyal servants, * "
             , second: "the children of Israel, a people who are near him. Hallelujah!"
             , number: 14
               }
             ]
    }
  , 149:
    { name: "Psalm 149."
    , title: "Cantate Domino"
    , vss: [ { first: "Hallelujah! Sing to the Lord a new song; * "
             , second: "sing his praise in the congregation of the faithful."
             , number: 1
               }
           , { first: "Let Israel rejoice in his Maker; * "
             , second: "let the children of Zion be joyful in their King."
             , number: 2
               }
           , { first: "Let them praise his Name in the dance; * "
             , second: "let them sing praise to him with timbrel and harp."
             , number: 3
               }
           , { first: "For the Lord takes pleasure in his people * "
             , second: "and adorns the poor with victory."
             , number: 4
               }
           , { first: "Let the faithful rejoice in triumph; * "
             , second: "let them be joyful on their beds."
             , number: 5
               }
           , { first: "Let the praises of God be in their throat * "
             , second: "and a two-edged sword in their hand;"
             , number: 6
               }
           , { first: "To wreak vengeance on the nations * "
             , second: "and punishment on the peoples;"
             , number: 7
               }
           , { first: "To bind their kings in chains * "
             , second: "and their nobles with links of iron;"
             , number: 8
               }
           , { first: "To inflict on them the judgment decreed; * "
             , second: "this is glory for all his faithful people. Hallelujah!"
             , number: 9
               }
             ]
    }
  , 150:
    { name: "Psalm 150."
    , title: "Laudate Dominum"
    , vss: [ { first: "Hallelujah! Praise God in his holy temple; * "
             , second: "praise him in the firmament of his power."
             , number: 1
               }
           , { first: "Praise him for his mighty acts; * "
             , second: "praise him for his excellent greatness."
             , number: 2
               }
           , { first: "Praise him with the blast of the ram’s-horn; * "
             , second: "praise him with lyre and harp."
             , number: 3
               }
           , { first: "Praise him with timbrel and dance; * "
             , second: "praise him with strings and pipe."
             , number: 4
               }
           , { first: "Praise him with resounding cymbals; * "
             , second: "praise him with loud-clanging cymbals."
             , number: 5
               }
           , { first: "Let everything that has breath * "
             , second: "praise the Lord. Hallelujah!"
             , number: 6
               }
            ]
      }
  }; // eo BCP
