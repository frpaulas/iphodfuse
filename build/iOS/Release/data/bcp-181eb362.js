function getPsalm(psalm, vsFrom = 1, vsTo = 999) {
    let ps = bcp[psalm];
    return { name: ps.name, title: ps.title, vss: ps.vss.slice(vsFrom - 1, vsTo) };
}

var bcp =
  { 1: 
    { name: "Psalm 1."
    , title: "Beatus vir qui non abiit"
    , vss: [ { first: "Happy are they who have not walked in the counsel of the wicked, &#42; "
             , second: "nor lingered in the way of sinners, nor sat in the seats of the scornful!"
             }
           , { first: "Their delight is in the law of the Lord, &#42; "
             , second: "and they meditate on his law day and night."
             }
           , { first: "They are like trees planted by streams of water, bearing fruit in due season, with leaves that do not wither; &#42; "
             , second: "everything they do shall prosper."
             }
           , { first: "It is not so with the wicked; &#42; "
             , second: "they are like chaff which the wind blows away."
             }
           , { first: "Therefore the wicked shall not stand upright when judgment comes, &#42; "
             , second: "nor the sinner in the council of the righteous."
             }
           , { first: "For the Lord knows the way of the righteous, &#42; "
             , second: "but the way of the wicked is doomed."
             }
          ]  
    }
  , 2: 
    { name: "Psalm 2."
    , title: "Quare fremuerunt gentes?,"
    , vss: [ { first: "Why are the nations in an uproar? &#42; "
             , second: "Why do the peoples mutter empty threats?"
             }
           , { first: "Why do the kings of the earth rise up in revolt, and the princes plot together, &#42; "
             , second: "against the Lord and against his Anointed?"
             }
           , { first: "“Let us break their yoke,” they say; &#42; "
             , second: "“let us cast off their bonds from us.”"
             }
           , { first: "He whose throne is in heaven is laughing; &#42; "
             , second: "the Lord has them in derision."
             }
           , { first: "Then he speaks to them in his wrath, &#42; "
             , second: "and his rage fills them with terror."
             }
           , { first: "“I myself have set my king &#42; "
             , second: "upon my holy hill of Zion.”"
             }
           , { first: "Let me announce the decree of the Lord: &#42;  he said to me, “You are my Son;"
             , second: "this day have I begotten you."
             }
           , { first: "Ask of me, and I will give you the nations for your inheritance &#42; "
             , second: "and the ends of the earth for your possession."
             }
           , { first: "You shall crush them with an iron rod &#42; "
             , second: "and shatter them like a piece of pottery.”"
             }
           , { first: " And now, you kings, be wise; &#42; "
             , second: "be warned, you rulers of the earth."
             }
           , { first: " Submit to the Lord with fear, &#42; "
             , second: "and with trembling bow before him;"
             }
           , { first: " Lest he be angry and you perish; &#42; "
             , second: "for his wrath is quickly kindled."
             }
           , { first: "Happy are they all &#42; "
             , second: "who take refuge in him!"
             }
          ]  
    }
  , 3:
    { name: "Psalm 3."
    , title: "Domine, quid multiplicati"
    , vss: [ { first: "Lord, how many adversaries I have! &#42; "
             , second: "how many there are who rise up against me!"
             }
           , { first: "How many there are who say of me, &#42; "
             , second: "“There is no help for him in his God.”"
             }
           , { first: "But you, O Lord, are a shield about me; &#42; "
             , second: "you are my glory, the one who lifts up my head."
             }
           , { first: "I call aloud upon the Lord, &#42; "
             , second: "and he answers me from his holy hill;"
             }
           , { first: "I lie down and go to sleep; &#42; "
             , second: "I wake again, because the Lord sustains me."
             }
           , { first: "I do not fear the multitudes of people &#42; "
             , second: "who set themselves against me all around."
             }
           , { first: "Rise up, O Lord; set me free, O my God; &#42; "
             , second: "surely, you will strike all my enemies across the face, you will break the teeth of the wicked."
             }
           , { first: "Deliverance belongs to the Lord. &#42; "
             , second: "Your blessing be upon your people!"
             }
           ]
    }
  , 4:
    { name: "Psalm 4."
    , title: "Cum invocarem"
    , vss: [ { first: "Answer me when I call, O God, defender of my cause; &#42; "
             , second: "you set me free when I am hard-pressed; have mercy on me and hear my prayer."
             }
           , { first: "“You mortals, how long will you dishonor my glory; &#42; "
             , second: "how long will you worship dumb idols and run after false gods?”"
             }
           , { first: "Know that the Lord does wonders for the faithful; &#42; "
             , second: "when I call upon the Lord, he will hear me."
             }
           , { first: "Tremble, then, and do not sin; &#42; "
             , second: "speak to your heart in silence upon your bed."
             }
           , { first: "Offer the appointed sacrifices &#42; "
             , second: "and put your trust in the Lord."
             }
           , { first: "Many are saying, “Oh, that we might see better times!” &#42; "
             , second: "Lift up the light of your countenance upon us, O Lord."
             }
           , { first: "You have put gladness in my heart, &#42; "
             , second: "more than when grain and wine and oil increase."
             }
           , { first: "I lie down in peace; at once I fall asleep; &#42; "
             , second: "for only you, Lord, make me dwell in safety."
             }
           ]
    }
  , 5:
    { name: "Psalm 5."
    , title: "Verba mea auribus"
    , vss: [ { first: "Give ear to my words, O Lord; &#42; "
             , second: "consider my meditation."
             }
           , { first: "Hearken to my cry for help, my King and my God, &#42; "
             , second: "for I make my prayer to you."
             }
           , { first: "In the morning, Lord, you hear my voice; &#42; "
             , second: "early in the morning I make my appeal and watch for you."
             }
           , { first: "For you are not a God who takes pleasure in wickedness, &#42; "
             , second: "and evil cannot dwell with you."
             }
           , { first: "Braggarts cannot stand in your sight; &#42; "
             , second: "you hate all those who work wickedness."
             }
           , { first: "You destroy those who speak lies; &#42; "
             , second: "the bloodthirsty and deceitful, O Lord, you abhor."
             }
           , { first: "But as for me, through the greatness of your mercy I will go into your house; &#42; "
             , second: "I will bow down toward your holy temple in awe of you."
             }
           , { first: "Lead me, O Lord, in your righteousness, because of those who lie in wait for me; &#42; "
             , second: "make your way straight before me."
             }
           , { first: "For there is no truth in their mouth; &#42; "
             , second: "there is destruction in their heart;"
             }
           , { first: "Their throat is an open grave; &#42; "
             , second: "they flatter with their tongue."
             }
           , { first: "Declare them guilty, O God; &#42; "
             , second: "let them fall, because of their schemes."
             }
           , { first: "Because of their many transgressions cast them out, &#42; "
             , second: "for they have rebelled against you."
             }
           , { first: "But all who take refuge in you will be glad; &#42; "
             , second: "they will sing out their joy for ever."
             }
           , { first: "You will shelter them, &#42; "
             , second: "so that those who love your Name may exult in you."
             }
           , { first: "For you, O Lord, will bless the righteous; &#42; "
             , second: "you will defend them with your favor as with a shield."
             }
           ]
    }
  , 6:
    { name: "Psalm 6."
    , title: "Domine, ne in furore"
    , vss: [ { first: "Lord, do not rebuke me in your anger; &#42; "
             , second: "do not punish me in your wrath."
             }
           , { first: "Have pity on me, Lord, for I am weak; &#42; "
             , second: "heal me, Lord, for my bones are racked."
             }
           , { first: "My spirit shakes with terror; &#42; "
             , second: "how long, O Lord, how long?"
             }
           , { first: "Turn, O Lord, and deliver me; &#42; "
             , second: "save me for your mercy’s sake."
             }
           , { first: "For in death no one remembers you; &#42; "
             , second: "and who will give you thanks in the grave?"
             }
           , { first: "I grow weary because of my groaning; &#42; "
             , second: "every night I drench my bed and flood my couch with tears."
             }
           , { first: "My eyes are wasted with grief &#42; "
             , second: "and worn away because of all my enemies."
             }
           , { first: "Depart from me, all evildoers, &#42; "
             , second: "for the Lord has heard the sound of my weeping."
             }
           , { first: "The Lord has heard my supplication; &#42; "
             , second: "the Lord accepts my prayer."
             }
           , { first: "All my enemies shall be confounded and quake with fear; &#42; "
             , second: "they shall turn back and suddenly be put to shame."
             }
           ]
    }
  , 7:
    { name: "Psalm 7."
    , title: "Domine, Deus meus"
    , vss: [ { first: "O Lord my God, I take refuge in you; &#42; "
             , second: "save and deliver me from all who pursue me;"
             }
           , { first: "Lest like a lion they tear me in pieces &#42; "
             , second: "and snatch me away with none to deliver me."
             }
           , { first: "O Lord my God, if I have done these things: &#42; "
             , second: "if there is any wickedness in my hands,"
             }
           , { first: "If I have repaid my friend with evil, &#42; "
             , second: "or plundered him who without cause is my enemy;"
             }
           , { first: "Then let my enemy pursue and overtake me, &#42; "
             , second: "trample my life into the ground, and lay my honor in the dust."
             }
           , { first: "Stand up, O Lord, in your wrath; &#42; "
             , second: "rise up against the fury of my enemies."
             }
           , { first: "Awake, O my God, decree justice; &#42; "
             , second: "let the assembly of the peoples gather round you."
             }
           , { first: "Be seated on your lofty throne, O Most High; &#42; "
             , second: "O Lord, judge the nations."
             }
           , { first: "Give judgment for me according to my righteousness, O Lord, &#42; "
             , second: "and according to my innocence, O Most High."
             }
           , { first: "Let the malice of the wicked come to an end, but establish the righteous; &#42; "
             , second: "for you test the mind and heart, O righteous God."
             }
           , { first: "God is my shield and defense; &#42; "
             , second: "he is the savior of the true in heart."
             }
           , { first: "God is a righteous judge; &#42; "
             , second: "God sits in judgment every day."
             }
           , { first: "If they will not repent, God will whet his sword; &#42; "
             , second: "he will bend his bow and make it ready."
             }
           , { first: "He has prepared his weapons of death; &#42; "
             , second: "he makes his arrows shafts of fire."
             }
           , { first: "Look at those who are in labor with wickedness, &#42; "
             , second: "who conceive evil, and give birth to a lie."
             }
           , { first: "They dig a pit and make it deep &#42; "
             , second: "and fall into the hole that they have made."
             }
           , { first: "Their malice turns back upon their own head; &#42; "
             , second: "their violence falls on their own scalp."
             }
           , { first: "I will bear witness that the Lord is righteous; &#42; "
             , second: "I will praise the Name of the Lord Most High."
             }
           ]
    }
  , 8:
    { name: "Psalm 8."
    , title: "Domine, Dominus noster"
    , vss: [ { first: "O Lord our Governor, &#42; "
             , second: "how exalted is your Name in all the world!"
             }
           , { first: "Out of the mouths of infants and children &#42; "
             , second: "your majesty is praised above the heavens."
             }
           , { first: "You have set up a stronghold against your adversaries, &#42; "
             , second: "to quell the enemy and the avenger."
             }
           , { first: "When I consider your heavens, the work of your fingers, &#42; "
             , second: "the moon and the stars you have set in their courses,"
             }
           , { first: "What is man that you should be mindful of him? &#42; "
             , second: "the son of man that you should seek him out?"
             }
           , { first: "You have made him but little lower than the angels; &#42; "
             , second: "you adorn him with glory and honor;"
             }
           , { first: "You give him mastery over the works of your hands; &#42; "
             , second: "you put all things under his feet:"
             }
           , { first: "All sheep and oxen, &#42; "
             , second: "even the wild beasts of the field,"
             }
           , { first: "The birds of the air, the fish of the sea, &#42; "
             , second: "and whatsoever walks in the paths of the sea."
             }
           , { first: "O Lord our Governor, &#42; "
             , second: "how exalted is your Name in all the world!"
             }
           ]
    }
  , 9: 
    { name: "Psalm 9."
    , title: "Confitebor tibi"
    , vss: [ { first: "I will give thanks to you, O Lord, with my whole heart; &#42; "
             , second: "I will tell of all your marvelous works."
             }
           , { first: "I will be glad and rejoice in you; &#42; "
             , second: "I will sing to your Name, O Most High."
             }
           , { first: "When my enemies are driven back, &#42; "
             , second: "they will stumble and perish at your presence."
             }
           , { first: "For you have maintained my right and my cause; &#42; "
             , second: "you sit upon your throne judging right."
             }
           , { first: "You have rebuked the ungodly and destroyed the wicked; &#42; "
             , second: "you have blotted out their name for ever and ever."
             }
           , { first: "As for the enemy, they are finished, in perpetual ruin, &#42; "
             , second: "their cities ploughed under, the memory of them perished;"
             }
           , { first: "But the Lord is enthroned for ever; &#42; "
             , second: "he has set up his throne for judgment."
             }
           , { first: "It is he who rules the world with righteousness; &#42; "
             , second: "he judges the peoples with equity."
             }
           , { first: "The Lord will be a refuge for the oppressed, &#42; "
             , second: "a refuge in time of trouble."
             }
           , { first: "Those who know your Name will put their trust in you, &#42; "
             , second: "for you never forsake those who seek you, O Lord."
             }
           , { first: "Sing praise to the Lord who dwells in Zion; &#42; "
             , second: "proclaim to the peoples the things he has done."
             }
           , { first: "The Avenger of blood will remember them; &#42; "
             , second: "he will not forget the cry of the afflicted."
             }
           , { first: "Have pity on me, O Lord; &#42; "
             , second: "see the misery I suffer from those who hate me, O you who lift me up from the gate of death;"
             }
           , { first: "So that I may tell of all your praises and rejoice in your salvation &#42; "
             , second: "in the gates of the city of Zion."
             }
           , { first: "The ungodly have fallen into the pit they dug, &#42; "
             , second: "and in the snare they set is their own foot caught."
             }
           , { first: "The Lord is known by his acts of justice; &#42; "
             , second: "the wicked are trapped in the works of their own hands."
             }
           , { first: "The wicked shall be given over to the grave, &#42; "
             , second: "and also all the peoples that forget God."
             }
           , { first: "For the needy shall not always be forgotten, &#42; "
             , second: "and the hope of the poor shall not perish for ever."
             }
           , { first: "Rise up, O Lord, let not the ungodly have the upper hand; &#42; "
             , second: "let them be judged before you."
             }
           , { first: "Put fear upon them, O Lord; &#42; "
             , second: "let the ungodly know they are but mortal."
             }
           ]
    }
  , 10:
    { name: "Psalm 10."
    , title: "Ut quid, Domine?"
    , vss: [ { first: "Why do you stand so far off, O Lord, &#42; "
             , second: "and hide yourself in time of trouble?"
             }
           , { first: "The wicked arrogantly persecute the poor, &#42; "
             , second: "but they are trapped in the schemes they have devised."
             }
           , { first: "The wicked boast of their heart’s desire; &#42; "
             , second: "the covetous curse and revile the Lord."
             }
           , { first: "The wicked are so proud that they care not for God; &#42; "
             , second: "their only thought is, “God does not matter.”"
             }
           , { first: "Their ways are devious at all times; your judgments are far above out of their sight; &#42; "
             , second: "they defy all their enemies."
             }
           , { first: "They say in their heart, “I shall not be shaken; &#42; "
             , second: "no harm shall happen to me ever.”"
             }
           , { first: "Their mouth is full of cursing, deceit, and oppression; &#42; "
             , second: "under their tongue are mischief and wrong."
             }
           , { first: "They lurk in ambush in public squares and in secret places they murder the innocent; &#42; "
             , second: "they spy out the helpless."
             }
           , { first: "They lie in wait, like a lion in a covert; they lie in wait to seize upon the lowly; &#42; "
             , second: "they seize the lowly and drag them away in their net. "
             }
           , { first: "The innocent are broken and humbled before them; &#42; "
             , second: "the helpless fall before their power."
             }
           , { first: "They say in their heart, “God has forgotten; &#42; "
             , second: "he hides his face; he will never notice.”"
             }
           , { first: "Rise up, O Lord; lift up your hand, O God; &#42; "
             , second: "do not forget the afflicted."
             }
           , { first: "Why should the wicked revile God? &#42; "
             , second: "why should they say in their heart, “You do not care”?"
             }
           , { first: "Surely, you behold trouble and misery; &#42; "
             , second: "you see it and take it into your own hand."
             }
           , { first: "The helpless commit themselves to you, &#42; "
             , second: "for you are the helper of orphans."
             }
           , { first: "Break the power of the wicked and evil; &#42; "
             , second: "search out their wickedness until you find none."
             }
           , { first: "The Lord is King for ever and ever; &#42; "
             , second: "the ungodly shall perish from his land."
             }
           , { first: "The Lord will hear the desire of the humble; &#42; "
             , second: "you will strengthen their heart and your ears shall hear;"
             }
           , { first: "To give justice to the orphan and oppressed, &#42; "
             , second: "so that mere mortals may strike terror no more."
             }
           ]
    }
  , 11:
    { name: "Psalm 11."
    , title: "In Domino confido"
    , vss: [ { first: "In the Lord have I taken refuge; &#42; "
             , second: "how then can you say to me, “Fly away like a bird to the hilltop;"
             }
           , { first: "For see how the wicked bend the bow and fit their arrows to the string, &#42; "
             , second: "to shoot from ambush at the true of heart."
             }
           , { first: "When the foundations are being destroyed, &#42; "
             , second: "what can the righteous do?”"
             }
           , { first: "The Lord is in his holy temple; &#42; "
             , second: "the Lord’s throne is in heaven."
             }
           , { first: "His eyes behold the inhabited world; &#42; "
             , second: "his piercing eye weighs our worth."
             }
           , { first: "The Lord weighs the righteous as well as the wicked, &#42; "
             , second: "but those who delight in violence he abhors."
             }
           , { first: "Upon the wicked he shall rain coals of fire and burning sulphur; &#42; "
             , second: "a scorching wind shall be their lot."
             }
           , { first: "For the Lord is righteous; he delights in righteous deeds; &#42; "
             , second: "and the just shall see his face."
             }
           ]
    }
  , 12:
    { name: "Psalm 12."
    , title: "Salvum me fac"
    , vss: [ { first: "Help me, Lord, for there is no godly one left; &#42; "
             , second: "the faithful have vanished from among us."
             }
           , { first: "Everyone speaks falsely with his neighbor; &#42; "
             , second: "with a smooth tongue they speak from a double heart."
             }
           , { first: "Oh, that the Lord would cut off all smooth tongues, &#42; "
             , second: "and close the lips that utter proud boasts!"
             }
           , { first: "Those who say, “With our tongue will we prevail; &#42; "
             , second: "our lips are our own; who is lord over us?”"
             }
           , { first: "“Because the needy are oppressed, and the poor cry out in misery, &#42; "
             , second: "I will rise up,” says the Lord, “and give them the help they long for.”"
             }
           , { first: "The words of the Lord are pure words, &#42; "
             , second: "like silver refined from ore and purified seven times in the fire."
             }
           , { first: "O Lord, watch over us &#42; "
             , second: "and save us from this generation for ever."
             }
           , { first: "The wicked prowl on every side, &#42; "
             , second: "and that which is worthless is highly prized by everyone."
             }
           ]
    }
  , 13:
    { name: "Psalm 13."
    , title: "Usquequo, Domine?"
    , vss: [ { first: "How long, O Lord? will you forget me for ever? &#42; "
             , second: "how long will you hide your face from me?"
             }
           , { first: "How long shall I have perplexity in my mind, and grief in my heart, day after day? &#42; "
             , second: "how long shall my enemy triumph over me?"
             }
           , { first: "Look upon me and answer me, O Lord my God; &#42; "
             , second: "give light to my eyes, lest I sleep in death;"
             }
           , { first: "Lest my enemy say, “I have prevailed over him,” &#42; "
             , second: "and my foes rejoice that I have fallen."
             }
           , { first: "But I put my trust in your mercy; &#42; "
             , second: "my heart is joyful because of your saving help."
             }
           , { first: "I will sing to the Lord, for he has dealt with me richly; &#42; "
             , second: "I will praise the Name of the Lord Most High."
             }
           ]
    }
  , 14:
    { name: "Psalm 14."
    , title: "Dixit insipiens"
    , vss: [ { first: "The fool has said in his heart, “There is no God.” &#42; "
             , second: "All are corrupt and commit abominable acts; there is none who does any good."
             }
           , { first: "The Lord looks down from heaven upon us all, &#42; "
             , second: "to see if there is any who is wise, if there is one who seeks after God."
             }
           , { first: "Every one has proved faithless; all alike have turned bad; &#42; "
             , second: "there is none who does good; no, not one."
             }
           , { first: "Have they no knowledge, all those evildoers &#42; "
             , second: "who eat up my people like bread and do not call upon the Lord?"
             }
           , { first: "See how they tremble with fear, &#42; "
             , second: "because God is in the company of the righteous."
             }
           , { first: "Their aim is to confound the plans of the afflicted, &#42; "
             , second: "but the Lord is their refuge."
             }
           , { first: "Oh, that Israel’s deliverance would come out of Zion! &#42; "
             , second: "when the Lord restores the fortunes of his people, Jacob will rejoice and Israel be glad."
             }
           ]
    }
  , 15:
    { name: "Psalm 15."
    , title: "Domine, quis habitabit?"
    , vss: [ { first: "Lord, who may dwell in your tabernacle? &#42; "
             , second: "who may abide upon your holy hill?"
             }
           , { first: "Whoever leads a blameless life and does what is right, &#42; "
             , second: "who speaks the truth from his heart."
             }
           , { first: "There is no guile upon his tongue; he does no evil to his friend; &#42; "
             , second: "he does not heap contempt upon his neighbor."
             }
           , { first: "In his sight the wicked is rejected, &#42; "
             , second: "but he honors those who fear the Lord."
             }
           , { first: "He has sworn to do no wrong &#42; "
             , second: "and does not take back his word."
             }
           , { first: "He does not give his money in hope of gain, &#42; "
             , second: "nor does he take a bribe against the innocent."
             }
           , { first: "Whoever does these things &#42; "
             , second: "shall never be overthrown."
             }
           ]
    }
  , 16:
    { name: "Psalm 16."
    , title: "Conserva me, Domine"
    , vss: [ { first: "Protect me, O God, for I take refuge in you; &#42; "
             , second: "I have said to the Lord, “You are my Lord, my good above all other.”"
             }
           , { first: "All my delight is upon the godly that are in the land, &#42; "
             , second: "upon those who are noble among the people."
             }
           , { first: "But those who run after other gods &#42; "
             , second: "shall have their troubles multiplied."
             }
           , { first: "Their libations of blood I will not offer, &#42; "
             , second: "nor take the names of their gods upon my lips."
             }
           , { first: "O Lord, you are my portion and my cup; &#42; "
             , second: "it is you who uphold my lot."
             }
           , { first: "My boundaries enclose a pleasant land; &#42; "
             , second: "indeed, I have a goodly heritage."
             }
           , { first: "I will bless the Lord who gives me counsel; &#42; "
             , second: "my heart teaches me, night after night."
             }
           , { first: "I have set the Lord always before me; &#42; "
             , second: "because he is at my right hand I shall not fall."
             }
           , { first: "My heart, therefore, is glad, and my spirit rejoices; &#42; "
             , second: "my body also shall rest in hope."
             }
           , { first: "For you will not abandon me to the grave, &#42; "
             , second: "nor let your holy one see the Pit."
             }
           , { first: "You will show me the path of life; &#42; "
             , second: "in your presence there is fullness of joy, and in your right hand are pleasures for evermore."
             }
           ]
    }
  , 17:
    { name: "Psalm 17."
    , title: "Exaudi, Domine"
    , vss: [ { first: "Hear my plea of innocence, O Lord; give heed to my cry; &#42; "
             , second: "listen to my prayer, which does not come from lying lips."
             }
           , { first: "Let my vindication come forth from your presence; &#42; "
             , second: "let your eyes be fixed on justice."
             }
           , { first: "Weigh my heart, summon me by night, &#42; "
             , second: "melt me down; you will find no impurity in me."
             }
           , { first: "I give no offense with my mouth as others do; &#42; "
             , second: "I have heeded the words of your lips."
             }
           , { first: "My footsteps hold fast to the ways of your law; &#42; "
             , second: "in your paths my feet shall not stumble."
             }
           , { first: "I call upon you, O God, for you will answer me; &#42; "
             , second: "incline your ear to me and hear my words."
             }
           , { first: "Show me your marvelous loving-kindness, &#42; "
             , second: "O Savior of those who take refuge at your right hand from those who rise up against them."
             }
           , { first: "Keep me as the apple of your eye; &#42; "
             , second: "hide me under the shadow of your wings,"
             }
           , { first: "From the wicked who assault me, &#42; "
             , second: "from my deadly enemies who surround me."
             }
           , { first: "They have closed their heart to pity, &#42; "
             , second: "and their mouth speaks proud things."
             }
           , { first: "They press me hard, now they surround me, &#42; "
             , second: "watching how they may cast me to the ground,"
             }
           , { first: "Like a lion, greedy for its prey, &#42; "
             , second: "and like a young lion lurking in secret places."
             }
           , { first: "Arise, O Lord; confront them and bring them down; &#42; "
             , second: "deliver me from the wicked by your sword."
             }
           , { first: "Deliver me, O Lord, by your hand &#42; "
             , second: "from those whose portion in life is this world;"
             }
           , { first: "Whose bellies you fill with your treasure, &#42; "
             , second: "who are well supplied with children and leave their wealth to their little ones."
             }
           , { first: "But at my vindication I shall see your face; &#42; "
             , second: "when I awake, I shall be satisfied, beholding your likeness."
             }
           ]
    }
  , 18:
    { name: "Psalm 18."
    , title: ""
    , vss: [ { title: "Part I Diligam te, Domine."
             , first: "I love you, O Lord my strength, &#42; "
             , second: "O Lord my stronghold, my crag, and my haven."
             }
           , { first: "My God, my rock in whom I put my trust, &#42; "
             , second: "my shield, the horn of my salvation, and my refuge; you are worthy of praise."
             }
           , { first: "I will call upon the Lord, &#42; "
             , second: "and so shall I be saved from my enemies."
             }
           , { first: "The breakers of death rolled over me, &#42; "
             , second: "and the torrents of oblivion made me afraid."
             }
           , { first: "The cords of hell entangled me, &#42; "
             , second: "and the snares of death were set for me."
             }
           , { first: "I called upon the Lord in my distress &#42; "
             , second: "and cried out to my God for help."
             }
           , { first: "He heard my voice from his heavenly dwelling; &#42; "
             , second: "my cry of anguish came to his ears."
             }
           , { first: "The earth reeled and rocked; &#42; "
             , second: "the roots of the mountains shook; they reeled because of his anger."
             }
           , { first: "Smoke rose from his nostrils and a consuming fire out of his mouth; &#42; "
             , second: "hot burning coals blazed forth from him."
             }
           , { first: "He parted the heavens and came down &#42; "
             , second: "with a storm cloud under his feet."
             }
           , { first: "He mounted on cherubim and flew; &#42; "
             , second: "he swooped on the wings of the wind."
             }
           , { first: "He wrapped darkness about him; &#42; "
             , second: "he made dark waters and thick clouds his pavilion."
             }
           , { first: "From the brightness of his presence, through the clouds, &#42; "
             , second: "burst hailstones and coals of fire."
             }
           , { first: "The Lord thundered out of heaven; &#42; "
             , second: "the Most High uttered his voice."
             }
           , { first: "He loosed his arrows and scattered them; &#42; "
             , second: "he hurled thunderbolts and routed them."
             }
           , { first: "The beds of the seas were uncovered, and the foundations of the world laid bare, &#42; "
             , second: "at your battle cry, O Lord, at the blast of the breath of your nostrils."
             }
           , { first: "He reached down from on high and grasped me; &#42; "
             , second: "he drew me out of great waters."
             }
           , { first: "He delivered me from my strong enemies and from those who hated me; &#42; "
             , second: "for they were too mighty for me."
             }
           , { first: "They confronted me in the day of my disaster; &#42; "
             , second: "but the Lord was my support."
             }
           , { first: "He brought me out into an open place; &#42; "
             , second: "he rescued me because he delighted in me."
             }
           , { title: "Part II Et retribuet mihi"
             , first: "The Lord rewarded me because of my righteous dealing; &#42; "
             , second: "because my hands were clean he rewarded me;"
             }
           , { first: "For I have kept the ways of the Lord &#42; "
             , second: "and have not offended against my God;"
             }
           , { first: "For all his judgments are before my eyes, &#42; "
             , second: "and his decrees I have not put away from me;"
             }
           , { first: "For I have been blameless with him &#42; "
             , second: "and have kept myself from iniquity;"
             }
           , { first: "Therefore the Lord rewarded me according to my righteous dealing, &#42; "
             , second: "because of the cleanness of my hands in his sight."
             }
           , { first: "With the faithful you show yourself faithful, O God; &#42; "
             , second: "with the forthright you show yourself forthright."
             }
           , { first: "With the pure you show yourself pure, &#42; "
             , second: "but with the crooked you are wily."
             }
           , { first: "You will save a lowly people, &#42; "
             , second: "but you will humble the haughty eyes."
             }
           , { first: "You, O Lord, are my lamp; &#42; "
             , second: "my God, you make my darkness bright."
             }
           , { first: "With you I will break down an enclosure; &#42; "
             , second: "with the help of my God I will scale any wall."
             }
           , { first: "As for God, his ways are perfect; the words of the Lord are tried in the fire; &#42; "
             , second: "he is a shield to all who trust in him."
             }
           , { first: "For who is God, but the Lord? &#42; "
             , second: "who is the Rock, except our God?"
             }
           , { first: "It is God who girds me about with strength &#42; "
             , second: "and makes my way secure."
             }
           , { first: "He makes me sure-footed like a deer &#42; "
             , second: "and lets me stand firm on the heights."
             }
           , { first: "He trains my hands for battle &#42; "
             , second: "and my arms for bending even a bow of bronze."
             }
           , { first: "You have given me your shield of victory; &#42; "
             , second: "your right hand also sustains me; your loving care makes me great."
             }
           , { first: "You lengthen my stride beneath me, &#42; "
             , second: "and my ankles do not give way."
             }
           , { first: "I pursue my enemies and overtake them; &#42; "
             , second: "I will not turn back till I have destroyed them."
             }
           , { first: "I strike them down, and they cannot rise; &#42; "
             , second: "they fall defeated at my feet."
             }
           , { first: "You have girded me with strength for the battle; &#42; "
             , second: "you have cast down my adversaries beneath me; you have put my enemies to flight."
             }
           , { first: "I destroy those who hate me; they cry out, but there is none to help them; &#42; "
             , second: "they cry to the Lord, but he does not answer."
             }
           , { first: "I beat them small like dust before the wind; &#42; "
             , second: "I trample them like mud in the streets."
             }
           , { first: "You deliver me from the strife of the peoples; &#42; "
             , second: "you put me at the head of the nations."
             }
           , { first: "A people I have not known shall serve me; no sooner shall they hear than they shall obey me; &#42; "
             , second: "strangers will cringe before me."
             }
           , { first: "The foreign peoples will lose heart; &#42; "
             , second: "they shall come trembling out of their strongholds."
             }
           , { first: "The Lord lives! Blessed is my Rock! &#42; "
             , second: "Exalted is the God of my salvation!"
             }
           , { first: "He is the God who gave me victory &#42; "
             , second: "and cast down the peoples beneath me."
             }
           , { first: "You rescued me from the fury of my enemies; you exalted me above those who rose against me; &#42; "
             , second: "you saved me from my deadly foe."
             }
           , { first: "Therefore will I extol you among the nations, O Lord, &#42; "
             , second: "and sing praises to your Name."
             }
           , { first: "He multiplies the victories of his king; &#42; "
             , second: "he shows loving-kindness to his anointed, to David and his descendants for ever."
             }
           ]
    }
  , 19:
    { name: "Psalm 19."
    , title: "Cæli enarrant"
    , vss: [ { first: "The heavens declare the glory of God, &#42; "
             , second: "and the firmament shows his handiwork."
             }
           , { first: "One day tells its tale to another, &#42; "
             , second: "and one night imparts knowledge to another."
             }
           , { first: "Although they have no words or language, &#42; "
             , second: "and their voices are not heard,"
             }
           , { first: "Their sound has gone out into all lands, &#42; "
             , second: "and their message to the ends of the world."
             }
           , { first: "In the deep has he set a pavilion for the sun; &#42; "
             , second: "it comes forth like a bridegroom out of his chamber; it rejoices like a champion to run its course."
             }
           , { first: "It goes forth from the uttermost edge of the heavens and runs about to the end of it again; &#42; "
             , second: "nothing is hidden from its burning heat."
             }
           , { first: "The law of the Lord is perfect and revives the soul; &#42; "
             , second: "the testimony of the Lord is sure and gives wisdom to the innocent."
             }
           , { first: "The statutes of the Lord are just and rejoice the heart; &#42; "
             , second: "the commandment of the Lord is clear and gives light to the eyes."
             }
           , { first: "The fear of the Lord is clean and endures for ever; &#42; "
             , second: "the judgments of the Lord are true and righteous altogether."
             }
           , { first: "More to be desired are they than gold, more than much fine gold, &#42; "
             , second: "sweeter far than honey, than honey in the comb."
             }
           , { first: "By them also is your servant enlightened, &#42; "
             , second: "and in keeping them there is great reward."
             }
           , { first: "Who can tell how often he offends? &#42; "
             , second: "cleanse me from my secret faults."
             }
           , { first: "Above all, keep your servant from presumptuous sins; let them not get dominion over me; &#42; "
             , second: "then shall I be whole and sound, and innocent of a great offense."
             }
           , { first: "Let the words of my mouth and the meditation of my heart be acceptable in your sight, &#42; "
             , second: "O Lord, my strength and my redeemer."
             }
           ]
    }
  , 20:
    { name: "Psalm 20."
    , title: "Exaudiat te Dominus"
    , vss: [ { first: "May the Lord answer you in the day of trouble, &#42; "
             , second: "the Name of the God of Jacob defend you;"
             }
           , { first: "Send you help from his holy place &#42; "
             , second: "and strengthen you out of Zion;"
             }
           , { first: "Remember all your offerings &#42; "
             , second: "and accept your burnt sacrifice;"
             }
           , { first: "Grant you your heart’s desire &#42; "
             , second: "and prosper all your plans."
             }
           , { first: "We will shout for joy at your victory and triumph in the Name of our God; &#42; "
             , second: "may the Lord grant all your requests."
             }
           , { first: "Now I know that the Lord gives victory to his anointed; &#42; "
             , second: "he will answer him out of his holy heaven, with the victorious strength of his right hand."
             }
           , { first: "Some put their trust in chariots and some in horses, &#42; "
             , second: "but we will call upon the Name of the Lord our God."
             }
           , { first: "They collapse and fall down, &#42; "
             , second: "but we will arise and stand upright."
             }
           , { first: "O Lord, give victory to the king &#42; "
             , second: "and answer us when we call."
             }
           ]
    }
  , 21:
    { name: "Psalm 21."
    , title: "Domine, in virtute tua"
    , vss: [ { first: "The king rejoices in your strength, O Lord; &#42; "
             , second: "how greatly he exults in your victory!"
             }
           , { first: "You have given him his heart’s desire; &#42; "
             , second: "you have not denied him the request of his lips."
             }
           , { first: "For you meet him with blessings of prosperity, &#42; "
             , second: "and set a crown of fine gold upon his head."
             }
           , { first: "He asked you for life, and you gave it to him: &#42; "
             , second: "length of days, for ever and ever."
             }
           , { first: "His honor is great, because of your victory; &#42; "
             , second: "splendor and majesty have you bestowed upon him."
             }
           , { first: "For you will give him everlasting felicity &#42; "
             , second: "and will make him glad with the joy of your presence."
             }
           , { first: "For the king puts his trust in the Lord; &#42; "
             , second: "because of the loving-kindness of the Most High, he will not fall."
             }
           , { first: "Your hand will lay hold upon all your enemies; &#42; "
             , second: "your right hand will seize all those who hate you."
             }
           , { first: "You will make them like a fiery furnace &#42; "
             , second: "at the time of your appearing, O Lord;"
             }
           , { first: "You will swallow them up in your wrath, &#42; "
             , second: "and fire shall consume them."
             }
           , { first: "You will destroy their offspring from the land &#42; "
             , second: "and their descendants from among the peoples of the earth."
             }
           , { first: "Though they intend evil against you and devise wicked schemes, &#42; "
             , second: "yet they shall not prevail."
             }
           , { first: "For you will put them to flight &#42; "
             , second: "and aim your arrows at them."
             }
           , { first: "Be exalted, O Lord, in your might; &#42; "
             , second: "we will sing and praise your power."
             }
           ]
    }
  , 22:
    { name: "Psalm 22."
    , title: "Deus, Deus meus"
    , vss: [ { first: "My God, my God, why have you forsaken me? &#42; "
             , second: "and are so far from my cry and from the words of my distress?"
             }
           , { first: "O my God, I cry in the daytime, but you do not answer; &#42; "
             , second: "by night as well, but I find no rest."
             }
           , { first: "Yet you are the Holy One, &#42; "
             , second: "enthroned upon the praises of Israel."
             }
           , { first: "Our forefathers put their trust in you; &#42; "
             , second: "they trusted, and you delivered them."
             }
           , { first: "They cried out to you and were delivered; &#42; "
             , second: "they trusted in you and were not put to shame."
             }
           , { first: "But as for me, I am a worm and no man, &#42; "
             , second: "scorned by all and despised by the people."
             }
           , { first: "All who see me laugh me to scorn; &#42; "
             , second: "they curl their lips and wag their heads, saying,"
             }
           , { first: "“He trusted in the Lord; let him deliver him; &#42; "
             , second: "let him rescue him, if he delights in him.”"
             }
           , { first: "Yet you are he who took me out of the womb, &#42; "
             , second: "and kept me safe upon my mother’s breast."
             }
           , { first: "I have been entrusted to you ever since I was born; &#42; "
             , second: "you were my God when I was still in my mother’s womb."
             }
           , { first: "Be not far from me, for trouble is near, &#42; "
             , second: "and there is none to help."
             }
           , { first: "Many young bulls encircle me; &#42; "
             , second: "strong bulls of Bashan surround me."
             }
           , { first: "They open wide their jaws at me, &#42; "
             , second: "like a ravening and a roaring lion."
             }
           , { first: "I am poured out like water; all my bones are out of joint; &#42; "
             , second: "my heart within my breast is melting wax."
             }
           , { first: "My mouth is dried out like a pot-sherd; my tongue sticks to the roof of my mouth; &#42; "
             , second: "and you have laid me in the dust of the grave."
             }
           , { first: "Packs of dogs close me in, and gangs of evildoers circle around me; &#42; "
             , second: "they pierce my hands and my feet; I can count all my bones."
             }
           , { first: "They stare and gloat over me; &#42; "
             , second: "they divide my garments among them; they cast lots for my clothing."
             }
           , { first: "Be not far away, O Lord; &#42; "
             , second: "you are my strength; hasten to help me."
             }
           , { first: "Save me from the sword, &#42; "
             , second: "my life from the power of the dog."
             }
           , { first: "Save me from the lion’s mouth, &#42; "
             , second: "my wretched body from the horns of wild bulls."
             }
           , { first: "I will declare your Name to my brethren; &#42; "
             , second: "in the midst of the congregation I will praise you."
             }
           , { first: "Praise the Lord, you that fear him; &#42; "
             , second: "stand in awe of him, O offspring of Israel; all you of Jacob’s line, give glory."
             }
           , { first: "For he does not despise nor abhor the poor in their poverty; neither does he hide his face from them; &#42; "
             , second: "but when they cry to him he hears them."
             }
           , { first: "My praise is of him in the great assembly; &#42; "
             , second: "I will perform my vows in the presence of those who worship him."
             }
           , { first: "The poor shall eat and be satisfied, and those who seek the Lord shall praise him: &#42; "
             , second: "“May your heart live for ever!”"
             }
           , { first: "All the ends of the earth shall remember and turn to the Lord, &#42; "
             , second: "and all the families of the nations shall bow before him."
             }
           , { first: "For kingship belongs to the Lord; &#42; "
             , second: "he rules over the nations."
             }
           , { first: "To him alone all who sleep in the earth bow down in worship; &#42; "
             , second: "all who go down to the dust fall before him."
             }
           , { first: "My soul shall live for him; my descendants shall serve him; &#42; "
             , second: "they shall be known as the Lord’s for ever."
             }
           , { first: "They shall come and make known to a people yet unborn &#42; "
             , second: "the saving deeds that he has done."
             }
           ]
    }
  , 23:
    { name: "Psalm 23."
    , title: "Dominus regit me"
    , vss: [ { first: "The Lord is my shepherd; &#42; "
             , second: "I shall not be in want."
             }
           , { first: "He makes me lie down in green pastures &#42; "
             , second: "and leads me beside still waters."
             }
           , { first: "He revives my soul &#42; "
             , second: "and guides me along right pathways for his Name’s sake."
             }
           , { first: "Though I walk through the valley of the shadow of death, I shall fear no evil; &#42; "
             , second: "for you are with me; your rod and your staff, they comfort me."
             }
           , { first: "You spread a table before me in the presence of those who trouble me; &#42; "
             , second: "you have anointed my head with oil, and my cup is running over."
             }
           , { first: "Surely your goodness and mercy shall follow me all the days of my life, &#42; "
             , second: "and I will dwell in the house of the Lord for ever."
             }
           ]
    }
  , 24:
    { name: "Psalm 24."
    , title: "Domini est terra"
    , vss: [ { first: "The earth is the Lord’s and all that is in it, &#42; "
             , second: "the world and all who dwell therein."
             }
           , { first: "For it is he who founded it upon the seas &#42; "
             , second: "and made it firm upon the rivers of the deep."
             }
           , { first: "“Who can ascend the hill of the Lord? &#42; "
             , second: "and who can stand in his holy place?”"
             }
           , { first: "“Those who have clean hands and a pure heart, &#42; "
             , second: "who have not pledged themselves to falsehood, nor sworn by what is a fraud."
             }
           , { first: "They shall receive a blessing from the Lord &#42; "
             , second: "and a just reward from the God of their salvation.”"
             }
           , { first: "Such is the generation of those who seek him, &#42; "
             , second: "of those who seek your face, O God of Jacob."
             }
           , { first: "Lift up your heads, O gates; lift them high, O everlasting doors; &#42; "
             , second: "and the King of glory shall come in."
             }
           , { first: "“Who is this King of glory?” &#42; "
             , second: "“The Lord, strong and mighty, the Lord, mighty in battle.”"
             }
           , { first: "Lift up your heads, O gates; lift them high, O everlasting doors; &#42; "
             , second: "and the King of glory shall come in."
             }
           , { first: "“Who is he, this King of glory?” &#42; "
             , second: "“The Lord of hosts, he is the King of glory.”"
             }
           ]
    }
  , 25:
    { name: "Psalm 25."
    , title: "Ad te, Domine, levavi"
    , vss: [ { first: "To you, O Lord, I lift up my soul; my God, I put my trust in you; &#42; "
             , second: "let me not be humiliated, nor let my enemies triumph over me."
             }
           , { first: "Let none who look to you be put to shame; &#42; "
             , second: "let the treacherous be disappointed in their schemes."
             }
           , { first: "Show me your ways, O Lord, &#42; "
             , second: "and teach me your paths."
             }
           , { first: "Lead me in your truth and teach me, &#42; "
             , second: "for you are the God of my salvation; in you have I trusted all the day long."
             }
           , { first: "Remember, O Lord, your compassion and love, &#42; "
             , second: "for they are from everlasting."
             }
           , { first: "Remember not the sins of my youth and my transgressions; &#42; "
             , second: "remember me according to your love and for the sake of your goodness, O Lord."
             }
           , { first: "Gracious and upright is the Lord; &#42; "
             , second: "therefore he teaches sinners in his way."
             }
           , { first: "He guides the humble in doing right &#42; "
             , second: "and teaches his way to the lowly."
             }
           , { first: "All the paths of the Lord are love and faithfulness &#42; "
             , second: "to those who keep his covenant and his testimonies."
             }
           , { first: "For your Name’s sake, O Lord, &#42; "
             , second: "forgive my sin, for it is great."
             }
           , { first: "Who are they who fear the Lord? &#42; "
             , second: "he will teach them the way that they should choose."
             }
           , { first: "They shall dwell in prosperity, &#42; "
             , second: "and their offspring shall inherit the land."
             }
           , { first: "The Lord is a friend to those who fear him &#42; "
             , second: "and will show them his covenant."
             }
           , { first: "My eyes are ever looking to the Lord, &#42; "
             , second: "for he shall pluck my feet out of the net."
             }
           , { first: "Turn to me and have pity on me, &#42; "
             , second: "for I am left alone and in misery."
             }
           , { first: "The sorrows of my heart have increased; &#42; "
             , second: "bring me out of my troubles."
             }
           , { first: "Look upon my adversity and misery &#42; "
             , second: "and forgive me all my sin."
             }
           , { first: "Look upon my enemies, for they are many, &#42; "
             , second: "and they bear a violent hatred against me."
             }
           , { first: "Protect my life and deliver me; &#42; "
             , second: "let me not be put to shame, for I have trusted in you."
             }
           , { first: "Let integrity and uprightness preserve me, &#42; "
             , second: "for my hope has been in you."
             }
           , { first: "Deliver Israel, O God, &#42; "
             , second: "out of all his troubles."
             }
           ]
    }
  , 26:
    { name: "Psalm 26."
    , title: "Judica me, Domine"
    , vss: [ { first: "Give judgment for me, O Lord, for I have lived with integrity; &#42; "
             , second: "I have trusted in the Lord and have not faltered."
             }
           , { first: "Test me, O Lord, and try me; &#42; "
             , second: "examine my heart and my mind."
             }
           , { first: "For your love is before my eyes; &#42; "
             , second: "I have walked faithfully with you."
             }
           , { first: "I have not sat with the worthless, &#42; "
             , second: "nor do I consort with the deceitful."
             }
           , { first: "I have hated the company of evildoers; &#42; "
             , second: "I will not sit down with the wicked."
             }
           , { first: "I will wash my hands in innocence, O Lord, &#42; "
             , second: "that I may go in procession round your altar,"
             }
           , { first: "Singing aloud a song of thanksgiving &#42; "
             , second: "and recounting all your wonderful deeds."
             }
           , { first: "Lord, I love the house in which you dwell &#42; "
             , second: "and the place where your glory abides."
             }
           , { first: "Do not sweep me away with sinners, &#42; "
             , second: "nor my life with those who thirst for blood,"
             }
           , { first: "Whose hands are full of evil plots, &#42; "
             , second: "and their right hand full of bribes."
             }
           , { first: "As for me, I will live with integrity; &#42; "
             , second: "redeem me, O Lord, and have pity on me."
             }
           , { first: "My foot stands on level ground; &#42; "
             , second: "in the full assembly I will bless the Lord."
             }
           ]
    }
  , 27:
    { name: "Psalm 27."
    , title: "Dominus illuminatio"
    , vss: [ { first: "The Lord is my light and my salvation; whom then shall I fear? &#42; "
             , second: "the Lord is the strength of my life; of whom then shall I be afraid?"
             }
           , { first: "When evildoers came upon me to eat up my flesh, &#42; "
             , second: "it was they, my foes and my adversaries, who stumbled and fell."
             }
           , { first: "Though an army should encamp against me, &#42; "
             , second: "yet my heart shall not be afraid;"
             }
           , { first: "And though war should rise up against me, &#42; "
             , second: "yet will I put my trust in him."
             }
           , { first: "One thing have I asked of the Lord; one thing I seek; &#42; "
             , second: "that I may dwell in the house of the Lord all the days of my life;"
             }
           , { first: "To behold the fair beauty of the Lord &#42; "
             , second: "and to seek him in his temple."
             }
           , { first: "For in the day of trouble he shall keep me safe in his shelter; &#42; "
             , second: "he shall hide me in the secrecy of his dwelling and set me high upon a rock."
             }
           , { first: "Even now he lifts up my head &#42; "
             , second: "above my enemies round about me."
             }
           , { first: "Therefore I will offer in his dwelling an oblation with sounds of great gladness; &#42; "
             , second: "I will sing and make music to the Lord."
             }
           , { first: "Hearken to my voice, O Lord, when I call; &#42; "
             , second: "have mercy on me and answer me."
             }
           , { first: "You speak in my heart and say, “Seek my face.” &#42; "
             , second: "Your face, Lord, will I seek."
             }
           , { first: "Hide not your face from me, &#42; "
             , second: "nor turn away your servant in displeasure."
             }
           , { first: "You have been my helper; cast me not away; &#42; "
             , second: "do not forsake me, O God of my salvation."
             }
           , { first: "Though my father and my mother forsake me, &#42; "
             , second: "the Lord will sustain me."
             }
           , { first: "Show me your way, O Lord; &#42; "
             , second: "lead me on a level path, because of my enemies."
             }
           , { first: "Deliver me not into the hand of my adversaries, &#42; "
             , second: "for false witnesses have risen up against me, and also those who speak malice."
             }
           , { first: "What if I had not believed that I should see the goodness of the Lord &#42; "
             , second: "in the land of the living!"
             }
           , { first: "O tarry and await the Lord’s pleasure; be strong, and he shall comfort your heart; &#42; "
             , second: "wait patiently for the Lord."
             }
           ]
    }
  , 28:
    { name: "Psalm 28."
    , title: "Ad te, Domine"
    , vss: [ { first: "O Lord, I call to you; my Rock, do not be deaf to my cry; &#42; "
             , second: "lest, if you do not hear me, I become like those who go down to the Pit."
             }
           , { first: "Hear the voice of my prayer when I cry out to you, &#42; "
             , second: "when I lift up my hands to your holy of holies."
             }
           , { first: "Do not snatch me away with the wicked or with the evildoers, &#42; "
             , second: "who speak peaceably with their neighbors, while strife is in their hearts."
             }
           , { first: "Repay them according to their deeds, &#42; "
             , second: "and according to the wickedness of their actions."
             }
           , { first: "According to the work of their hands repay them, &#42; "
             , second: "and give them their just deserts."
             }
           , { first: "They have no understanding of the Lord’s doings, nor of the works of his hands; &#42; "
             , second: "therefore he will break them down and not build them up."
             }
           , { first: "Blessed is the Lord! &#42; "
             , second: "for he has heard the voice of my prayer."
             }
           , { first: "The Lord is my strength and my shield; &#42; "
             , second: "my heart trusts in him, and I have been helped;"
             }
           , { first: "Therefore my heart dances for joy, &#42; "
             , second: "and in my song will I praise him."
             }
           , { first: "The Lord is the strength of his people, &#42; "
             , second: "a safe refuge for his anointed."
             }
           , { first: "Save your people and bless your inheritance; &#42; "
             , second: "shepherd them and carry them for ever."
             }
           ]
    }
  , 29:
    { name: "Psalm 29."
    , title: "Afferte Domino"
    , vss: [ { first: "Ascribe to the Lord, you gods, &#42; "
             , second: "ascribe to the Lord glory and strength."
             }
           , { first: "Ascribe to the Lord the glory due his Name; &#42; "
             , second: "worship the Lord in the beauty of holiness."
             }
           , { first: "The voice of the Lord is upon the waters; the God of glory thunders; &#42; "
             , second: "the Lord is upon the mighty waters."
             }
           , { first: "The voice of the Lord is a powerful voice; &#42; "
             , second: "the voice of the Lord is a voice of splendor."
             }
           , { first: "The voice of the Lord breaks the cedar trees; &#42; "
             , second: "the Lord breaks the cedars of Lebanon;"
             }
           , { first: "He makes Lebanon skip like a calf, &#42; "
             , second: "and Mount Hermon like a young wild ox."
             }
           , { first: "The voice of the Lord splits the flames of fire; the voice of the Lord shakes the wilderness; &#42; "
             , second: "the Lord shakes the wilderness of Kadesh."
             }
           , { first: "The voice of the Lord makes the oak trees writhe &#42; "
             , second: "and strips the forests bare."
             }
           , { first: "And in the temple of the Lord &#42; "
             , second: "all are crying, “Glory!”"
             }
           , { first: "The Lord sits enthroned above the flood; &#42; "
             , second: "the Lord sits enthroned as King for evermore."
             }
           , { first: "The Lord shall give strength to his people; &#42; "
             , second: "the Lord shall give his people the blessing of peace."
             }
           ]
    }
  , 30:
    { name: "Psalm 30."
    , title: "Exaltabo te, Domine"
    , vss: [ { first: "I will exalt you, O Lord, because you have lifted me up &#42; "
             , second: "and have not let my enemies triumph over me."
             }
           , { first: "O Lord my God, I cried out to you, &#42; "
             , second: "and you restored me to health."
             }
           , { first: "You brought me up, O Lord, from the dead; &#42; "
             , second: "you restored my life as I was going down to the grave."
             }
           , { first: "Sing to the Lord, you servants of his; &#42; "
             , second: "give thanks for the remembrance of his holiness."
             }
           , { first: "For his wrath endures but the twinkling of an eye, &#42; "
             , second: "his favor for a lifetime."
             }
           , { first: "Weeping may spend the night, &#42; "
             , second: "but joy comes in the morning."
             }
           , { first: "While I felt secure, I said, “I shall never be disturbed. &#42; "
             , second: "You, Lord, with your favor, made me as strong as the mountains.”"
             }
           , { first: "Then you hid your face, &#42; "
             , second: "and I was filled with fear."
             }
           , { first: "I cried to you, O Lord; &#42; "
             , second: "I pleaded with the Lord, saying,"
             }
           , { first: "“What profit is there in my blood, if I go down to the Pit? &#42; "
             , second: "will the dust praise you or declare your faithfulness?"
             }
           , { first: "Hear, O Lord, and have mercy upon me; &#42; "
             , second: "O Lord, be my helper.”"
             }
           , { first: "You have turned my wailing into dancing; &#42; "
             , second: "you have put off my sack-cloth and clothed me with joy."
             }
           , { first: "Therefore my heart sings to you without ceasing; &#42; "
             , second: "O Lord my God, I will give you thanks for ever."
             }
           ]
    }
  , 31:
    { name: "Psalm 31."
    , title: "In te, Domine, speravi"
    , vss: [ { first: "In you, O Lord, have I taken refuge; let me never be put to shame; &#42; "
             , second: "deliver me in your righteousness."
             }
           , { first: "Incline your ear to me; &#42; "
             , second: "make haste to deliver me."
             }
           , { first: "Be my strong rock, a castle to keep me safe, for you are my crag and my stronghold; &#42; "
             , second: "for the sake of your Name, lead me and guide me."
             }
           , { first: "Take me out of the net that they have secretly set for me, &#42; "
             , second: "for you are my tower of strength."
             }
           , { first: "Into your hands I commend my spirit, &#42; "
             , second: "for you have redeemed me, O Lord, O God of truth."
             }
           , { first: "I hate those who cling to worthless idols, &#42; "
             , second: "and I put my trust in the Lord."
             }
           , { first: "I will rejoice and be glad because of your mercy; &#42; "
             , second: "for you have seen my affliction; you know my distress."
             }
           , { first: "You have not shut me up in the power of the enemy; &#42; "
             , second: "you have set my feet in an open place."
             }
           , { first: "Have mercy on me, O Lord, for I am in trouble; &#42; "
             , second: "my eye is consumed with sorrow, and also my throat and my belly."
             }
           , { first: "For my life is wasted with grief, and my years with sighing; &#42; "
             , second: "my strength fails me because of affliction, and my bones are consumed."
             }
           , { first: "I have become a reproach to all my enemies and even to my neighbors, a dismay to those of my acquaintance; &#42; "
             , second: "when they see me in the street they avoid me."
             }
           , { first: "I am forgotten like a dead man, out of mind; &#42; "
             , second: "I am as useless as a broken pot."
             }
           , { first: "For I have heard the whispering of the crowd; fear is all around; &#42; "
             , second: "they put their heads together against me; they plot to take my life."
             }
           , { first: "But as for me, I have trusted in you, O Lord. &#42; "
             , second: "I have said, “You are my God."
             }
           , { first: "My times are in your hand; &#42; "
             , second: "rescue me from the hand of my enemies, and from those who persecute me."
             }
           , { first: "Make your face to shine upon your servant, &#42; "
             , second: "and in your loving-kindness save me.”"
             }
           , { first: "Lord, let me not be ashamed for having called upon you; &#42; "
             , second: "rather, let the wicked be put to shame; let them be silent in the grave."
             }
           , { first: "Let the lying lips be silenced which speak against the righteous, &#42; "
             , second: "haughtily, disdainfully, and with contempt."
             }
           , { first: "How great is your goodness, O Lord! which you have laid up for those who fear you; &#42; "
             , second: "which you have done in the sight of all for those who put their trust in you."
             }
           , { first: "You hide them in the covert of your presence from those who slander them; &#42; "
             , second: "you keep them in your shelter from the strife of tongues."
             }
           , { first: "Blessed be the Lord! &#42; "
             , second: "for he has shown me the wonders of his love in a besieged city."
             }
           , { first: "Yet I said in my alarm, “I have been cut off from the sight of your eyes.” &#42; "
             , second: "Nevertheless, you heard the sound of my entreaty when I cried out to you."
             }
           , { first: "Love the Lord, all you who worship him; &#42; "
             , second: "the Lord protects the faithful, but repays to the full those who act haughtily."
             }
           , { first: "Be strong and let your heart take courage, &#42; "
             , second: "all you who wait for the Lord."
             }
           ]
    }
  , 32:
    { name: "Psalm 32."
    , title: "Beati quorum"
    , vss: [ { first: "Happy are they whose transgressions are forgiven, &#42; "
             , second: "and whose sin is put away!"
             }
           , { first: "Happy are they to whom the Lord imputes no guilt, &#42; "
             , second: "and in whose spirit there is no guile!"
             }
           , { first: "While I held my tongue, my bones withered away, &#42; "
             , second: "because of my groaning all day long."
             }
           , { first: "For your hand was heavy upon me day and night; &#42; "
             , second: "my moisture was dried up as in the heat of summer."
             }
           , { first: "Then I acknowledged my sin to you, &#42; "
             , second: "and did not conceal my guilt."
             }
           , { first: "I said, “I will confess my transgressions to the Lord.” &#42; "
             , second: "Then you forgave me the guilt of my sin."
             }
           , { first: "Therefore all the faithful will make their prayers to you in time of trouble; &#42; "
             , second: "when the great waters overflow, they shall not reach them."
             }
           , { first: "You are my hiding-place; you preserve me from trouble; &#42; "
             , second: "you surround me with shouts of deliverance."
             }
           , { first: "“I will instruct you and teach you in the way that you should go; &#42; "
             , second: "I will guide you with my eye."
             }
           , { first: "Do not be like horse or mule, which have no understanding; &#42; "
             , second: "who must be fitted with bit and bridle, or else they will not stay near you.”"
             }
           , { first: "Great are the tribulations of the wicked; &#42; "
             , second: "but mercy embraces those who trust in the Lord."
             }
           , { first: "Be glad, you righteous, and rejoice in the Lord; &#42; "
             , second: "shout for joy, all who are true of heart."
             }
           ]
    }
  , 33:
    { name: "Psalm 33."
    , title: "Exultate, justi"
    , vss: [ { first: "Rejoice in the Lord, you righteous; &#42; "
             , second: "it is good for the just to sing praises."
             }
           , { first: "Praise the Lord with the harp; &#42; "
             , second: "play to him upon the psaltery and lyre."
             }
           , { first: "Sing for him a new song; &#42; "
             , second: "sound a fanfare with all your skill upon the trumpet."
             }
           , { first: "For the word of the Lord is right, &#42; "
             , second: "and all his works are sure."
             }
           , { first: "He loves righteousness and justice; &#42; "
             , second: "the loving-kindness of the Lord fills the whole earth."
             }
           , { first: "By the word of the Lord were the heavens made, &#42; "
             , second: "by the breath of his mouth all the heavenly hosts."
             }
           , { first: "He gathers up the waters of the ocean as in a water-skin &#42; "
             , second: "and stores up the depths of the sea."
             }
           , { first: "Let all the earth fear the Lord; &#42; "
             , second: "let all who dwell in the world stand in awe of him."
             }
           , { first: "For he spoke, and it came to pass; &#42; "
             , second: "he commanded, and it stood fast."
             }
           , { first: "The Lord brings the will of the nations to naught; &#42; "
             , second: "he thwarts the designs of the peoples."
             }
           , { first: "But the Lord’s will stands fast for ever, &#42; "
             , second: "and the designs of his heart from age to age."
             }
           , { first: "Happy is the nation whose God is the Lord! &#42; "
             , second: "happy the people he has chosen to be his own!"
             }
           , { first: "The Lord looks down from heaven, &#42; "
             , second: "and beholds all the people in the world."
             }
           , { first: "From where he sits enthroned he turns his gaze &#42; "
             , second: "on all who dwell on the earth."
             }
           , { first: "He fashions all the hearts of them &#42; "
             , second: "and understands all their works."
             }
           , { first: "There is no king that can be saved by a mighty army; &#42; "
             , second: "a strong man is not delivered by his great strength."
             }
           , { first: "The horse is a vain hope for deliverance; &#42; "
             , second: "for all its strength it cannot save."
             }
           , { first: "Behold, the eye of the Lord is upon those who fear him, &#42; "
             , second: "on those who wait upon his love,"
             }
           , { first: "To pluck their lives from death, &#42; "
             , second: "and to feed them in time of famine."
             }
           , { first: "Our soul waits for the Lord; &#42; "
             , second: "he is our help and our shield."
             }
           , { first: "Indeed, our heart rejoices in him, &#42; "
             , second: "for in his holy Name we put our trust."
             }
           , { first: "Let your loving-kindness, O Lord, be upon us, &#42; "
             , second: "as we have put our trust in you."
             }
           ]
    }
  , 34:
    { name: "Psalm 34."
    , title: "Benedicam Dominum"
    , vss: [ { first: "I will bless the Lord at all times; &#42; "
             , second: "his praise shall ever be in my mouth."
               }
           , { first: "I will glory in the Lord; &#42; "
             , second: "let the humble hear and rejoice."
               }
           , { first: "Proclaim with me the greatness of the Lord; &#42; "
             , second: "let us exalt his Name together."
               }
           , { first: "I sought the Lord, and he answered me &#42; "
             , second: "and delivered me out of all my terror."
               }
           , { first: "Look upon him and be radiant, &#42; "
             , second: "and let not your faces be ashamed."
               }
           , { first: "I called in my affliction and the Lord heard me &#42; "
             , second: "and saved me from all my troubles."
               }
           , { first: "The angel of the Lord encompasses those who fear him, &#42; "
             , second: "and he will deliver them."
               }
           , { first: "Taste and see that the Lord is good; &#42; "
             , second: "happy are they who trust in him!"
               }
           , { first: "Fear the Lord, you that are his saints, &#42; "
             , second: "for those who fear him lack nothing."
               }
           , { first: "The young lions lack and suffer hunger, &#42; "
             , second: "but those who seek the Lord lack nothing that is good."
               }
           , { first: "Come, children, and listen to me; &#42; "
             , second: "I will teach you the fear of the Lord."
               }
           , { first: "Who among you loves life &#42; "
             , second: "and desires long life to enjoy prosperity?"
               }
           , { first: "Keep your tongue from evil-speaking &#42; "
             , second: "and your lips from lying words."
               }
           , { first: "Turn from evil and do good; &#42; "
             , second: "seek peace and pursue it."
               }
           , { first: "The eyes of the Lord are upon the righteous, &#42; "
             , second: "and his ears are open to their cry."
               }
           , { first: "The face of the Lord is against those who do evil, &#42; "
             , second: "to root out the remembrance of them from the earth."
               }
           , { first: "The righteous cry, and the Lord hears them &#42; "
             , second: "and delivers them from all their troubles."
               }
           , { first: "The Lord is near to the brokenhearted &#42; "
             , second: "and will save those whose spirits are crushed."
               }
           , { first: "Many are the troubles of the righteous, &#42; "
             , second: "but the Lord will deliver him out of them all."
               }
           , { first: "He will keep safe all his bones; &#42; "
             , second: "not one of them shall be broken."
               }
           , { first: "Evil shall slay the wicked, &#42; "
             , second: "and those who hate the righteous will be punished."
               }
           , { first: "The Lord ransoms the life of his servants, &#42; "
             , second: "and none will be punished who trust in him."
               }
             ]
    }
  , 35:
    { name: "Psalm 35."
    , title: "Judica, Domine"
    , vss: [ { first: "Fight those who fight me, O Lord; &#42; "
             , second: "attack those who are attacking me."
               }
           , { first: "Take up shield and armor &#42; "
             , second: "and rise up to help me."
               }
           , { first: "Draw the sword and bar the way against those who pursue me; &#42; "
             , second: "say to my soul, “I am your salvation.”"
               }
           , { first: "Let those who seek after my life be shamed and humbled; &#42; "
             , second: "let those who plot my ruin fall back and be dismayed."
               }
           , { first: "Let them be like chaff before the wind, &#42; "
             , second: "and let the angel of the Lord drive them away."
               }
           , { first: "Let their way be dark and slippery, &#42; "
             , second: "and let the angel of the Lord pursue them."
               }
           , { first: "For they have secretly spread a net for me without a cause; &#42; "
             , second: "without a cause they have dug a pit to take me alive."
               }
           , { first: "Let ruin come upon them unawares; &#42; "
             , second: "let them be caught in the net they hid; let them fall into the pit they dug."
               }
           , { first: "Then I will be joyful in the Lord; &#42; "
             , second: "I will glory in his victory."
               }
           , { first: "My very bones will say, “Lord, who is like you? &#42; "
             , second: "You deliver the poor from those who are too strong for them, the poor and needy from those who rob them.”"
               }
           , { first: "Malicious witnesses rise up against me; &#42; "
             , second: "they charge me with matters I know nothing about."
               }
           , { first: "They pay me evil in exchange for good; &#42; "
             , second: "my soul is full of despair."
               }
           , { first: "But when they were sick I dressed in sack-cloth &#42; "
             , second: "and humbled myself by fasting;"
               }
           , { first: "I prayed with my whole heart, as one would for a friend or a brother; &#42; "
             , second: "I behaved like one who mourns for his mother, bowed down and grieving."
               }
           , { first: "But when I stumbled, they were glad and gathered together; they gathered against me; &#42; "
             , second: "strangers whom I did not know tore me to pieces and would not stop."
               }
           , { first: "They put me to the test and mocked me; &#42; "
             , second: "they gnashed at me with their teeth."
               }
           , { first: "O Lord, how long will you look on? &#42; "
             , second: "rescue me from the roaring beasts, and my life from the young lions."
               }
           , { first: "I will give you thanks in the great congregation; &#42; "
             , second: "I will praise you in the mighty throng."
               }
           , { first: "Do not let my treacherous foes rejoice over me, &#42; "
             , second: "nor let those who hate me without a cause wink at each other."
               }
           , { first: "For they do not plan for peace, &#42; "
             , second: "but invent deceitful schemes against the quiet in the land."
               }
           , { first: "They opened their mouths at me and said, &#42; "
             , second: "“Aha! we saw it with our own eyes.”"
               }
           , { first: "You saw it, O Lord; do not be silent; &#42; "
             , second: "O Lord, be not far from me."
               }
           , { first: "Awake, arise, to my cause! &#42; "
             , second: "to my defense, my God and my Lord!"
               }
           , { first: "Give me justice, O Lord my God, according to your righteousness; &#42; "
             , second: "do not let them triumph over me."
               }
           , { first: "Do not let them say in their hearts, “Aha! just what we want!” &#42; "
             , second: "Do not let them say, “We have swallowed him up.”"
               }
           , { first: "Let all who rejoice at my ruin be ashamed and disgraced; &#42; "
             , second: "let those who boast against me be clothed with dismay and shame."
               }
           , { first: "Let those who favor my cause sing out with joy and be glad; &#42; "
             , second: "let them say always, “Great is the Lord, who desires the prosperity of his servant.”"
               }
           , { first: "And my tongue shall be talking of your righteousness &#42; "
             , second: "and of your praise all the day long."
               }
             ]
    }
  , 36:
    { name: "Psalm 36."
    , title: "Dixit injustus"
    , vss: [ { first: "There is a voice of rebellion deep in the heart of the wicked; &#42; "
             , second: "there is no fear of God before his eyes."
               }
           , { first: "He flatters himself in his own eyes &#42; "
             , second: "that his hateful sin will not be found out."
               }
           , { first: "The words of his mouth are wicked and deceitful; &#42; "
             , second: "he has left off acting wisely and doing good."
               }
           , { first: "He thinks up wickedness upon his bed and has set himself in no good way; &#42; "
             , second: "he does not abhor that which is evil."
               }
           , { first: "Your love, O Lord, reaches to the heavens, &#42; "
             , second: "and your faithfulness to the clouds."
               }
           , { first: "Your righteousness is like the strong mountains, your justice like the great deep; &#42; "
             , second: "you save both man and beast, O Lord."
               }
           , { first: "How priceless is your love, O God! &#42; "
             , second: "your people take refuge under the shadow of your wings."
               }
           , { first: "They feast upon the abundance of your house; &#42; "
             , second: "you give them drink from the river of your delights."
               }
           , { first: "For with you is the well of life, &#42; "
             , second: "and in your light we see light."
               }
           , { first: "Continue your loving-kindness to those who know you, &#42; "
             , second: "and your favor to those who are true of heart."
               }
           , { first: "Let not the foot of the proud come near me, &#42; "
             , second: "nor the hand of the wicked push me aside."
               }
           , { first: "See how they are fallen, those who work wickedness! &#42; "
             , second: "they are cast down and shall not be able to rise."
               }
             ]
    }
  , 37:
    { name: "Psalm 37."
    , title: ""
    , vss: [ { title: "Part I Noli æmulari"
             , first: "Do not fret yourself because of evildoers; &#42; "
             , second: "do not be jealous of those who do wrong."
               }
           , { first: "For they shall soon wither like the grass, &#42; "
             , second: "and like the green grass fade away."
               }
           , { first: "Put your trust in the Lord and do good; &#42; "
             , second: "dwell in the land and feed on its riches."
               }
           , { first: "Take delight in the Lord, &#42; "
             , second: "and he shall give you your heart’s desire."
               }
           , { first: "Commit your way to the Lord and put your trust in him, &#42; "
             , second: "and he will bring it to pass."
               }
           , { first: "He will make your righteousness as clear as the light &#42; "
             , second: "and your just dealing as the noonday."
               }
           , { first: "Be still before the Lord &#42; "
             , second: "and wait patiently for him."
               }
           , { first: "Do not fret yourself over the one who prospers, &#42; "
             , second: "the one who succeeds in evil schemes."
               }
           , { first: "Refrain from anger, leave rage alone; &#42; "
             , second: "do not fret yourself; it leads only to evil."
               }
           , { first: "For evildoers shall be cut off, &#42; "
             , second: "but those who wait upon the Lord shall possess the land."
               }
           , { first: "In a little while the wicked shall be no more; &#42; "
             , second: "you shall search out their place, but they will not be there."
               }
           , { first: "But the lowly shall possess the land; &#42; "
             , second: "they will delight in abundance of peace."
               }
           , { first: "The wicked plot against the righteous &#42; "
             , second: "and gnash at them with their teeth."
               }
           , { first: "The Lord laughs at the wicked, &#42; "
             , second: "because he sees that their day will come."
               }
           , { first: "The wicked draw their sword and bend their bow to strike down the poor and needy, &#42; "
             , second: "to slaughter those who are upright in their ways."
               }
           , { first: "Their sword shall go through their own heart, &#42; "
             , second: "and their bow shall be broken."
               }
           , { first: "The little that the righteous has &#42; "
             , second: "is better than great riches of the wicked."
               }
           , { first: "For the power of the wicked shall be broken, &#42; "
             , second: "but the Lord upholds the righteous."
               }
           , { title: "Part II Novit Dominus"
             , first: "The Lord cares for the lives of the godly, &#42; "
             , second: "and their inheritance shall last for ever."
               }
           , { first: "They shall not be ashamed in bad times, &#42; "
             , second: "and in days of famine they shall have enough."
               }
           , { first: "As for the wicked, they shall perish, &#42; "
             , second: "and the enemies of the Lord, like the glory of the meadows, shall vanish; they shall vanish like smoke."
               }
           , { first: "The wicked borrow and do not repay, &#42; "
             , second: "but the righteous are generous in giving."
               }
           , { first: "Those who are blessed by God shall possess the land, &#42; "
             , second: "but those who are cursed by him shall be destroyed."
               }
           , { first: "Our steps are directed by the Lord; &#42; "
             , second: "he strengthens those in whose way he delights."
               }
           , { first: "If they stumble, they shall not fall headlong, &#42; "
             , second: "for the Lord holds them by the hand."
               }
           , { first: "I have been young and now I am old, &#42; "
             , second: "but never have I seen the righteous forsaken, or their children begging bread."
               }
           , { first: "The righteous are always generous in their lending, &#42; "
             , second: "and their children shall be a blessing."
               }
           , { first: "Turn from evil, and do good, &#42; "
             , second: "and dwell in the land for ever."
               }
           , { first: "For the Lord loves justice; &#42; "
             , second: "he does not forsake his faithful ones."
               }
           , { first: "They shall be kept safe for ever, &#42; "
             , second: "but the offspring of the wicked shall be destroyed."
               }
           , { first: "The righteous shall possess the land &#42; "
             , second: "and dwell in it for ever."
               }
           , { first: "The mouth of the righteous utters wisdom, &#42; "
             , second: "and their tongue speaks what is right."
               }
           , { first: "The law of their God is in their heart, &#42; "
             , second: "and their footsteps shall not falter."
               }
           , { first: "The wicked spy on the righteous &#42; "
             , second: "and seek occasion to kill them."
               }
           , { first: "The Lord will not abandon them to their hand, &#42; "
             , second: "nor let them be found guilty when brought to trial."
               }
           , { first: "Wait upon the Lord and keep his way; &#42; "
             , second: "he will raise you up to possess the land, and when the wicked are cut off, you will see it."
               }
           , { first: "I have seen the wicked in their arrogance, &#42; "
             , second: "flourishing like a tree in full leaf."
               }
           , { first: "I went by, and behold, they were not there; &#42; "
             , second: "I searched for them, but they could not be found."
               }
           , { first: "Mark those who are honest; observe the upright; &#42; "
             , second: "for there is a future for the peaceable."
               }
           , { first: "Transgressors shall be destroyed, one and all; &#42; "
             , second: "the future of the wicked is cut off."
               }
           , { first: "But the deliverance of the righteous comes from the Lord; &#42; "
             , second: "he is their stronghold in time of trouble."
               }
           , { first: "The Lord will help them and rescue them; &#42; "
             , second: "he will rescue them from the wicked and deliver them, because they seek refuge in him."
               }
             ]
    }
  , 38:
    { name: "Psalm 38."
    , title: "Domine, ne in furore"
    , vss: [ { first: "O Lord, do not rebuke me in your anger; &#42; "
             , second: "do not punish me in your wrath."
               }
           , { first: "For your arrows have already pierced me, &#42; "
             , second: "and your hand presses hard upon me."
               }
           , { first: "There is no health in my flesh, because of your indignation; &#42; "
             , second: "there is no soundness in my body, because of my sin."
               }
           , { first: "For my iniquities overwhelm me; &#42; "
             , second: "like a heavy burden they are too much for me to bear."
               }
           , { first: "My wounds stink and fester &#42; "
             , second: "by reason of my foolishness."
               }
           , { first: "I am utterly bowed down and prostrate; &#42; "
             , second: "I go about in mourning all the day long."
               }
           , { first: "My loins are filled with searing pain; &#42; "
             , second: "there is no health in my body."
               }
           , { first: "I am utterly numb and crushed; &#42; "
             , second: "I wail, because of the groaning of my heart."
               }
           , { first: "O Lord, you know all my desires, &#42; "
             , second: "and my sighing is not hidden from you."
               }
           , { first: "My heart is pounding, my strength has failed me, &#42; "
             , second: "and the brightness of my eyes is gone from me."
               }
           , { first: "My friends and companions draw back from my affliction; &#42; "
             , second: "my neighbors stand afar off."
               }
           , { first: "Those who seek after my life lay snares for me; &#42; "
             , second: "those who strive to hurt me speak of my ruin and plot treachery all the day long."
               }
           , { first: "But I am like the deaf who do not hear, &#42; "
             , second: "like those who are mute and do not open their mouth."
               }
           , { first: "I have become like one who does not hear &#42; "
             , second: "and from whose mouth comes no defense."
               }
           , { first: "For in you, O Lord, have I fixed my hope; &#42; "
             , second: "you will answer me, O Lord my God."
               }
           , { first: "For I said, “Do not let them rejoice at my expense, &#42; "
             , second: "those who gloat over me when my foot slips.”"
               }
           , { first: "Truly, I am on the verge of falling, &#42; "
             , second: "and my pain is always with me."
               }
           , { first: "I will confess my iniquity &#42; "
             , second: "and be sorry for my sin."
               }
           , { first: "Those who are my enemies without cause are mighty, &#42; "
             , second: "and many in number are those who wrongfully hate me."
               }
           , { first: "Those who repay evil for good slander me, &#42; "
             , second: "because I follow the course that is right."
               }
           , { first: "O Lord, do not forsake me; &#42; "
             , second: "be not far from me, O my God."
               }
           , { first: "Make haste to help me, &#42; "
             , second: "O Lord of my salvation."
               }
             ]
    }
  , 39:
    { name: "Psalm 39."
    , title: "Dixi, Custodiam"
    , vss: [ { first: "I said, “I will keep watch upon my ways, &#42; "
             , second: "so that I do not offend with my tongue."
               }
           , { first: "I will put a muzzle on my mouth &#42; "
             , second: "while the wicked are in my presence.”"
               }
           , { first: "So I held my tongue and said nothing; &#42; "
             , second: "I refrained from rash words; but my pain became unbearable."
               }
           , { first: "My heart was hot within me; while I pondered, the fire burst into flame; &#42; "
             , second: "I spoke out with my tongue:"
               }
           , { first: "Lord, let me know my end and the number of my days, &#42; "
             , second: "so that I may know how short my life is."
               }
           , { first: "You have given me a mere handful of days, and my lifetime is as nothing in your sight; &#42; "
             , second: "truly, even those who stand erect are but a puff of wind."
               }
           , { first: "We walk about like a shadow, and in vain we are in turmoil; &#42; "
             , second: "we heap up riches and cannot tell who will gather them."
               }
           , { first: "And now, what is my hope? &#42; "
             , second: "O Lord, my hope is in you."
               }
           , { first: "Deliver me from all my transgressions &#42; "
             , second: "and do not make me the taunt of the fool."
               }
           , { first: "I fell silent and did not open my mouth, &#42; "
             , second: "for surely it was you that did it."
               }
           , { first: "Take your affliction from me; &#42; "
             , second: "I am worn down by the blows of your hand."
               }
           , { first: "With rebukes for sin you punish us; like a moth you eat away all that is dear to us; &#42; "
             , second: "truly, everyone is but a puff of wind."
               }
           , { first: "Hear my prayer, O Lord, and give ear to my cry; &#42; "
             , second: "hold not your peace at my tears."
               }
           , { first: "For I am but a sojourner with you, &#42; "
             , second: "a wayfarer, as all my forebears were."
               }
           , { first: "Turn your gaze from me, that I may be glad again, &#42; "
             , second: "before I go my way and am no more."
               }
             ]
    }
  , 40:
    { name: "Psalm 40."
    , title: "Expectans, expectavi"
    , vss: [ { first: "I waited patiently upon the Lord; &#42; "
             , second: "he stooped to me and heard my cry."
               }
           , { first: "He lifted me out of the desolate pit, out of the mire and clay;"
             , second: "he set my feet upon a high cliff and made my footing sure."
               }
           , { first: "He put a new song in my mouth, a song of praise to our God; &#42; "
             , second: "many shall see, and stand in awe, and put their trust in the Lord."
               }
           , { first: "Happy are they who trust in the Lord! &#42; "
             , second: "they do not resort to evil spirits or turn to false gods."
               }
           , { first: "Great things are they that you have done, O Lord my God! how great your wonders and your plans for us! &#42; "
             , second: "there is none who can be compared with you."
               }
           , { first: "Oh, that I could make them known and tell them! &#42; "
             , second: "but they are more than I can count."
               }
           , { first: "In sacrifice and offering you take no pleasure &#42; "
             , second: "(you have given me ears to hear you);"
               }
           , { first: "Burnt-offering and sin-offering you have not required, &#42; "
             , second: "and so I said, “Behold, I come."
               }
           , { first: "In the roll of the book it is written concerning me: &#42; "
             , second: "‘I love to do your will, O my God; your law is deep in my heart.’”"
               }
           , { first: "I proclaimed righteousness in the great congregation; &#42; "
             , second: "behold, I did not restrain my lips; and that, O Lord, you know."
               }
           , { first: "Your righteousness have I not hidden in my heart; I have spoken of your faithfulness and your deliverance; &#42; "
             , second: "I have not concealed your love and faithfulness from the great congregation."
               }
           , { first: "You are the Lord; do not withhold your compassion from me; &#42; "
             , second: "let your love and your faithfulness keep me safe for ever,"
               }
           , { first: "For innumerable troubles have crowded upon me; my sins have overtaken me, and I cannot see; &#42; "
             , second: "they are more in number than the hairs of my head, and my heart fails me."
               }
           , { first: "Be pleased, O Lord, to deliver me; &#42; "
             , second: "O Lord, make haste to help me."
               }
           , { first: "Let them be ashamed and altogether dismayed who seek after my life to destroy it; &#42; "
             , second: "let them draw back and be disgraced who take pleasure in my misfortune."
               }
           , { first: "Let those who say “Aha!” and gloat over me be confounded, &#42; "
             , second: "because they are ashamed."
               }
           , { first: "Let all who seek you rejoice in you and be glad; &#42; "
             , second: "let those who love your salvation continually say, “Great is the Lord!”"
               }
           , { first: "Though I am poor and afflicted, &#42; "
             , second: "the Lord will have regard for me."
               }
           , { first: "You are my helper and my deliverer; &#42; "
             , second: "do not tarry, O my God."
               }
             ]
    }
  , 41:
    { name: "Psalm 41."
    , title: "Beatus qui intelligit"
    , vss: [ { first: "Happy are they who consider the poor and needy! &#42; "
             , second: "the Lord will deliver them in the time of trouble."
               }
           , { first: "The Lord preserves them and keeps them alive, so that they may be happy in the land; &#42; "
             , second: "he does not hand them over to the will of their enemies."
               }
           , { first: "The Lord sustains them on their sickbed &#42; "
             , second: "and ministers to them in their illness."
               }
           , { first: "I said, “Lord, be merciful to me; &#42; "
             , second: "heal me, for I have sinned against you.”"
               }
           , { first: "My enemies are saying wicked things about me: &#42; "
             , second: "“When will he die, and his name perish?”"
               }
           , { first: "Even if they come to see me, they speak empty words; &#42; "
             , second: "their heart collects false rumors; they go outside and spread them."
               }
           , { first: "All my enemies whisper together about me &#42; "
             , second: "and devise evil against me."
               }
           , { first: "“A deadly thing,” they say, “has fastened on him; &#42; "
             , second: "he has taken to his bed and will never get up again.”"
               }
           , { first: "Even my best friend, whom I trusted, who broke bread with me, &#42; "
             , second: "has lifted up his heel and turned against me."
               }
           , { first: "But you, O Lord, be merciful to me and raise me up, &#42; "
             , second: "and I shall repay them."
               }
           , { first: "By this I know you are pleased with me, &#42; "
             , second: "that my enemy does not triumph over me."
               }
           , { first: "In my integrity you hold me fast, &#42; "
             , second: "and shall set me before your face for ever."
               }
           , { first: "Blessed be the Lord God of Israel, &#42; "
             , second: "from age to age. Amen. Amen."
               }
             ]
    }
  , 42:
    { name: "Psalm 42."
    , title: "Quemadmodum"
    , vss: [ { first: "As the deer longs for the water-brooks, &#42; "
             , second: "so longs my soul for you, O God."
               }
           , { first: "My soul is athirst for God, athirst for the living God; &#42; "
             , second: "when shall I come to appear before the presence of God?"
               }
           , { first: "My tears have been my food day and night, &#42; "
             , second: "while all day long they say to me, “Where now is your God?”"
               }
           , { first: "I pour out my soul when I think on these things: &#42; "
             , second: "how I went with the multitude and led them into the house of God,"
               }
           , { first: "With the voice of praise and thanksgiving, &#42; "
             , second: "among those who keep holy-day."
               }
           , { first: "Why are you so full of heaviness, O my soul? &#42; "
             , second: "and why are you so disquieted within me?"
               }
           , { first: "Put your trust in God; &#42; "
             , second: "for I will yet give thanks to him, who is the help of my countenance, and my God."
               }
           , { first: "My soul is heavy within me; &#42; "
             , second: "therefore I will remember you from the land of Jordan, and from the peak of Mizar among the heights of Hermon."
               }
           , { first: "One deep calls to another in the noise of your cataracts; &#42; "
             , second: "all your rapids and floods have gone over me."
               }
           , { first: "The Lord grants his loving-kindness in the daytime; &#42; "
             , second: "in the night season his song is with me, a prayer to the God of my life."
               }
           , { first: "I will say to the God of my strength, “Why have you forgotten me? &#42; "
             , second: "and why do I go so heavily while the enemy oppresses me?”"
               }
           , { first: "While my bones are being broken, &#42; "
             , second: "my enemies mock me to my face;"
               }
           , { first: "All day long they mock me &#42; "
             , second: "and say to me, “Where now is your God?”"
               }
           , { first: "Why are you so full of heaviness, O my soul? &#42; "
             , second: "and why are you so disquieted within me?"
               }
           , { first: "Put your trust in God; &#42; "
             , second: "for I will yet give thanks to him, who is the help of my countenance, and my God."
               }
             ]
    }
  , 43:
    { name: "Psalm 43."
    , title: "Judica me, Deus"
    , vss: [ { first: "Give judgment for me, O God, and defend my cause against an ungodly people; &#42; "
             , second: "deliver me from the deceitful and the wicked."
               }
           , { first: "For you are the God of my strength; why have you put me from you? &#42; "
             , second: "and why do I go so heavily while the enemy oppresses me?"
               }
           , { first: "Send out your light and your truth, that they may lead me, &#42; "
             , second: "and bring me to your holy hill and to your dwelling;"
               }
           , { first: "That I may go to the altar of God, to the God of my joy and gladness; &#42; "
             , second: "and on the harp I will give thanks to you, O God my God."
               }
           , { first: "Why are you so full of heaviness, O my soul? &#42; "
             , second: "and why are you so disquieted within me?"
               }
           , { first: "Put your trust in God; &#42; "
             , second: "for I will yet give thanks to him, who is the help of my countenance, and my God."
               }
             ]
    }
  , 44:
    { name: "Psalm 44."
    , title: "Deus, auribus"
    , vss: [ { first: "We have heard with our ears, O God, our forefathers have told us, &#42; "
             , second: "the deeds you did in their days, in the days of old."
               }
           , { first: "How with your hand you drove the peoples out and planted our forefathers in the land; &#42; "
             , second: "how you destroyed nations and made your people flourish."
               }
           , { first: "For they did not take the land by their sword, nor did their arm win the victory for them; &#42; "
             , second: "but your right hand, your arm, and the light of your countenance, because you favored them."
               }
           , { first: "You are my King and my God; &#42; "
             , second: "you command victories for Jacob."
               }
           , { first: "Through you we pushed back our adversaries; &#42; "
             , second: "through your Name we trampled on those who rose up against us."
               }
           , { first: "For I do not rely on my bow, &#42; "
             , second: "and my sword does not give me the victory."
               }
           , { first: "Surely, you gave us victory over our adversaries &#42; "
             , second: "and put those who hate us to shame."
               }
           , { first: "Every day we gloried in God, &#42; "
             , second: "and we will praise your Name for ever."
               }
           , { first: "Nevertheless, you have rejected and humbled us &#42; "
             , second: "and do not go forth with our armies."
               }
           , { first: "You have made us fall back before our adversary, &#42; "
             , second: "and our enemies have plundered us."
               }
           , { first: "You have made us like sheep to be eaten &#42; "
             , second: "and have scattered us among the nations."
               }
           , { first: "You are selling your people for a trifle &#42; "
             , second: "and are making no profit on the sale of them."
               }
           , { first: "You have made us the scorn of our neighbors, &#42; "
             , second: "a mockery and derision to those around us."
               }
           , { first: "You have made us a byword among the nations, &#42; "
             , second: "a laughing-stock among the peoples."
               }
           , { first: "My humiliation is daily before me, &#42; "
             , second: "and shame has covered my face;"
               }
           , { first: "Because of the taunts of the mockers and blasphemers, &#42; "
             , second: "because of the enemy and avenger."
               }
           , { first: "All this has come upon us; &#42; "
             , second: "yet we have not forgotten you, nor have we betrayed your covenant."
               }
           , { first: "Our heart never turned back, &#42; "
             , second: "nor did our footsteps stray from your path;"
               }
           , { first: "Though you thrust us down into a place of misery, &#42; "
             , second: "and covered us over with deep darkness."
               }
           , { first: "If we have forgotten the Name of our God, &#42; "
             , second: "or stretched out our hands to some strange god,"
               }
           , { first: "Will not God find it out? &#42; "
             , second: "for he knows the secrets of the heart."
               }
           , { first: "Indeed, for your sake we are killed all the day long; &#42; "
             , second: "we are accounted as sheep for the slaughter."
               }
           , { first: "Awake, O Lord! why are you sleeping? &#42; "
             , second: "Arise! do not reject us for ever."
               }
           , { first: "Why have you hidden your face &#42; "
             , second: "and forgotten our affliction and oppression?"
               }
           , { first: "We sink down into the dust; &#42; "
             , second: "our body cleaves to the ground."
               }
           , { first: "Rise up, and help us, &#42; "
             , second: "and save us, for the sake of your steadfast love."
               }
             ]
    }
  , 45: 
    { name: "Psalm 45."
    , title: "Eructavit cor meum"
    , v: [   { first: "My heart is stirring with a noble song; let me recite what I have fashioned for the king; &#42; "
             , second: "my tongue shall be the pen of a skilled writer."
               }
           , { first: "You are the fairest of men; &#42; "
             , second: "grace flows from your lips, because God has blessed you for ever."
               }
           , { first: "Strap your sword upon your thigh, O mighty warrior, &#42; "
             , second: "in your pride and in your majesty."
               }
           , { first: "Ride out and conquer in the cause of truth &#42; "
             , second: "and for the sake of justice."
               }
           , { first: "Your right hand will show you marvelous things; &#42; "
             , second: "your arrows are very sharp, O mighty warrior."
               }
           , { first: "The peoples are falling at your feet, &#42; "
             , second: "and the king’s enemies are losing heart."
               }
           , { first: "Your throne, O God, endures for ever and ever, &#42; "
             , second: "a scepter of righteousness is the scepter of your kingdom; you love righteousness and hate iniquity."
               }
           , { first: "Therefore God, your God, has anointed you &#42; "
             , second: "with the oil of gladness above your fellows."
               }
           , { first: "All your garments are fragrant with myrrh, aloes, and cassia, &#42; "
             , second: "and the music of strings from ivory palaces makes you glad."
               }
           , { first: "Kings’ daughters stand among the ladies of the court; &#42; "
             , second: "on your right hand is the queen, adorned with the gold of Ophir."
               }
           , { first: "“Hear, O daughter; consider and listen closely; &#42; "
             , second: "forget your people and your father’s house."
               }
           , { first: "The king will have pleasure in your beauty; &#42; "
             , second: "he is your master; therefore do him honor."
               }
           , { first: "The people of Tyre are here with a gift; &#42; "
             , second: "the rich among the people seek your favor.”"
               }
           , { first: "All glorious is the princess as she enters; &#42; "
             , second: "her gown is cloth-of-gold."
               }
           , { first: "In embroidered apparel she is brought to the king; &#42; "
             , second: "after her the bridesmaids follow in procession."
               }
           , { first: "With joy and gladness they are brought, &#42; "
             , second: "and enter into the palace of the king."
               }
           , { first: "“In place of fathers, O king, you shall have sons; &#42; "
             , second: "you shall make them princes over all the earth."
               }
           , { first: "I will make your name to be remembered from one generation to another; &#42; "
             , second: "therefore nations will praise you for ever and ever.”"
               }
             ]
    }
  , 46:
    { name: "Psalm 46."
    , title: "Deus noster refugium"
    , vss: [ { first: "God is our refuge and strength, &#42; "
             , second: "a very present help in trouble."
               }
           , { first: "Therefore we will not fear, though the earth be moved, &#42; "
             , second: "and though the mountains be toppled into the depths of the sea;"
               }
           , { first: "Though its waters rage and foam, &#42; "
             , second: "and though the mountains tremble at its tumult."
               }
           , { first: "The Lord of hosts is with us; &#42; "
             , second: "the God of Jacob is our stronghold."
               }
           , { first: "There is a river whose streams make glad the city of God, &#42; "
             , second: "the holy habitation of the Most High."
               }
           , { first: "God is in the midst of her; she shall not be overthrown; &#42; "
             , second: "God shall help her at the break of day."
               }
           , { first: "The nations make much ado, and the kingdoms are shaken; &#42; "
             , second: "God has spoken, and the earth shall melt away."
               }
           , { first: "The Lord of hosts is with us; &#42; "
             , second: "the God of Jacob is our stronghold."
               }
           , { first: "Come now and look upon the works of the Lord, &#42; "
             , second: "what awesome things he has done on earth."
               }
           , { first: "It is he who makes war to cease in all the world; &#42; "
             , second: "he breaks the bow, and shatters the spear, and burns the shields with fire."
               }
           , { first: "“Be still, then, and know that I am God; &#42; "
             , second: "I will be exalted among the nations; I will be exalted in the earth.”"
               }
           , { first: "The Lord of hosts is with us; &#42; "
             , second: "the God of Jacob is our stronghold."
               }
             ]
    }
  , 47:
    { name: "Psalm 47."
    , title: "Omnes gentes, plaudite"
    , vss: [ { first: "Clap your hands, all you peoples; &#42; "
             , second: "shout to God with a cry of joy."
               }
           , { first: "For the Lord Most High is to be feared; &#42; "
             , second: "he is the great King over all the earth."
               }
           , { first: "He subdues the peoples under us, &#42; "
             , second: "and the nations under our feet."
               }
           , { first: "He chooses our inheritance for us, &#42; "
             , second: "the pride of Jacob whom he loves."
               }
           , { first: "God has gone up with a shout, &#42; "
             , second: "the Lord with the sound of the ram’s-horn."
               }
           , { first: "Sing praises to God, sing praises; &#42; "
             , second: "sing praises to our King, sing praises."
               }
           , { first: "For God is King of all the earth; &#42; "
             , second: "sing praises with all your skill."
               }
           , { first: "God reigns over the nations; &#42; "
             , second: "God sits upon his holy throne."
               }
           , { first: "The nobles of the peoples have gathered together &#42; "
             , second: "with the people of the God of Abraham."
               }
           , { first: "The rulers of the earth belong to God, &#42; "
             , second: "and he is highly exalted."
               }
             ]
    }
  , 48:
    { name: "Psalm 48."
    , title: "Magnus Dominus"
    , vss: [ { first: "Great is the Lord, and highly to be praised; &#42; "
             , second: "in the city of our God is his holy hill."
               }
           , { first: "Beautiful and lofty, the joy of all the earth, is the hill of Zion, &#42; "
             , second: "the very center of the world and the city of the great King."
               }
           , { first: "God is in her citadels; &#42; "
             , second: "he is known to be her sure refuge."
               }
           , { first: "Behold, the kings of the earth assembled &#42; "
             , second: "and marched forward together."
               }
           , { first: "They looked and were astounded; &#42; "
             , second: "they retreated and fled in terror."
               }
           , { first: "Trembling seized them there; &#42; "
             , second: "they writhed like a woman in childbirth, like ships of the sea when the east wind shatters them."
               }
           , { first: "As we have heard, so have we seen, in the city of the Lord of hosts, in the city of our God; &#42; "
             , second: "God has established her for ever."
               }
           , { first: "We have waited in silence on your loving-kindness, O God, &#42; "
             , second: "in the midst of your temple."
               }
           , { first: "Your praise, like your Name, O God, reaches to the world’s end; &#42; "
             , second: "your right hand is full of justice."
               }
           , { first: "Let Mount Zion be glad and the cities of Judah rejoice, &#42; "
             , second: "because of your judgments."
               }
           , { first: "Make the circuit of Zion; walk round about her; &#42; "
             , second: "count the number of her towers."
               }
           , { first: "Consider well her bulwarks; examine her strongholds; &#42; "
             , second: "that you may tell those who come after."
               }
           , { first: "This God is our God for ever and ever; &#42; "
             , second: "he shall be our guide for evermore."
               }
             ]
    }
  , 49:
    { name: "Psalm 49."
    , title: "Audite hæc, omnes"
    , vss: [ { first: "Hear this, all you peoples; hearken, all you who dwell in the world, &#42; "
             , second: "you of high degree and low, rich and poor together."
               }
           , { first: "My mouth shall speak of wisdom, &#42; "
             , second: "and my heart shall meditate on understanding."
               }
           , { first: "I will incline my ear to a proverb &#42; "
             , second: "and set forth my riddle upon the harp."
               }
           , { first: "Why should I be afraid in evil days, &#42; "
             , second: "when the wickedness of those at my heels surrounds me,"
               }
           , { first: "The wickedness of those who put their trust in their goods, &#42; "
             , second: "and boast of their great riches?"
               }
           , { first: "We can never ransom ourselves, &#42; "
             , second: "or deliver to God the price of our life;"
               }
           , { first: "For the ransom of our life is so great, &#42; "
             , second: "that we should never have enough to pay it,"
               }
           , { first: "In order to live for ever and ever, &#42; "
             , second: "and never see the grave."
               }
           , { first: "For we see that the wise die also; like the dull and stupid they perish &#42; "
             , second: "and leave their wealth to those who come after them."
               }
           , { first: "Their graves shall be their homes for ever, their dwelling places from generation to generation, &#42; "
             , second: "though they call the lands after their own names."
               }
           , { first: "Even though honored, they cannot live for ever; &#42; "
             , second: "they are like the beasts that perish."
               }
           , { first: "Such is the way of those who foolishly trust in themselves, &#42; "
             , second: "and the end of those who delight in their own words."
               }
           , { first: "Like a flock of sheep they are destined to die; Death is their shepherd; &#42; "
             , second: "they go down straightway to the grave."
               }
           , { first: "Their form shall waste away, &#42; "
             , second: "and the land of the dead shall be their home."
               }
           , { first: "But God will ransom my life; &#42; "
             , second: "he will snatch me from the grasp of death."
               }
           , { first: "Do not be envious when some become rich, &#42; "
             , second: "or when the grandeur of their house increases;"
               }
           , { first: "For they will carry nothing away at their death, &#42; "
             , second: "nor will their grandeur follow them."
               }
           , { first: "Though they thought highly of themselves while they lived, &#42; "
             , second: "and were praised for their success,"
               }
           , { first: "They shall join the company of their forebears, &#42; "
             , second: "who will never see the light again."
               }
           , { first: "Those who are honored, but have no understanding, &#42; "
             , second: "are like the beasts that perish."
               }
             ]
    }
  , 50:
    { name: "Psalm 50."
    , title: "Deus deorum"
    , vss: [ { first: "The Lord, the God of gods, has spoken; &#42; "
             , second: "he has called the earth from the rising of the sun to its setting."
               }
           , { first: "Out of Zion, perfect in its beauty, &#42; "
             , second: "God reveals himself in glory."
               }
           , { first: "Our God will come and will not keep silence; &#42; "
             , second: "before him there is a consuming flame, and round about him a raging storm."
               }
           , { first: "He calls the heavens and the earth from above &#42; "
             , second: "to witness the judgment of his people."
               }
           , { first: "“Gather before me my loyal followers, &#42; "
             , second: "those who have made a covenant with me and sealed it with sacrifice.”"
               }
           , { first: "Let the heavens declare the rightness of his cause; &#42; "
             , second: "for God himself is judge."
               }
           , { first: "Hear, O my people, and I will speak: “O Israel, I will bear witness against you; &#42; "
             , second: "for I am God, your God."
               }
           , { first: "I do not accuse you because of your sacrifices; &#42; "
             , second: "your offerings are always before me."
               }
           , { first: "I will take no bull-calf from your stalls, &#42; "
             , second: "nor he-goats out of your pens;"
               }
           , { first: "For all the beasts of the forest are mine, &#42; "
             , second: "the herds in their thousands upon the hills."
               }
           , { first: "I know every bird in the sky, &#42; "
             , second: "and the creatures of the fields are in my sight."
               }
           , { first: "If I were hungry, I would not tell you, &#42; "
             , second: "for the whole world is mine and all that is in it."
               }
           , { first: "Do you think I eat the flesh of bulls, &#42; "
             , second: "or drink the blood of goats?"
               }
           , { first: "Offer to God a sacrifice of thanksgiving &#42; "
             , second: "and make good your vows to the Most High."
               }
           , { first: "Call upon me in the day of trouble; &#42; "
             , second: "I will deliver you, and you shall honor me.”"
               }
           , { first: "But to the wicked God says: &#42; "
             , second: "“Why do you recite my statutes, and take my covenant upon your lips;"
               }
           , { first: "Since you refuse discipline, &#42; "
             , second: "and toss my words behind your back?"
               }
           , { first: "When you see a thief, you make him your friend, &#42; "
             , second: "and you cast in your lot with adulterers."
               }
           , { first: "You have loosed your lips for evil, &#42; "
             , second: "and harnessed your tongue to a lie."
               }
           , { first: "You are always speaking evil of your brother &#42; "
             , second: "and slandering your own mother’s son."
               }
           , { first: "These things you have done, and I kept still, &#42; "
             , second: "and you thought that I am like you.”"
               }
           , { first: "“I have made my accusation; &#42; "
             , second: "I have put my case in order before your eyes."
               }
           , { first: "Consider this well, you who forget God, &#42; "
             , second: "lest I rend you and there be none to deliver you."
               }
           , { first: "Whoever offers me the sacrifice of thanksgiving honors me; &#42; "
             , second: "but to those who keep in my way will I show the salvation of God.”"
               }
             ]
    }
  , 51:
    { name: "Psalm 51."
    , title: "Miserere mei, Deus"
    , vss: [ { first: "Have mercy on me, O God, according to your loving-kindness; &#42; "
             , second: "in your great compassion blot out my offenses."
               }
           , { first: "Wash me through and through from my wickedness &#42; "
             , second: "and cleanse me from my sin."
               }
           , { first: "For I know my transgressions, &#42; "
             , second: "and my sin is ever before me."
               }
           , { first: "Against you only have I sinned &#42; "
             , second: "and done what is evil in your sight."
               }
           , { first: "And so you are justified when you speak &#42; "
             , second: "and upright in your judgment."
               }
           , { first: "Indeed, I have been wicked from my birth, &#42; "
             , second: "a sinner from my mother’s womb."
               }
           , { first: "For behold, you look for truth deep within me, &#42; "
             , second: "and will make me understand wisdom secretly."
               }
           , { first: "Purge me from my sin, and I shall be pure; &#42; "
             , second: "wash me, and I shall be clean indeed."
               }
           , { first: "Make me hear of joy and gladness, &#42; "
             , second: "that the body you have broken may rejoice."
               }
           , { first: "Hide your face from my sins &#42; "
             , second: "and blot out all my iniquities."
               }
           , { first: "Create in me a clean heart, O God, &#42; "
             , second: "and renew a right spirit within me."
               }
           , { first: "Cast me not away from your presence &#42; "
             , second: "and take not your holy Spirit from me."
               }
           , { first: "Give me the joy of your saving help again &#42; "
             , second: "and sustain me with your bountiful Spirit."
               }
           , { first: "I shall teach your ways to the wicked, &#42; "
             , second: "and sinners shall return to you."
               }
           , { first: "Deliver me from death, O God, &#42; "
             , second: "and my tongue shall sing of your righteousness, O God of my salvation."
               }
           , { first: "Open my lips, O Lord, &#42; "
             , second: "and my mouth shall proclaim your praise."
               }
           , { first: "Had you desired it, I would have offered sacrifice, &#42; "
             , second: "but you take no delight in burnt-offerings."
               }
           , { first: "The sacrifice of God is a troubled spirit; &#42; "
             , second: "a broken and contrite heart, O God, you will not despise."
               }
           , { first: "Be favorable and gracious to Zion, &#42; "
             , second: "and rebuild the walls of Jerusalem."
               }
           , { first: "Then you will be pleased with the appointed sacrifices, with burnt-offerings and oblations; &#42; "
             , second: "then shall they offer young bullocks upon your altar."
               }
             ]
    }
  , 52:
    { name: "Psalm 52."
    , title: "Quid gloriaris?"
    , vss: [ { first: "You tyrant, why do you boast of wickedness &#42; "
             , second: "against the godly all day long?"
               }
           , { first: "You plot ruin; your tongue is like a sharpened razor, &#42; "
             , second: "O worker of deception."
               }
           , { first: "You love evil more than good &#42; "
             , second: "and lying more than speaking the truth."
               }
           , { first: "You love all words that hurt, &#42; "
             , second: "O you deceitful tongue."
               }
           , { first: "Oh, that God would demolish you utterly, &#42; "
             , second: "topple you, and snatch you from your dwelling, and root you out of the land of the living!"
               }
           , { first: "The righteous shall see and tremble, &#42; "
             , second: "and they shall laugh at him, saying,"
               }
           , { first: "“This is the one who did not take God for a refuge, &#42; "
             , second: "but trusted in great wealth and relied upon wickedness.”"
               }
           , { first: "But I am like a green olive tree in the house of God; &#42; "
             , second: "I trust in the mercy of God for ever and ever."
               }
           , { first: "I will give you thanks for what you have done &#42; "
             , second: "and declare the goodness of your Name in the presence of the godly."
               }
             ]
    }
  , 53:
    { name: "Psalm 53."
    , title: "Dixit insipiens"
    , vss: [ { first: "The fool has said in his heart, “There is no God.” &#42; "
             , second: "All are corrupt and commit abominable acts; there is none who does any good."
               }
           , { first: "God looks down from heaven upon us all, &#42; "
             , second: "to see if there is any who is wise, if there is one who seeks after God."
               }
           , { first: "Every one has proved faithless; all alike have turned bad; &#42; "
             , second: "there is none who does good; no, not one."
               }
           , { first: "Have they no knowledge, those evildoers &#42; "
             , second: "who eat up my people like bread and do not call upon God?"
               }
           , { first: "See how greatly they tremble, such trembling as never was; &#42; "
             , second: "for God has scattered the bones of the enemy; they are put to shame, because God has rejected them."
               }
           , { first: "Oh, that Israel’s deliverance would come out of Zion! &#42; "
             , second: "when God restores the fortunes of his people Jacob will rejoice and Israel be glad."
               }
             ]
    }
  , 54:
    { name: "Psalm 54."
    , title: "Deus, in nomine"
    , vss: [ { first: "Save me, O God, by your Name; &#42; "
             , second: "in your might, defend my cause."
               }
           , { first: "Hear my prayer, O God; &#42; "
             , second: "give ear to the words of my mouth."
               }
           , { first: "For the arrogant have risen up against me, and the ruthless have sought my life, &#42; "
             , second: "those who have no regard for God."
               }
           , { first: "Behold, God is my helper; &#42; "
             , second: "it is the Lord who sustains my life."
               }
           , { first: "Render evil to those who spy on me; &#42; "
             , second: "in your faithfulness, destroy them."
               }
           , { first: "I will offer you a freewill sacrifice &#42; "
             , second: "and praise your Name, O Lord, for it is good."
               }
           , { first: "For you have rescued me from every trouble, &#42; "
             , second: "and my eye has seen the ruin of my foes."
               }
             ]
    }
  , 55:
    { name: "Psalm 55."
    , title: "Exaudi, Deus"
    , vss: [ { first: "Hear my prayer, O God; &#42; "
             , second: "do not hide yourself from my petition."
               }
           , { first: "Listen to me and answer me; &#42; "
             , second: "I have no peace, because of my cares."
               }
           , { first: "I am shaken by the noise of the enemy &#42; "
             , second: "and by the pressure of the wicked;"
               }
           , { first: "For they have cast an evil spell upon me &#42; "
             , second: "and are set against me in fury."
               }
           , { first: "My heart quakes within me, &#42; "
             , second: "and the terrors of death have fallen upon me."
               }
           , { first: "Fear and trembling have come over me, &#42; "
             , second: "and horror overwhelms me."
               }
           , { first: "And I said, “Oh, that I had wings like a dove! &#42; "
             , second: "I would fly away and be at rest."
               }
           , { first: "I would flee to a far-off place &#42; "
             , second: "and make my lodging in the wilderness."
               }
           , { first: "I would hasten to escape &#42; "
             , second: "from the stormy wind and tempest.”"
               }
           , { first: "Swallow them up, O Lord; confound their speech; &#42; "
             , second: "for I have seen violence and strife in the city."
               }
           , { first: "Day and night the watchmen make their rounds upon her walls, &#42; "
             , second: "but trouble and misery are in the midst of her."
               }
           , { first: "There is corruption at her heart; &#42; "
             , second: "her streets are never free of oppression and deceit."
               }
           , { first: "For had it been an adversary who taunted me, then I could have borne it; &#42; "
             , second: "or had it been an enemy who vaunted himself against me, then I could have hidden from him."
               }
           , { first: "But it was you, a man after my own heart, &#42; "
             , second: "my companion, my own familiar friend."
               }
           , { first: "We took sweet counsel together, &#42; "
             , second: "and walked with the throng in the house of God."
               }
           , { first: "Let death come upon them suddenly; let them go down alive into the grave; &#42; "
             , second: "for wickedness is in their dwellings, in their very midst."
               }
           , { first: "But I will call upon God, &#42; "
             , second: "and the Lord will deliver me."
               }
           , { first: "In the evening, in the morning, and at noonday, I will complain and lament, &#42; "
             , second: "and he will hear my voice."
               }
           , { first: "He will bring me safely back from the battle waged against me; &#42; "
             , second: "for there are many who fight me."
               }
           , { first: "God, who is enthroned of old, will hear me and bring them down; &#42; "
             , second: "they never change; they do not fear God."
               }
           , { first: "My companion stretched forth his hand against his comrade; &#42; "
             , second: "he has broken his covenant."
               }
           , { first: "His speech is softer than butter, &#42; "
             , second: "but war is in his heart."
               }
           , { first: "His words are smoother than oil, &#42; "
             , second: "but they are drawn swords."
               }
           , { first: "Cast your burden upon the Lord, and he will sustain you; &#42; "
             , second: "he will never let the righteous stumble."
               }
           , { first: "For you will bring the bloodthirsty and deceitful &#42; "
             , second: "down to the pit of destruction, O God."
               }
           , { first: "They shall not live out half their days, &#42; "
             , second: "but I will put my trust in you."
               }
             ]
    }
  , 56:
    { name: "Psalm 56."
    , title: "Miserere mei, Deus"
    , vss: [ { first: "Have mercy on me, O God, for my enemies are hounding me; &#42; "
             , second: "all day long they assault and oppress me."
               }
           , { first: "They hound me all the day long; &#42; "
             , second: "truly there are many who fight against me, O Most High."
               }
           , { first: "Whenever I am afraid, &#42; "
             , second: "I will put my trust in you."
               }
           , { first: "In God, whose word I praise, In God I trust and will not be afraid, &#42; "
             , second: "for what can flesh do to me?"
               }
           , { first: "All day long they damage my cause; &#42; "
             , second: "their only thought is to do me evil."
               }
           , { first: "They band together; they lie in wait; &#42; "
             , second: "they spy upon my footsteps; because they seek my life."
               }
           , { first: "Shall they escape despite their wickedness? &#42; "
             , second: "O God, in your anger, cast down the peoples."
               }
           , { first: "You have noted my lamentation; put my tears into your bottle; &#42; "
             , second: "are they not recorded in your book?"
               }
           , { first: "Whenever I call upon you, my enemies will be put to flight; &#42; "
             , second: "this I know, for God is on my side."
               }
           , { first: "In God the Lord, whose word I praise, in God I trust and will not be afraid, &#42; "
             , second: "for what can mortals do to me?"
               }
           , { first: "I am bound by the vow I made to you, O God; &#42; "
             , second: "I will present to you thank-offerings;"
               }
           , { first: "For you have rescued my soul from death and my feet from stumbling, &#42; "
             , second: "that I may walk before God in the light of the living."
               }
             ]
    }
  , 57:
    { name: "Psalm 57."
    , title: "Miserere mei, Deus"
    , vss: [ { first: "Be merciful to me, O God, be merciful, for I have taken refuge in you; &#42; "
             , second: "in the shadow of your wings will I take refuge until this time of trouble has gone by."
               }
           , { first: "I will call upon the Most High God, &#42; "
             , second: "the God who maintains my cause."
               }
           , { first: "He will send from heaven and save me; he will confound those who trample upon me; &#42; "
             , second: "God will send forth his love and his faithfulness."
               }
           , { first: "I lie in the midst of lions that devour the people; &#42; "
             , second: "their teeth are spears and arrows, their tongue a sharp sword."
               }
           , { first: "They have laid a net for my feet, and I am bowed low; &#42; "
             , second: "they have dug a pit before me, but have fallen into it themselves."
               }
           , { first: "Exalt yourself above the heavens, O God, &#42; "
             , second: "and your glory over all the earth."
               }
           , { first: "My heart is firmly fixed, O God, my heart is fixed; &#42; "
             , second: "I will sing and make melody."
               }
           , { first: "Wake up, my spirit;awake, lute and harp; &#42; "
             , second: "I myself will waken the dawn."
               }
           , { first: "I will confess you among the peoples, O Lord; &#42; "
             , second: "I will sing praise to you among the nations."
               }
           , { first: "For your loving-kindness is greater than the heavens, &#42; "
             , second: "and your faithfulness reaches to the clouds."
               }
           , { first: "Exalt yourself above the heavens, O God, &#42; "
             , second: "and your glory over all the earth."
               }
             ]
    }
  , 58:
    { name: "Psalm 58."
    , title: "Si vere utique"
    , vss: [ { first: "Do you indeed decree righteousness, you rulers? &#42; "
             , second: "do you judge the peoples with equity?"
               }
           , { first: "No; you devise evil in your hearts, &#42; "
             , second: "and your hands deal out violence in the land."
               }
           , { first: "The wicked are perverse from the womb; &#42; "
             , second: "liars go astray from their birth."
               }
           , { first: "They are as venomous as a serpent, &#42; "
             , second: "they are like the deaf adder which stops its ears,"
               }
           , { first: "Which does not heed the voice of the charmer, &#42; "
             , second: "no matter how skillful his charming."
               }
           , { first: "O God, break their teeth in their mouths; &#42; "
             , second: "pull the fangs of the young lions, O Lord."
               }
           , { first: "Let them vanish like water that runs off; &#42; "
             , second: "let them wither like trodden grass."
               }
           , { first: "Let them be like the snail that melts away, &#42; "
             , second: "like a stillborn child that never sees the sun."
               }
           , { first: "Before they bear fruit, let them be cut down like a brier; &#42; "
             , second: "like thorns and thistles let them be swept away."
               }
           , { first: "The righteous will be glad when they see the vengeance; &#42; "
             , second: "they will bathe their feet in the blood of the wicked."
               }
           , { first: "And they will say, “Surely, there is a reward for the righteous; &#42; "
             , second: "surely, there is a God who rules in the earth.”"
               }
             ]
    }
  , 59:
    { name: "Psalm 59."
    , title: "Eripe me de inimicis"
    , vss: [ { first: "Rescue me from my enemies, O God; &#42; "
             , second: "protect me from those who rise up against me."
               }
           , { first: "Rescue me from evildoers &#42; "
             , second: "and save me from those who thirst for my blood."
               }
           , { first: "See how they lie in wait for my life, how the mighty gather together against me; &#42; "
             , second: "not for any offense or fault of mine, O Lord."
               }
           , { first: "Not because of any guilt of mine &#42; "
             , second: "they run and prepare themselves for battle."
               }
           , { first: "Rouse yourself, come to my side, and see; &#42; "
             , second: "for you, Lord God of hosts, are Israel’s God."
               }
           , { first: "Awake, and punish all the ungodly; &#42; "
             , second: "show no mercy to those who are faithless and evil."
               }
           , { first: "They go to and fro in the evening; &#42; "
             , second: "they snarl like dogs and run about the city."
               }
           , { first: "Behold, they boast with their mouths, and taunts are on their lips; &#42; "
             , second: "“For who,” they say, “will hear us?”"
               }
           , { first: "But you, O Lord, you laugh at them; &#42; "
             , second: "you laugh all the ungodly to scorn."
               }
           , { first: "My eyes are fixed on you, O my Strength; &#42; "
             , second: "for you, O God, are my stronghold."
               }
           , { first: "My merciful God comes to meet me; &#42; "
             , second: "God will let me look in triumph on my enemies."
               }
           , { first: "Slay them, O God, lest my people forget; &#42; "
             , second: "send them reeling by your might and put them down, O Lord our shield."
               }
           , { first: "For the sins of their mouths, for the words of their lips, for the cursing and lies that they utter, &#42; "
             , second: "let them be caught in their pride."
               }
           , { first: "Make an end of them in your wrath; &#42; "
             , second: "make an end of them, and they shall be no more."
               }
           , { first: "Let everyone know that God rules in Jacob, &#42; "
             , second: "and to the ends of the earth."
               }
           , { first: "They go to and fro in the evening; &#42; "
             , second: "they snarl like dogs and run about the city."
               }
           , { first: "They forage for food, &#42; "
             , second: "and if they are not filled, they howl."
               }
           , { first: "For my part, I will sing of your strength; &#42; "
             , second: "I will celebrate your love in the morning;"
               }
           , { first: "For you have become my stronghold, &#42; "
             , second: "a refuge in the day of my trouble."
               }
           , { first: "To you, O my Strength, will I sing; &#42; "
             , second: "for you, O God, are my stronghold and my merciful God."
               }
             ]
    }
  , 60:
    { name: "Psalm 60."
    , title: "Deus, repulisti nos"
    , vss: [ { first: "O God, you have cast us off and broken us; &#42; "
             , second: "you have been angry; oh, take us back to you again."
               }
           , { first: "You have shaken the earth and split it open; &#42; "
             , second: "repair the cracks in it, for it totters."
               }
           , { first: "You have made your people know hardship; &#42; "
             , second: "you have given us wine that makes us stagger."
               }
           , { first: "You have set up a banner for those who fear you, &#42; "
             , second: "to be a refuge from the power of the bow."
               }
           , { first: "Save us by your right hand and answer us, &#42; "
             , second: "that those who are dear to you may be delivered."
               }
           , { first: "God spoke from his holy place and said: &#42; "
             , second: "“I will exult and parcel out Shechem; I will divide the valley of Succoth."
               }
           , { first: "Gilead is mine and Manasseh is mine; &#42; "
             , second: "Ephraim is my helmet and Judah my scepter."
               }
           , { first: "Moab is my wash-basin, on Edom I throw down my sandal to claim it, &#42; "
             , second: "and over Philistia will I shout in triumph.”"
               }
           , { first: "Who will lead me into the strong city? &#42; "
             , second: "who will bring me into Edom?"
               }
           , { first: "Have you not cast us off, O God? &#42; "
             , second: "you no longer go out, O God, with our armies."
               }
           , { first: "Grant us your help against the enemy, &#42; "
             , second: "for vain is the help of man."
               }
           , { first: "With God we will do valiant deeds, &#42; "
             , second: "and he shall tread our enemies under foot."
               }
             ]
    }
  , 61:
    { name: "Psalm 61."
    , title: "Exaudi, Deus"
    , vss: [ { first: "Hear my cry, O God, &#42; "
             , second: "and listen to my prayer."
               }
           , { first: "I call upon you from the ends of the earth with heaviness in my heart; &#42; "
             , second: "set me upon the rock that is higher than I."
               }
           , { first: "For you have been my refuge, &#42; "
             , second: "a strong tower against the enemy."
               }
           , { first: "I will dwell in your house for ever; &#42; "
             , second: "I will take refuge under the cover of your wings."
               }
           , { first: "For you, O God, have heard my vows; &#42; "
             , second: "you have granted me the heritage of those who fear your Name."
               }
           , { first: "Add length of days to the king’s life; &#42; "
             , second: "let his years extend over many generations."
               }
           , { first: "Let him sit enthroned before God for ever; &#42; "
             , second: "bid love and faithfulness watch over him."
               }
           , { first: "So will I always sing the praise of your Name, &#42; "
             , second: "and day by day I will fulfill my vows."
               }
             ]
    }
  , 62:
    { name: "Psalm 62."
    , title: "Nonne Deo?"
    , vss: [ { first: "For God alone my soul in silence waits; &#42; "
             , second: "from him comes my salvation."
               }
           , { first: "He alone is my rock and my salvation, &#42; "
             , second: "my stronghold, so that I shall not be greatly shaken."
               }
           , { first: "How long will you assail me to crush me, all of you together, &#42; "
             , second: "as if you were a leaning fence, a toppling wall?"
               }
           , { first: "They seek only to bring me down from my place of honor; &#42; "
             , second: "lies are their chief delight."
               }
           , { first: "They bless with their lips, &#42; "
             , second: "but in their hearts they curse."
               }
           , { first: "For God alone my soul in silence waits; &#42; "
             , second: "truly, my hope is in him."
               }
           , { first: "He alone is my rock and my salvation, &#42; "
             , second: "my stronghold, so that I shall not be shaken."
               }
           , { first: "In God is my safety and my honor; &#42; "
             , second: "God is my strong rock and my refuge."
               }
           , { first: "Put your trust in him always, O people, &#42; "
             , second: "pour out your hearts before him, for God is our refuge."
               }
           , { first: "Those of high degree are but a fleeting breath, &#42; "
             , second: "even those of low estate cannot be trusted."
               }
           , { first: "On the scales they are lighter than a breath, &#42; "
             , second: "all of them together."
               }
           , { first: "Put no trust in extortion; in robbery take no empty pride; &#42; "
             , second: "though wealth increase, set not your heart upon it."
               }
           , { first: "God has spoken once, twice have I heard it, &#42; "
             , second: "that power belongs to God."
               }
           , { first: "Steadfast love is yours, O Lord, &#42; "
             , second: "for you repay everyone according to his deeds."
               }
             ]
    }
  , 63:
    { name: "Psalm 63."
    , title: "Deus, Deus meus"
    , vss: [ { first: "O God, you are my God; eagerly I seek you; &#42; "
             , second: "my soul thirsts for you, my flesh faints for you, as in a barren and dry land where there is no water."
               }
           , { first: "Therefore I have gazed upon you in your holy place, &#42; "
             , second: "that I might behold your power and your glory."
               }
           , { first: "For your loving-kindness is better than life itself; &#42; "
             , second: "my lips shall give you praise."
               }
           , { first: "So will I bless you as long as I live &#42; "
             , second: "and lift up my hands in your Name."
               }
           , { first: "My soul is content, as with marrow and fatness, &#42; "
             , second: "and my mouth praises you with joyful lips,"
               }
           , { first: "When I remember you upon my bed, &#42; "
             , second: "and meditate on you in the night watches."
               }
           , { first: "For you have been my helper, &#42; "
             , second: "and under the shadow of your wings I will rejoice."
               }
           , { first: "My soul clings to you; &#42; "
             , second: "your right hand holds me fast."
               }
           , { first: "May those who seek my life to destroy it &#42; "
             , second: "go down into the depths of the earth;"
               }
           , { first: "Let them fall upon the edge of the sword, &#42; "
             , second: "and let them be food for jackals."
               }
           , { first: "But the king will rejoice in God; all those who swear by him will be glad; &#42; "
             , second: "for the mouth of those who speak lies shall be stopped."
               }
             ]
    }
  , 64:
    { name: "Psalm 64."
    , title: "Exaudi, Deus"
    , vss: [ { first: "Hear my voice, O God, when I complain; &#42; "
             , second: "protect my life from fear of the enemy."
               }
           , { first: "Hide me from the conspiracy of the wicked, &#42; "
             , second: "from the mob of evildoers."
               }
           , { first: "They sharpen their tongue like a sword, &#42; "
             , second: "and aim their bitter words like arrows,"
               }
           , { first: "That they may shoot down the blameless from ambush; &#42; "
             , second: "they shoot without warning and are not afraid."
               }
           , { first: "They hold fast to their evil course; &#42; "
             , second: "they plan how they may hide their snares."
               }
           , { first: "They say, “Who will see us? who will find out our crimes? &#42; "
             , second: "we have thought out a perfect plot.”"
               }
           , { first: "The human mind and heart are a mystery; &#42; "
             , second: "but God will loose an arrow at them, and suddenly they will be wounded."
               }
           , { first: "He will make them trip over their tongues, &#42; "
             , second: "and all who see them will shake their heads."
               }
           , { first: "Everyone will stand in awe and declare God’s deeds; &#42; "
             , second: "they will recognize his works."
               }
           , { first: "The righteous will rejoice in the Lord and put their trust in him, &#42; "
             , second: "and all who are true of heart will glory."
               }
             ]
    }
  , 65:
    { name: "Psalm 65."
    , title: "Te decet hymnus"
    , vss: [ { first: "You are to be praised, O God, in Zion; &#42; "
             , second: "to you shall vows be performed in Jerusalem."
               }
           , { first: "To you that hear prayer shall all flesh come, &#42; "
             , second: "because of their transgressions."
               }
           , { first: "Our sins are stronger than we are, &#42; "
             , second: "but you will blot them out."
               }
           , { first: "Happy are they whom you choose and draw to your courts to dwell there! &#42; "
             , second: "they will be satisfied by the beauty of your house, by the holiness of your temple."
               }
           , { first: "Awesome things will you show us in your righteousness, O God of our salvation, &#42; "
             , second: "O Hope of all the ends of the earth and of the seas that are far away."
               }
           , { first: "You make fast the mountains by your power; &#42; "
             , second: "they are girded about with might."
               }
           , { first: "You still the roaring of the seas, &#42; "
             , second: "the roaring of their waves, and the clamor of the peoples."
               }
           , { first: "Those who dwell at the ends of the earth will tremble at your marvelous signs; &#42; "
             , second: "you make the dawn and the dusk to sing for joy."
               }
           , { first: "You visit the earth and water it abundantly; you make it very plenteous; &#42; "
             , second: "the river of God is full of water."
               }
           , { first: "You prepare the grain, &#42; "
             , second: "for so you provide for the earth."
               }
           , { first: "You drench the furrows and smooth out the ridges; &#42; "
             , second: "with heavy rain you soften the ground and bless its increase."
               }
           , { first: "You crown the year with your goodness, &#42; "
             , second: "and your paths overflow with plenty."
               }
           , { first: "May the fields of the wilderness be rich for grazing, &#42; "
             , second: "and the hills be clothed with joy."
               }
           , { first: "May the meadows cover themselves with flocks, and the valleys cloak themselves with grain; &#42; "
             , second: "let them shout for joy and sing."
               }
             ]
    }
  , 66:
    { name: "Psalm 66."
    , title: "Jubilate Deo"
    , vss: [ { first: "Be joyful in God, all you lands; &#42; "
             , second: "sing the glory of his Name; sing the glory of his praise."
               }
           , { first: "Say to God, “How awesome are your deeds! &#42; "
             , second: "because of your great strength your enemies cringe before you."
               }
           , { first: "All the earth bows down before you, &#42; "
             , second: "sings to you, sings out your Name.”"
               }
           , { first: "Come now and see the works of God, &#42; "
             , second: "how wonderful he is in his doing toward all people."
               }
           , { first: "He turned the sea into dry land, so that they went through the water on foot, &#42; "
             , second: "and there we rejoiced in him."
               }
           , { first: "In his might he rules for ever; his eyes keep watch over the nations; &#42; "
             , second: "let no rebel rise up against him."
               }
           , { first: "Bless our God, you peoples; &#42; "
             , second: "make the voice of his praise to be heard;"
               }
           , { first: "Who holds our souls in life, &#42; "
             , second: "and will not allow our feet to slip."
               }
           , { first: "For you, O God, have proved us; &#42; "
             , second: "you have tried us just as silver is tried."
               }
           , { first: "You brought us into the snare; &#42; "
             , second: "you laid heavy burdens upon our backs."
               }
           , { first: "You let enemies ride over our heads; we went through fire and water; &#42; "
             , second: "but you brought us out into a place of refreshment."
               }
           , { first: "I will enter your house with burnt-offerings and will pay you my vows, &#42; "
             , second: "which I promised with my lips and spoke with my mouth when I was in trouble."
               }
           , { first: "I will offer you sacrifices of fat beasts with the smoke of rams; &#42; "
             , second: "I will give you oxen and goats."
               }
           , { first: "Come and listen, all you who fear God, &#42; "
             , second: "and I will tell you what he has done for me."
               }
           , { first: "I called out to him with my mouth, &#42; "
             , second: "and his praise was on my tongue."
               }
           , { first: "If I had found evil in my heart, &#42; "
             , second: "the Lord would not have heard me;"
               }
           , { first: "But in truth God has heard me; &#42; "
             , second: "he has attended to the voice of my prayer."
               }
           , { first: "Blessed be God, who has not rejected my prayer, &#42; "
             , second: "nor withheld his love from me."
               }
             ]
    }
  , 67:
    { name: "Psalm 67."
    , title: "Deus misereatur"
    , vss: [ { first: "May God be merciful to us and bless us, &#42; "
             , second: "show us the light of his countenance and come to us."
               }
           , { first: "Let your ways be known upon earth, &#42; "
             , second: "your saving health among all nations."
               }
           , { first: "Let the peoples praise you, O God; &#42; "
             , second: "let all the peoples praise you."
               }
           , { first: "Let the nations be glad and sing for joy, &#42; "
             , second: "for you judge the peoples with equity and guide all the nations upon earth."
               }
           , { first: "Let the peoples praise you, O God; &#42; "
             , second: "let all the peoples praise you."
               }
           , { first: "The earth has brought forth her increase; &#42; "
             , second: "may God, our own God, give us his blessing."
               }
           , { first: "May God give us his blessing, &#42; "
             , second: "and may all the ends of the earth stand in awe of him."
               }
             ]
    }
  , 68:
    { name: "Psalm 68."
    , title: "Exsurgat Deus"
    , vss: [ { first: "Let God arise, and let his enemies be scattered; &#42; "
             , second: "let those who hate him flee before him."
               }
           , { first: "Let them vanish like smoke when the wind drives it away; &#42; "
             , second: "as the wax melts at the fire, so let the wicked perish at the presence of God."
               }
           , { first: "But let the righteous be glad and rejoice before God; &#42; "
             , second: "let them also be merry and joyful."
               }
           , { first: "Sing to God, sing praises to his Name; exalt him who rides upon the heavens; &#42; "
             , second: "Yahweh is his Name, rejoice before him!"
               }
           , { first: "Father of orphans, defender of widows, &#42; "
             , second: "God in his holy habitation!"
               }
           , { first: "God gives the solitary a home and brings forth prisoners into freedom; &#42; "
             , second: "but the rebels shall live in dry places."
               }
           , { first: "O God, when you went forth before your people, &#42; "
             , second: "when you marched through the wilderness,"
               }
           , { first: "The earth shook, and the skies poured down rain, at the presence of God, the God of Sinai, &#42; "
             , second: "at the presence of God, the God of Israel."
               }
           , { first: "You sent a gracious rain, O God, upon your inheritance; &#42; "
             , second: "you refreshed the land when it was weary."
               }
           , { first: "Your people found their home in it; &#42; "
             , second: "in your goodness, O God, you have made provision for the poor."
               }
           , { first: "The Lord gave the word; &#42; "
             , second: "great was the company of women who bore the tidings:"
               }
           , { first: "“Kings with their armies are fleeing away; &#42; "
             , second: "the women at home are dividing the spoils.”"
               }
           , { first: "Though you lingered among the sheepfolds, &#42; "
             , second: "you shall be like a dove whose wings are covered with silver, whose feathers are like green gold."
               }
           , { first: "When the Almighty scattered kings, &#42; "
             , second: "it was like snow falling in Zalmon."
               }
           , { first: "O mighty mountain, O hill of Bashan! &#42; "
             , second: "O rugged mountain, O hill of Bashan!"
               }
           , { first: "Why do you look with envy, O rugged mountain, at the hill which God chose for his resting place? &#42; "
             , second: "truly, the Lord will dwell there for ever."
               }
           , { first: "The chariots of God are twenty thousand, even thousands of thousands; &#42; "
             , second: "the Lord comes in holiness from Sinai."
               }
           , { first: "You have gone up on high and led captivity captive; you have received gifts even from your enemies, &#42; "
             , second: "that the Lord God might dwell among them."
               }
           , { first: "Blessed be the Lord day by day, &#42; "
             , second: "the God of our salvation, who bears our burdens."
               }
           , { first: "He is our God, the God of our salvation; &#42; "
             , second: "God is the Lord, by whom we escape death."
               }
           , { first: "God shall crush the heads of his enemies, &#42; "
             , second: "and the hairy scalp of those who go on still in their wickedness."
               }
           , { first: "The Lord has said, “I will bring them back from Bashan; &#42; "
             , second: "I will bring them back from the depths of the sea;"
               }
           , { first: "That your foot may be dipped in blood, &#42; "
             , second: "the tongues of your dogs in the blood of your enemies.”"
               }
           , { first: "They see your procession, O God, &#42; "
             , second: "your procession into the sanctuary, my God and my King."
               }
           , { first: "The singers go before, musicians follow after, &#42; "
             , second: "in the midst of maidens playing upon the hand-drums."
               }
           , { first: "Bless God in the congregation; &#42; "
             , second: "bless the Lord, you that are of the fountain of Israel."
               }
           , { first: "There is Benjamin, least of the tribes, at the head; the princes of Judah in a company; &#42; "
             , second: "and the princes of Zebulon and Naphtali."
               }
           , { first: "Send forth your strength, O God; &#42; "
             , second: "establish, O God, what you have wrought for us."
               }
           , { first: "Kings shall bring gifts to you, &#42; "
             , second: "for your temple’s sake at Jerusalem."
               }
           , { first: "Rebuke the wild beast of the reeds, &#42; "
             , second: "and the peoples, a herd of wild bulls with its calves."
               }
           , { first: "Trample down those who lust after silver; &#42; "
             , second: "scatter the peoples that delight in war."
               }
           , { first: "Let tribute be brought out of Egypt; &#42; "
             , second: "let Ethiopia stretch out her hands to God."
               }
           , { first: "Sing to God, O kingdoms of the earth; &#42; "
             , second: "sing praises to the Lord."
               }
           , { first: "He rides in the heavens, the ancient heavens; &#42; "
             , second: "he sends forth his voice, his mighty voice."
               }
           , { first: "Ascribe power to God; &#42; "
             , second: "his majesty is over Israel; his strength is in the skies."
               }
           , { first: "How wonderful is God in his holy places! &#42; "
             , second: "the God of Israel giving strength and power to his people! Blessed be God!"
               }
             ]
    }
  , 69:
    { name: "Psalm 69."
    , title: "Salvum me fac"
    , vss: [ { first: "Save me, O God, &#42; "
             , second: "for the waters have risen up to my neck."
               }
           , { first: "I am sinking in deep mire, &#42; "
             , second: "and there is no firm ground for my feet."
               }
           , { first: "I have come into deep waters, &#42; "
             , second: "and the torrent washes over me."
               }
           , { first: "I have grown weary with my crying; my throat is inflamed; &#42; "
             , second: "my eyes have failed from looking for my God."
               }
           , { first: "Those who hate me without a cause are more than the hairs of my head; my lying foes who would destroy me are mighty. &#42; "
             , second: "Must I then give back what I never stole?"
               }
           , { first: "O God, you know my foolishness, &#42; "
             , second: "and my faults are not hidden from you."
               }
           , { first: "Let not those who hope in you be put to shame through me, Lord God of hosts; &#42; "
             , second: "let not those who seek you be disgraced because of me, O God of Israel."
               }
           , { first: "Surely, for your sake have I suffered reproach, &#42; "
             , second: "and shame has covered my face."
               }
           , { first: "I have become a stranger to my own kindred, &#42; "
             , second: "an alien to my mother’s children."
               }
           , { first: "Zeal for your house has eaten me up; &#42; "
             , second: "the scorn of those who scorn you has fallen upon me."
               }
           , { first: "I humbled myself with fasting, &#42; "
             , second: "but that was turned to my reproach."
               }
           , { first: "I put on sack-cloth also, &#42; "
             , second: "and became a byword among them."
               }
           , { first: "Those who sit at the gate murmur against me, &#42; "
             , second: "and the drunkards make songs about me."
               }
           , { first: "But as for me, this is my prayer to you, &#42; "
             , second: "at the time you have set, O Lord:"
               }
           , { first: "“In your great mercy, O God, &#42; "
             , second: "answer me with your unfailing help."
               }
           , { first: "Save me from the mire; do not let me sink; &#42; "
             , second: "let me be rescued from those who hate me and out of the deep waters."
               }
           , { first: "Let not the torrent of waters wash over me, neither let the deep swallow me up; &#42; "
             , second: "do not let the Pit shut its mouth upon me."
               }
           , { first: "Answer me, O Lord, for your love is kind; &#42; "
             , second: "in your great compassion, turn to me.”"
               }
           , { first: "“Hide not your face from your servant; &#42; "
             , second: "be swift and answer me, for I am in distress."
               }
           , { first: "Draw near to me and redeem me; &#42; "
             , second: "because of my enemies deliver me."
               }
           , { first: "You know my reproach, my shame, and my dishonor; &#42; "
             , second: "my adversaries are all in your sight.”"
               }
           , { first: "Reproach has broken my heart, and it cannot be healed; &#42; "
             , second: "I looked for sympathy, but there was none, for comforters, but I could find no one."
               }
           , { first: "They gave me gall to eat, &#42; "
             , second: "and when I was thirsty, they gave me vinegar to drink."
               }
           , { first: "Let the table before them be a trap &#42; "
             , second: "and their sacred feasts a snare."
               }
           , { first: "Let their eyes be darkened, that they may not see, &#42; "
             , second: "and give them continual trembling in their loins."
               }
           , { first: "Pour out your indignation upon them, &#42; "
             , second: "and let the fierceness of your anger overtake them."
               }
           , { first: "Let their camp be desolate, &#42; "
             , second: "and let there be none to dwell in their tents."
               }
           , { first: "For they persecute him whom you have stricken &#42; "
             , second: "and add to the pain of those whom you have pierced."
               }
           , { first: "Lay to their charge guilt upon guilt, &#42; "
             , second: "and let them not receive your vindication."
               }
           , { first: "Let them be wiped out of the book of the living &#42; "
             , second: "and not be written among the righteous."
               }
           , { first: "As for me, I am afflicted and in pain; &#42; "
             , second: "your help, O God, will lift me up on high."
               }
           , { first: "I will praise the Name of God in song; &#42; "
             , second: "I will proclaim his greatness with thanksgiving."
               }
           , { first: "This will please the Lord more than an offering of oxen, &#42; "
             , second: "more than bullocks with horns and hoofs."
               }
           , { first: "The afflicted shall see and be glad; &#42; "
             , second: "you who seek God, your heart shall live."
               }
           , { first: "For the Lord listens to the needy, &#42; "
             , second: "and his prisoners he does not despise."
               }
           , { first: "Let the heavens and the earth praise him, &#42; "
             , second: "the seas and all that moves in them;"
               }
           , { first: "For God will save Zion and rebuild the cities of Judah; &#42; "
             , second: "they shall live there and have it in possession."
               }
           , { first: "The children of his servants will inherit it, &#42; "
             , second: "and those who love his Name will dwell therein."
               }
             ]
    }
  , 70:
    { name: "Psalm 70."
    , title: "Deus, in adjutorium"
    , vss: [ { first: "Be pleased, O God, to deliver me; &#42; "
             , second: "O Lord, make haste to help me."
               }
           , { first: "Let those who seek my life be ashamed and altogether dismayed; &#42; "
             , second: "let those who take pleasure in my misfortune draw back and be disgraced."
               }
           , { first: "Let those who say to me “Aha!” and gloat over me turn back, &#42; "
             , second: "because they are ashamed."
               }
           , { first: "Let all who seek you rejoice and be glad in you; &#42; "
             , second: "let those who love your salvation say for ever, “Great is the Lord!”"
               }
           , { first: "But as for me, I am poor and needy; &#42; "
             , second: "come to me speedily, O God."
               }
           , { first: "You are my helper and my deliverer; &#42; "
             , second: "O Lord, do not tarry."
               }
             ]
    }
  , 71:
    { name: "Psalm 71."
    , title: "In te, Domine, speravi"
    , vss: [ { first: "In you, O Lord, have I taken refuge; &#42; "
             , second: "let me never be ashamed."
               }
           , { first: "In your righteousness, deliver me and set me free; &#42; "
             , second: "incline your ear to me and save me."
               }
           , { first: "Be my strong rock, a castle to keep me safe; &#42; "
             , second: "you are my crag and my stronghold."
               }
           , { first: "Deliver me, my God, from the hand of the wicked, &#42; "
             , second: "from the clutches of the evildoer and the oppressor."
               }
           , { first: "For you are my hope, O Lord God, &#42; "
             , second: "my confidence since I was young."
               }
           , { first: "I have been sustained by you ever since I was born; from my mother’s womb you have been my strength; &#42; "
             , second: "my praise shall be always of you."
               }
           , { first: "I have become a portent to many; &#42; "
             , second: "but you are my refuge and my strength."
               }
           , { first: "Let my mouth be full of your praise &#42; "
             , second: "and your glory all the day long."
               }
           , { first: "Do not cast me off in my old age; &#42; "
             , second: "forsake me not when my strength fails."
               }
           , { first: "For my enemies are talking against me, &#42; "
             , second: "and those who lie in wait for my life take counsel together."
               }
           , { first: "They say, “God has forsaken him; go after him and seize him; &#42; "
             , second: "because there is none who will save.”"
               }
           , { first: "O God, be not far from me; &#42; "
             , second: "come quickly to help me, O my God."
               }
           , { first: "Let those who set themselves against me be put to shame and be disgraced; &#42; "
             , second: "let those who seek to do me evil be covered with scorn and reproach."
               }
           , { first: "But I shall always wait in patience, &#42; "
             , second: "and shall praise you more and more."
               }
           , { first: "My mouth shall recount your mighty acts and saving deeds all day long; &#42; "
             , second: "though I cannot know the number of them."
               }
           , { first: "I will begin with the mighty works of the Lord God; &#42; "
             , second: "I will recall your righteousness, yours alone."
               }
           , { first: "O God, you have taught me since I was young, &#42; "
             , second: "and to this day I tell of your wonderful works."
               }
           , { first: "And now that I am old and gray-headed, O God, do not forsake me, &#42; "
             , second: "till I make known your strength to this generation and your power to all who are to come."
               }
           , { first: "Your righteousness, O God, reaches to the heavens; &#42; "
             , second: "you have done great things; who is like you, O God?"
               }
           , { first: "You have showed me great troubles and adversities, &#42; "
             , second: "but you will restore my life and bring me up again from the deep places of the earth."
               }
           , { first: "You strengthen me more and more; &#42; "
             , second: "you enfold and comfort me,"
               }
           , { first: "Therefore I will praise you upon the lyre for your faithfulness, O my God; &#42; "
             , second: "I will sing to you with the harp, O Holy One of Israel."
               }
           , { first: "My lips will sing with joy when I play to you, &#42; "
             , second: "and so will my soul, which you have redeemed."
               }
           , { first: "My tongue will proclaim your righteousness all day long, &#42; "
             , second: "for they are ashamed and disgraced who sought to do me harm."
               }
             ]
    }
  , 72:
    { name: "Psalm 72."
    , title: "Deus, judicium"
    , vss: [ { first: "Give the King your justice, O God, &#42; "
             , second: "and your righteousness to the King’s Son;"
               }
           , { first: "That he may rule your people righteously &#42; "
             , second: "and the poor with justice;"
               }
           , { first: "That the mountains may bring prosperity to the people, &#42; "
             , second: "and the little hills bring righteousness."
               }
           , { first: "He shall defend the needy among the people; &#42; "
             , second: "he shall rescue the poor and crush the oppressor."
               }
           , { first: "He shall live as long as the sun and moon endure, &#42; "
             , second: "from one generation to another."
               }
           , { first: "He shall come down like rain upon the mown field, &#42; "
             , second: "like showers that water the earth."
               }
           , { first: "In his time shall the righteous flourish; &#42; "
             , second: "there shall be abundance of peace till the moon shall be no more."
               }
           , { first: "He shall rule from sea to sea, &#42; "
             , second: "and from the River to the ends of the earth."
               }
           , { first: "His foes shall bow down before him, &#42; "
             , second: "and his enemies lick the dust."
               }
           , { first: "The kings of Tarshish and of the isles shall pay tribute, &#42; "
             , second: "and the kings of Arabia and Saba offer gifts."
               }
           , { first: "All kings shall bow down before him, &#42; "
             , second: "and all the nations do him service."
               }
           , { first: "For he shall deliver the poor who cries out in distress, &#42;  and"
             , second: "the oppressed who has no helper."
               }
           , { first: "He shall have pity on the lowly and poor; &#42; "
             , second: "he shall preserve the lives of the needy."
               }
           , { first: "He shall redeem their lives from oppression and violence, &#42; "
             , second: "and dear shall their blood be in his sight."
               }
           , { first: "Long may he live! and may there be given to him gold from Arabia; &#42; "
             , second: "may prayer be made for him always, and may they bless him all the day long."
               }
           , { first: "May there be abundance of grain on the earth, growing thick even on the hilltops; &#42; "
             , second: "may its fruit flourish like Lebanon, and its grain like grass upon the earth."
               }
           , { first: "May his Name remain for ever and be established as long as the sun endures; &#42; "
             , second: "may all the nations bless themselves in him and call him blessed."
               }
           , { first: "Blessed be the Lord God, the God of Israel, &#42; "
             , second: "who alone does wondrous deeds!"
               }
           , { first: "And blessed be his glorious Name for ever! &#42; "
             , second: "and may all the earth be filled with his glory. Amen. Amen."
               }
             ]
    }
  , 73:
    { name: "Psalm 73."
    , title: "Quam bonus Israel!"
    , vss: [ { first: "Truly, God is good to Israel, &#42; "
             , second: "to those who are pure in heart."
               }
           , { first: "But as for me, my feet had nearly slipped; &#42; "
             , second: "I had almost tripped and fallen;"
               }
           , { first: "Because I envied the proud &#42; "
             , second: "and saw the prosperity of the wicked:"
               }
           , { first: "For they suffer no pain, &#42; "
             , second: "and their bodies are sleek and sound;"
               }
           , { first: "In the misfortunes of others they have no share; &#42; "
             , second: "they are not afflicted as others are;"
               }
           , { first: "Therefore they wear their pride like a necklace &#42; "
             , second: "and wrap their violence about them like a cloak."
               }
           , { first: "Their iniquity comes from gross minds, &#42; "
             , second: "and their hearts overflow with wicked thoughts."
               }
           , { first: "They scoff and speak maliciously; &#42; "
             , second: "out of their haughtiness they plan oppression."
               }
           , { first: "They set their mouths against the heavens, &#42; "
             , second: "and their evil speech runs through the world."
               }
           , { first: "And so the people turn to them &#42; "
             , second: "and find in them no fault."
               }
           , { first: "They say, “How should God know? &#42; "
             , second: "is there knowledge in the Most High?”"
               }
           , { first: "So then, these are the wicked; &#42; "
             , second: "always at ease, they increase their wealth."
               }
           , { first: "In vain have I kept my heart clean, &#42; "
             , second: "and washed my hands in innocence."
               }
           , { first: "I have been afflicted all day long, &#42; "
             , second: "and punished every morning."
               }
           , { first: "Had I gone on speaking this way, &#42; "
             , second: "I should have betrayed the generation of your children."
               }
           , { first: "When I tried to understand these things, &#42; "
             , second: "it was too hard for me;"
               }
           , { first: "Until I entered the sanctuary of God &#42; "
             , second: "and discerned the end of the wicked."
               }
           , { first: "Surely, you set them in slippery places; &#42; "
             , second: "you cast them down in ruin."
               }
           , { first: "Oh, how suddenly do they come to destruction, &#42; "
             , second: "come to an end, and perish from terror!"
               }
           , { first: "Like a dream when one awakens, O Lord, &#42; "
             , second: "when you arise you will make their image vanish."
               }
           , { first: "When my mind became embittered, &#42; "
             , second: "I was sorely wounded in my heart."
               }
           , { first: "I was stupid and had no understanding; &#42; "
             , second: "I was like a brute beast in your presence."
               }
           , { first: "Yet I am always with you; &#42; "
             , second: "you hold me by my right hand."
               }
           , { first: "You will guide me by your counsel, &#42; "
             , second: "and afterwards receive me with glory."
               }
           , { first: "Whom have I in heaven but you? &#42; "
             , second: "and having you I desire nothing upon earth."
               }
           , { first: "Though my flesh and my heart should waste away, &#42; "
             , second: "God is the strength of my heart and my portion for ever."
               }
           , { first: "Truly, those who forsake you will perish; &#42; "
             , second: "you destroy all who are unfaithful."
               }
           , { first: "But it is good for me to be near God; &#42; "
             , second: "I have made the Lord God my refuge."
               }
           , { first: "I will speak of all your works &#42; "
             , second: "in the gates of the city of Zion."
               }
             ]
    }
  , 74:
    { name: "Psalm 74."
    , title: "Ut quid, Deus?"
    , vss: [ { first: "O God, why have you utterly cast us off? &#42; "
             , second: "why is your wrath so hot against the sheep of your pasture?"
               }
           , { first: "Remember your congregation that you purchased long ago, &#42; "
             , second: "the tribe you redeemed to be your inheritance, and Mount Zion where you dwell."
               }
           , { first: "Turn your steps toward the endless ruins; &#42; "
             , second: "the enemy has laid waste everything in your sanctuary."
               }
           , { first: "Your adversaries roared in your holy place; &#42; "
             , second: "they set up their banners as tokens of victory."
               }
           , { first: "They were like men coming up with axes to a grove of trees; &#42; "
             , second: "they broke down all your carved work with hatchets and hammers."
               }
           , { first: "They set fire to your holy place; &#42; "
             , second: "they defiled the dwelling-place of your Name and razed it to the ground."
               }
           , { first: "They said to themselves, “Let us destroy them altogether.” &#42; "
             , second: "They burned down all the meeting-places of God in the land."
               }
           , { first: "There are no signs for us to see; there is no prophet left; &#42; "
             , second: "there is not one among us who knows how long."
               }
           , { first: "How long, O God, will the adversary scoff? &#42; "
             , second: "will the enemy blaspheme your Name for ever?"
               }
           , { first: "Why do you draw back your hand? &#42; "
             , second: "why is your right hand hidden in your bosom?"
               }
           , { first: "Yet God is my King from ancient times, &#42; "
             , second: "victorious in the midst of the earth."
               }
           , { first: "You divided the sea by your might &#42; "
             , second: "and shattered the heads of the dragons upon the waters;"
               }
           , { first: "You crushed the heads of Leviathan &#42; "
             , second: "and gave him to the people of the desert for food."
               }
           , { first: "You split open spring and torrent; &#42; "
             , second: "you dried up ever-flowing rivers."
               }
           , { first: "Yours is the day, yours also the night; &#42; "
             , second: "you established the moon and the sun."
               }
           , { first: "You fixed all the boundaries of the earth; &#42; "
             , second: "you made both summer and winter."
               }
           , { first: "Remember, O Lord, how the enemy scoffed, &#42; "
             , second: "how a foolish people despised your Name."
               }
           , { first: "Do not hand over the life of your dove to wild beasts; &#42; "
             , second: "never forget the lives of your poor."
               }
           , { first: "Look upon your covenant; &#42; "
             , second: "the dark places of the earth are haunts of violence."
               }
           , { first: "Let not the oppressed turn away ashamed; &#42; "
             , second: "let the poor and needy praise your Name."
               }
           , { first: "Arise, O God, maintain your cause; &#42; "
             , second: "remember how fools revile you all day long."
               }
           , { first: "Forget not the clamor of your adversaries, &#42; "
             , second: "the unending tumult of those who rise up against you."
               }
             ]
    }
  , 75:
    { name: "Psalm 75."
    , title: "Confitebimur tibi"
    , vss: [ { first: "We give you thanks, O God, we give you thanks, &#42; "
             , second: "calling upon your Name and declaring all your wonderful deeds."
               }
           , { first: "“I will appoint a time,” says God; &#42; "
             , second: "“I will judge with equity."
               }
           , { first: "Though the earth and all its inhabitants are quaking, &#42; "
             , second: "I will make its pillars fast."
               }
           , { first: "I will say to the boasters, ‘Boast no more,’ &#42; "
             , second: "and to the wicked, ‘Do not toss your horns;"
               }
           , { first: "Do not toss your horns so high, &#42; "
             , second: "nor speak with a proud neck.’”"
               }
           , { first: "For judgment is neither from the east nor from the west, &#42; "
             , second: "nor yet from the wilderness or the mountains."
               }
           , { first: "It is God who judges; &#42; "
             , second: "he puts down one and lifts up another."
               }
           , { first: "For in the Lord’s hand there is a cup, full of spiced and foaming wine, which he pours out, &#42; "
             , second: "and all the wicked of the earth shall drink and drain the dregs."
               }
           , { first: "But I will rejoice for ever; &#42; "
             , second: "I will sing praises to the God of Jacob."
               }
           , { first: "He shall break off all the horns of the wicked; &#42; "
             , second: "but the horns of the righteous shall be exalted."
               }
             ]
    }
  , 76:
    { name: "Psalm 76."
    , title: "Notus in Judæa"
    , vss: [ { first: "In Judah is God known; &#42; "
             , second: "his Name is great in Israel."
               }
           , { first: "At Salem is his tabernacle, &#42; "
             , second: "and his dwelling is in Zion."
               }
           , { first: "There he broke the flashing arrows, &#42; "
             , second: "the shield, the sword, and the weapons of battle."
               }
           , { first: "How glorious you are! &#42; "
             , second: "more splendid than the everlasting mountains!"
               }
           , { first: "The strong of heart have been despoiled; they sink into sleep; &#42; "
             , second: "none of the warriors can lift a hand."
               }
           , { first: "At your rebuke, O God of Jacob, &#42; "
             , second: "both horse and rider lie stunned."
               }
           , { first: "What terror you inspire! &#42; "
             , second: "who can stand before you when you are angry?"
               }
           , { first: "From heaven you pronounced judgment; &#42; "
             , second: "the earth was afraid and was still;"
               }
           , { first: "When God rose up to judgment &#42; "
             , second: "and to save all the oppressed of the earth."
               }
           , { first: "Truly, wrathful Edom will give you thanks, &#42; "
             , second: "and the remnant of Hamath will keep your feasts."
               }
           , { first: "Make a vow to the Lord your God and keep it; &#42; "
             , second: "let all around him bring gifts to him who is worthy to be feared."
               }
           , { first: "He breaks the spirit of princes, &#42; "
             , second: "and strikes terror in the kings of the earth."
               }
             ]
    }
  , 77:
    { name: "Psalm 77."
    , title: "Voce mea ad Dominum"
    , vss: [ { first: "I will cry aloud to God; &#42; "
             , second: "I will cry aloud, and he will hear me."
               }
           , { first: "In the day of my trouble I sought the Lord; &#42; "
             , second: "my hands were stretched out by night and did not tire; I refused to be comforted."
               }
           , { first: "I think of God, I am restless, &#42; "
             , second: "I ponder, and my spirit faints."
               }
           , { first: "You will not let my eyelids close; &#42; "
             , second: "I am troubled and I cannot speak."
               }
           , { first: "I consider the days of old; &#42; "
             , second: "I remember the years long past;"
               }
           , { first: "I commune with my heart in the night; &#42; "
             , second: "I ponder and search my mind."
               }
           , { first: "Will the Lord cast me off for ever? &#42; "
             , second: "will he no more show his favor?"
               }
           , { first: "Has his loving-kindness come to an end for ever? &#42; "
             , second: "has his promise failed for evermore?"
               }
           , { first: "Has God forgotten to be gracious? &#42; "
             , second: "has he, in his anger, withheld his compassion?"
               }
           , { first: "And I said, “My grief is this: &#42; "
             , second: "the right hand of the Most High has lost its power.”"
               }
           , { first: "I will remember the works of the Lord, &#42; "
             , second: "and call to mind your wonders of old time."
               }
           , { first: "I will meditate on all your acts &#42; "
             , second: "and ponder your mighty deeds."
               }
           , { first: "Your way, O God, is holy; &#42; "
             , second: "who is so great a god as our God?"
               }
           , { first: "You are the God who works wonders &#42; "
             , second: "and have declared your power among the peoples."
               }
           , { first: "By your strength you have redeemed your people, &#42; "
             , second: "the children of Jacob and Joseph."
               }
           , { first: "The waters saw you, O God; the waters saw you and trembled; &#42; "
             , second: "the very depths were shaken."
               }
           , { first: "The clouds poured out water; the skies thundered; &#42; "
             , second: "your arrows flashed to and fro;"
               }
           , { first: "The sound of your thunder was in the whirlwind; your lightnings lit up the world; &#42; "
             , second: "the earth trembled and shook."
               }
           , { first: "Your way was in the sea, and your paths in the great waters, &#42; "
             , second: "yet your footsteps were not seen."
               }
           , { first: "You led your people like a flock &#42; "
             , second: "by the hand of Moses and Aaron."
               }
             ]
    }
  , 78:
    { name: "Psalm 78."
    , title: ""
    , vss: [ { title: "Part I Attendite, popule"
             , first: "Hear my teaching, O my people; &#42; "
             , second: "incline your ears to the words of my mouth."
               }
           , { first: "I will open my mouth in a parable; &#42; "
             , second: "I will declare the mysteries of ancient times."
               }
           , { first: "That which we have heard and known, and what our forefathers have told us, &#42; "
             , second: "we will not hide from their children."
               }
           , { first: "We will recount to generations to come the praiseworthy deeds and the power of the Lord, &#42; "
             , second: "and the wonderful works he has done."
               }
           , { first: "He gave his decrees to Jacob and established a law for Israel, &#42; "
             , second: "which he commanded them to teach their children;"
               }
           , { first: "That the generations to come might know, and the children yet unborn; &#42; "
             , second: "that they in their turn might tell it to their children;"
               }
           , { first: "So that they might put their trust in God, &#42; "
             , second: "and not forget the deeds of God, but keep his commandments;"
               }
           , { first: "And not be like their forefathers, a stubborn and rebellious generation, &#42; "
             , second: "a generation whose heart was not steadfast, and whose spirit was not faithful to God."
               }
           , { first: "The people of Ephraim, armed with the bow, &#42; "
             , second: "turned back in the day of battle;"
               }
           , { first: "They did not keep the covenant of God, &#42; "
             , second: "and refused to walk in his law;"
               }
           , { first: "They forgot what he had done, &#42; "
             , second: "and the wonders he had shown them."
               }
           , { first: "He worked marvels in the sight of their forefathers, &#42; "
             , second: "in the land of Egypt, in the field of Zoan."
               }
           , { first: "He split open the sea and let them pass through; &#42; "
             , second: "he made the waters stand up like walls."
               }
           , { first: "He led them with a cloud by day, &#42; "
             , second: "and all the night through with a glow of fire."
               }
           , { first: "He split the hard rocks in the wilderness &#42; "
             , second: "and gave them drink as from the great deep."
               }
           , { first: "He brought streams out of the cliff, &#42; "
             , second: "and the waters gushed out like rivers."
               }
           , { first: "But they went on sinning against him, &#42; "
             , second: "rebelling in the desert against the Most High."
               }
           , { first: "They tested God in their hearts, &#42; "
             , second: "demanding food for their craving."
               }
           , { first: "They railed against God and said, &#42; "
             , second: "“Can God set a table in the wilderness?"
               }
           , { first: "True, he struck the rock, the waters gushed out, and the gullies overflowed; &#42; "
             , second: "but is he able to give bread or to provide meat for his people?”"
               }
           , { first: "When the Lord heard this, he was full of wrath; &#42; "
             , second: "a fire was kindled against Jacob, and his anger mounted against Israel;"
               }
           , { first: "For they had no faith in God, &#42; "
             , second: "nor did they put their trust in his saving power."
               }
           , { first: "So he commanded the clouds above &#42; "
             , second: "and opened the doors of heaven."
               }
           , { first: "He rained down manna upon them to eat &#42; "
             , second: "and gave them grain from heaven."
               }
           , { first: "So mortals ate the bread of angels; &#42; "
             , second: "he provided for them food enough."
               }
           , { first: "He caused the east wind to blow in the heavens &#42; "
             , second: "and led out the south wind by his might."
               }
           , { first: "He rained down flesh upon them like dust &#42; "
             , second: "and wingèd birds like the sand of the sea."
               }
           , { first: "He let it fall in the midst of their camp &#42; "
             , second: "and round about their dwellings."
               }
           , { first: "So they ate and were well filled, &#42; "
             , second: "for he gave them what they craved."
               }
           , { first: "But they did not stop their craving, &#42; "
             , second: "though the food was still in their mouths."
               }
           , { first: "So God’s anger mounted against them; &#42; "
             , second: "he slew their strongest men and laid low the youth of Israel."
               }
           , { first: "In spite of all this, they went on sinning &#42; "
             , second: "and had no faith in his wonderful works."
               }
           , { first: "So he brought their days to an end like a breath &#42; "
             , second: "and their years in sudden terror."
               }
           , { first: "Whenever he slew them, they would seek him, &#42; "
             , second: "and repent, and diligently search for God."
               }
           , { first: "They would remember that God was their rock, &#42; "
             , second: "and the Most High God their redeemer."
               }
           , { first: "But they flattered him with their mouths &#42; "
             , second: "and lied to him with their tongues."
               }
           , { first: "Their heart was not steadfast toward him, &#42; "
             , second: "and they were not faithful to his covenant."
               }
           , { first: "But he was so merciful that he forgave their sins and did not destroy them; &#42; "
             , second: "many times he held back his anger and did not permit his wrath to be roused."
               }
           , { first: "For he remembered that they were but flesh, &#42; "
             , second: "a breath that goes forth and does not return."
               }
           , { title: "Part II Quoties exacerbaverunt"
             , first: "How often the people disobeyed him in the wilderness &#42; "
             , second: "and offended him in the desert!"
               }
           , { first: "Again and again they tempted God &#42; "
             , second: "and provoked the Holy One of Israel."
               }
           , { first: "They did not remember his power &#42; "
             , second: "in the day when he ransomed them from the enemy;"
               }
           , { first: "How he wrought his signs in Egypt &#42; "
             , second: "and his omens in the field of Zoan."
               }
           , { first: "He turned their rivers into blood, &#42; "
             , second: "so that they could not drink of their streams."
               }
           , { first: "He sent swarms of flies among them, which ate them up, &#42; "
             , second: "and frogs, which destroyed them."
               }
           , { first: "He gave their crops to the caterpillar, &#42; "
             , second: "the fruit of their toil to the locust."
               }
           , { first: "He killed their vines with hail &#42; "
             , second: "and their sycamores with frost."
               }
           , { first: "He delivered their cattle to hailstones &#42; "
             , second: "and their livestock to hot thunderbolts."
               }
           , { first: "He poured out upon them his blazing anger: &#42; "
             , second: "fury, indignation, and distress, a troop of destroying angels."
               }
           , { first: "He gave full rein to his anger; he did not spare their souls from death; &#42; "
             , second: "but delivered their lives to the plague."
               }
           , { first: "He struck down all the firstborn of Egypt, &#42; "
             , second: "the flower of manhood in the dwellings of Ham."
               }
           , { first: "He led out his people like sheep &#42; "
             , second: "and guided them in the wilderness like a flock."
               }
           , { first: "He led them to safety, and they were not afraid; &#42; "
             , second: "but the sea overwhelmed their enemies."
               }
           , { first: "He brought them to his holy land, &#42; "
             , second: "the mountain his right hand had won."
               }
           , { first: "He drove out the Canaanites before them and apportioned an inheritance to them by lot; &#42; "
             , second: "he made the tribes of Israel to dwell in their tents."
               }
           , { first: "But they tested the Most High God, and defied him, &#42; "
             , second: "and did not keep his commandments."
               }
           , { first: "They turned away and were disloyal like their fathers; &#42; "
             , second: "they were undependable like a warped bow."
               }
           , { first: "They grieved him with their hill-altars &#42; "
             , second: "and provoked his displeasure with their idols."
               }
           , { first: "When God heard this, he was angry &#42; "
             , second: "and utterly rejected Israel."
               }
           , { first: "He forsook the shrine at Shiloh, &#42; "
             , second: "the tabernacle where he had lived among his people."
               }
           , { first: "He delivered the ark into captivity, &#42; "
             , second: "his glory into the adversary’s hand."
               }
           , { first: "He gave his people to the sword &#42; "
             , second: "and was angered against his inheritance."
               }
           , { first: "The fire consumed their young men; &#42; "
             , second: "there were no wedding songs for their maidens."
               }
           , { first: "Their priests fell by the sword, &#42; "
             , second: "and their widows made no lamentation."
               }
           , { first: "Then the Lord woke as though from sleep, &#42; "
             , second: "like a warrior refreshed with wine."
               }
           , { first: "He struck his enemies on the backside &#42; "
             , second: "and put them to perpetual shame."
               }
           , { first: "He rejected the tent of Joseph &#42; "
             , second: "and did not choose the tribe of Ephraim;"
               }
           , { first: "He chose instead the tribe of Judah &#42; "
             , second: "and Mount Zion, which he loved."
               }
           , { first: "He built his sanctuary like the heights of heaven, &#42; "
             , second: "like the earth which he founded for ever."
               }
           , { first: "He chose David his servant, &#42; "
             , second: "and took him away from the sheepfolds."
               }
           , { first: "He brought him from following the ewes, &#42; "
             , second: "to be a shepherd over Jacob his people and over Israel his inheritance."
               }
           , { first: "So he shepherded them with a faithful and true heart &#42; "
             , second: "and guided them with the skillfulness of his hands."
               }
             ]
    }
  , 79:
    { name: "Psalm 79."
    , title: "Deus, venerunt"
    , vss: [ { first: "O God, the heathen have come into your inheritance; they have profaned your holy temple; &#42; "
             , second: "they have made Jerusalem a heap of rubble."
               }
           , { first: "They have given the bodies of your servants as food for the birds of the air, &#42; "
             , second: "and the flesh of your faithful ones to the beasts of the field."
               }
           , { first: "They have shed their blood like water on every side of Jerusalem, &#42; "
             , second: "and there was no one to bury them."
               }
           , { first: "We have become a reproach to our neighbors, &#42; "
             , second: "an object of scorn and derision to those around us."
               }
           , { first: "How long will you be angry, O Lord? &#42; "
             , second: "will your fury blaze like fire for ever?"
               }
           , { first: "Pour out your wrath upon the heathen who have not known you &#42; "
             , second: "and upon the kingdoms that have not called upon your Name."
               }
           , { first: "For they have devoured Jacob &#42; "
             , second: "and made his dwelling a ruin."
               }
           , { first: "Remember not our past sins; let your compassion be swift to meet us; &#42; "
             , second: "for we have been brought very low."
               }
           , { first: "Help us, O God our Savior, for the glory of your Name; &#42; "
             , second: "deliver us and forgive us our sins, for your Name’s sake."
               }
           , { first: "Why should the heathen say, “Where is their God?” &#42; "
             , second: "Let it be known among the heathen and in our sight that you avenge the shedding of your servants’ blood."
               }
           , { first: "Let the sorrowful sighing of the prisoners come before you, &#42; "
             , second: "and by your great might spare those who are condemned to die."
               }
           , { first: "May the revilings with which they reviled you, O Lord, &#42; "
             , second: "return seven-fold into their bosoms."
               }
           , { first: "For we are your people and the sheep of your pasture; &#42; "
             , second: "we will give you thanks for ever and show forth your praise from age to age."
               }
             ]
    }
  , 80:
    { name: "Psalm 80."
    , title: "Qui regis Israel"
    , vss: [ { first: "Hear, O Shepherd of Israel, leading Joseph like a flock; &#42; "
             , second: "shine forth, you that are enthroned upon the cherubim."
               }
           , { first: "In the presence of Ephraim, Benjamin, and Manasseh, &#42; "
             , second: "stir up your strength and come to help us."
               }
           , { first: "Restore us, O God of hosts; &#42; "
             , second: "show the light of your countenance, and we shall be saved."
               }
           , { first: "O Lord God of hosts, &#42; "
             , second: "how long will you be angered despite the prayers of your people?"
               }
           , { first: "You have fed them with the bread of tears; &#42; "
             , second: "you have given them bowls of tears to drink."
               }
           , { first: "You have made us the derision of our neighbors, &#42; "
             , second: "and our enemies laugh us to scorn."
               }
           , { first: "Restore us, O God of hosts; &#42; "
             , second: "show the light of your countenance, and we shall be saved."
               }
           , { first: "You have brought a vine out of Egypt; &#42; "
             , second: "you cast out the nations and planted it."
               }
           , { first: "You prepared the ground for it; &#42; "
             , second: "it took root and filled the land."
               }
           , { first: "The mountains were covered by its shadow &#42; "
             , second: "and the towering cedar trees by its boughs."
               }
           , { first: "You stretched out its tendrils to the Sea &#42; "
             , second: "and its branches to the River."
               }
           , { first: "Why have you broken down its wall, &#42; "
             , second: "so that all who pass by pluck off its grapes?"
               }
           , { first: "The wild boar of the forest has ravaged it, &#42; "
             , second: "and the beasts of the field have grazed upon it."
               }
           , { first: "Turn now, O God of hosts, look down from heaven; behold and tend this vine; &#42; "
             , second: "preserve what your right hand has planted."
               }
           , { first: "They burn it with fire like rubbish; &#42; "
             , second: "at the rebuke of your countenance let them perish."
               }
           , { first: "Let your hand be upon the man of your right hand, &#42; "
             , second: "the son of man you have made so strong for yourself."
               }
           , { first: "And so will we never turn away from you; &#42; "
             , second: "give us life, that we may call upon your Name."
               }
           , { first: "Restore us, O Lord God of hosts; &#42; "
             , second: "show the light of your countenance, and we shall be saved."
               }
             ]
    }
  , 81:
    { name: "Psalm 81."
    , title: "Exultate Deo"
    , vss: [ { first: "Sing with joy to God our strength &#42; "
             , second: "and raise a loud shout to the God of Jacob."
               }
           , { first: "Raise a song and sound the timbrel, &#42; "
             , second: "the merry harp, and the lyre."
               }
           , { first: "Blow the ram’s-horn at the new moon, &#42; "
             , second: "and at the full moon, the day of our feast."
               }
           , { first: "For this is a statute for Israel, &#42; "
             , second: "a law of the God of Jacob."
               }
           , { first: "He laid it as a solemn charge upon Joseph, &#42; "
             , second: "when he came out of the land of Egypt."
               }
           , { first: "I heard an unfamiliar voice saying, &#42; "
             , second: "“I eased his shoulder from the burden; his hands were set free from bearing the load.”"
               }
           , { first: "You called on me in trouble, and I saved you; &#42; "
             , second: "I answered you from the secret place of thunder and tested you at the waters of Meribah."
               }
           , { first: "Hear, O my people, and I will admonish you: &#42; "
             , second: "O Israel, if you would but listen to me!"
               }
           , { first: "There shall be no strange god among you; &#42; "
             , second: "you shall not worship a foreign god."
               }
           , { first: "I am the Lord your God, who brought you out of the land of Egypt and said, &#42; "
             , second: "“Open your mouth wide, and I will fill it.”"
               }
           , { first: "And yet my people did not hear my voice, &#42; "
             , second: "and Israel would not obey me."
               }
           , { first: "So I gave them over to the stubbornness of their hearts, &#42; "
             , second: "to follow their own devices."
               }
           , { first: "Oh, that my people would listen to me! &#42; "
             , second: "that Israel would walk in my ways!"
               }
           , { first: "I should soon subdue their enemies &#42; "
             , second: "and turn my hand against their foes."
               }
           , { first: "Those who hate the Lord would cringe before him, &#42; "
             , second: "and their punishment would last for ever."
               }
           , { first: "But Israel would I feed with the finest wheat &#42; "
             , second: "and satisfy him with honey from the rock."
               }
             ]
    }
  , 82:
    { name: "Psalm 82."
    , title: "Deus stetit"
    , vss: [ { first: "God takes his stand in the council of heaven; &#42; "
             , second: "he gives judgment in the midst of the gods:"
               }
           , { first: "“How long will you judge unjustly, &#42; "
             , second: "and show favor to the wicked?"
               }
           , { first: "Save the weak and the orphan; &#42; "
             , second: "defend the humble and needy;"
               }
           , { first: "Rescue the weak and the poor; &#42; "
             , second: "deliver them from the power of the wicked."
               }
           , { first: "They do not know, neither do they understand; they go about in darkness; &#42; "
             , second: "all the foundations of the earth are shaken."
               }
           , { first: "Now I say to you, ‘You are gods, &#42; "
             , second: "and all of you children of the Most High;"
               }
           , { first: "Nevertheless, you shall die like mortals, &#42; "
             , second: "and fall like any prince.’”"
               }
           , { first: "Arise, O God, and rule the earth, &#42; "
             , second: "for you shall take all nations for your own."
               }
             ]
    }
  , 83:
    { name: "Psalm 83."
    , title: "Deus, quis similis?"
    , vss: [ { first: "O God, do not be silent; &#42; "
             , second: "do not keep still nor hold your peace, O God;"
               }
           , { first: "For your enemies are in tumult, &#42; "
             , second: "and those who hate you have lifted up their heads."
               }
           , { first: "They take secret counsel against your people &#42; "
             , second: "and plot against those whom you protect."
               }
           , { first: "They have said, “Come, let us wipe them out from among the nations; &#42; "
             , second: "let the name of Israel be remembered no more.”"
               }
           , { first: "They have conspired together; &#42; "
             , second: "they have made an alliance against you:"
               }
           , { first: "The tents of Edom and the Ishmaelites; &#42; "
             , second: "the Moabites and the Hagarenes;"
               }
           , { first: "Gebal, and Ammon, and Amalek; &#42; "
             , second: "the Philistines and those who dwell in Tyre."
               }
           , { first: "The Assyrians also have joined them, &#42; "
             , second: "and have come to help the people of Lot."
               }
           , { first: "Do to them as you did to Midian, &#42; "
             , second: "to Sisera, and to Jabin at the river of Kishon:"
               }
           , { first: "They were destroyed at Endor; &#42; "
             , second: "they became like dung upon the ground."
               }
           , { first: "Make their leaders like Oreb and Zeëb, &#42; "
             , second: "and all their commanders like Zebah and Zalmunna,"
               }
           , { first: "Who said, “Let us take for ourselves &#42; "
             , second: "the fields of God as our possession.”"
               }
           , { first: "O my God, make them like whirling dust &#42; "
             , second: "and like chaff before the wind;"
               }
           , { first: "Like fire that burns down a forest, &#42; "
             , second: "like the flame that sets mountains ablaze."
               }
           , { first: "Drive them with your tempest &#42; "
             , second: "and terrify them with your storm;"
               }
           , { first: "Cover their faces with shame, O Lord, &#42; "
             , second: "that they may seek your Name."
               }
           , { first: "Let them be disgraced and terrified for ever; &#42; "
             , second: "let them be put to confusion and perish."
               }
           , { first: "Let them know that you, whose Name is Yahweh, &#42; "
             , second: "you alone are the Most High over all the earth."
               }
             ]
    }
  , 84:
    { name: "Psalm 84."
    , title: "Quam dilecta!"
    , vss: [ { first: "How dear to me is your dwelling, O Lord of hosts! &#42; "
             , second: "My soul has a desire and longing for the courts of the Lord; my heart and my flesh rejoice in the living God."
               }
           , { first: "The sparrow has found her a house and the swallow a nest where she may lay her young; &#42; "
             , second: "by the side of your altars, O Lord of hosts, my King and my God."
               }
           , { first: "Happy are they who dwell in your house! &#42; "
             , second: "they will always be praising you."
               }
           , { first: "Happy are the people whose strength is in you! &#42; "
             , second: "whose hearts are set on the pilgrims’ way."
               }
           , { first: "Those who go through the desolate valley will find it a place of springs, &#42; "
             , second: "for the early rains have covered it with pools of water."
               }
           , { first: "They will climb from height to height, &#42; "
             , second: "and the God of gods will reveal himself in Zion."
               }
           , { first: "Lord God of hosts, hear my prayer; &#42; "
             , second: "hearken, O God of Jacob."
               }
           , { first: "Behold our defender, O God; &#42; "
             , second: "and look upon the face of your Anointed."
               }
           , { first: "For one day in your courts is better than a thousand in my own room, &#42; "
             , second: "and to stand at the threshold of the house of my God than to dwell in the tents of the wicked."
               }
           , { first: "For the Lord God is both sun and shield; &#42; "
             , second: "he will give grace and glory;"
               }
           , { first: "No good thing will the Lord withhold &#42; "
             , second: "from those who walk with integrity."
               }
           , { first: "O Lord of hosts, &#42; "
             , second: "happy are they who put their trust in you!"
               }
             ]
    }
  , 85:
    { name: "Psalm 85."
    , title: "Benedixisti, Domine"
    , vss: [ { first: "You have been gracious to your land, O Lord, &#42; "
             , second: "you have restored the good fortune of Jacob."
               }
           , { first: "You have forgiven the iniquity of your people &#42; "
             , second: "and blotted out all their sins."
               }
           , { first: "You have withdrawn all your fury &#42; "
             , second: "and turned yourself from your wrathful indignation."
               }
           , { first: "Restore us then, O God our Savior; &#42; "
             , second: "let your anger depart from us."
               }
           , { first: "Will you be displeased with us for ever? &#42; "
             , second: "will you prolong your anger from age to age?"
               }
           , { first: "Will you not give us life again, &#42; "
             , second: "that your people may rejoice in you?"
               }
           , { first: "Show us your mercy, O Lord, &#42; "
             , second: "and grant us your salvation."
               }
           , { first: "I will listen to what the Lord God is saying, &#42; "
             , second: "for he is speaking peace to his faithful people and to those who turn their hearts to him."
               }
           , { first: "Truly, his salvation is very near to those who fear him, &#42; "
             , second: "that his glory may dwell in our land."
               }
           , { first: "Mercy and truth have met together; &#42; "
             , second: "righteousness and peace have kissed each other."
               }
           , { first: "Truth shall spring up from the earth, &#42; "
             , second: "and righteousness shall look down from heaven."
               }
           , { first: "The Lord will indeed grant prosperity, &#42; "
             , second: "and our land will yield its increase."
               }
           , { first: "Righteousness shall go before him, &#42; "
             , second: "and peace shall be a pathway for his feet."
               }
             ]
    }
  , 86:
    { name: "Psalm 86."
    , title: "Inclina, Domine"
    , vss: [ { first: "Bow down your ear, O Lord, and answer me, &#42; "
             , second: "for I am poor and in misery."
               }
           , { first: "Keep watch over my life, for I am faithful; &#42; "
             , second: "save your servant who puts his trust in you."
               }
           , { first: "Be merciful to me, O Lord, for you are my God; &#42; "
             , second: "I call upon you all the day long."
               }
           , { first: "Gladden the soul of your servant, &#42; "
             , second: "for to you, O Lord, I lift up my soul."
               }
           , { first: "For you, O Lord, are good and forgiving, &#42; "
             , second: "and great is your love toward all who call upon you."
               }
           , { first: "Give ear, O Lord, to my prayer, &#42; "
             , second: "and attend to the voice of my supplications."
               }
           , { first: "In the time of my trouble I will call upon you, &#42; "
             , second: "for you will answer me."
               }
           , { first: "Among the gods there is none like you, O Lord, &#42; "
             , second: "nor anything like your works."
               }
           , { first: "All nations you have made will come and worship you, O Lord, &#42; "
             , second: "and glorify your Name."
               }
           , { first: "For you are great; you do wondrous things; &#42; "
             , second: "and you alone are God."
               }
           , { first: "Teach me your way, O Lord, and I will walk in your truth; &#42; "
             , second: "knit my heart to you that I may fear your Name."
               }
           , { first: "I will thank you, O Lord my God, with all my heart, &#42; "
             , second: "and glorify your Name for evermore."
               }
           , { first: "For great is your love toward me; &#42; "
             , second: "you have delivered me from the nethermost Pit."
               }
           , { first: "The arrogant rise up against me, O God, and a band of violent men seeks my life; &#42; "
             , second: "they have not set you before their eyes."
               }
           , { first: "But you, O Lord, are gracious and full of compassion, &#42; "
             , second: "slow to anger, and full of kindness and truth."
               }
           , { first: "Turn to me and have mercy upon me; &#42; "
             , second: "give your strength to your servant; and save the child of your handmaid."
               }
           , { first: "Show me a sign of your favor, so that those who hate me may see it and be ashamed; &#42; "
             , second: "because you, O Lord, have helped me and comforted me."
               }
             ]
    }
  , 87:
    { name: "Psalm 87."
    , title: "Fundamenta ejus"
    , vss: [ { first: "On the holy mountain stands the city he has founded; &#42; "
             , second: "the Lord loves the gates of Zion more than all the dwellings of Jacob."
               }
           , { first: "Glorious things are spoken of you, &#42; "
             , second: "O city of our God."
               }
           , { first: "I count Egypt and Babylon among those who know me; &#42; "
             , second: "behold Philistia, Tyre, and Ethiopia: in Zion were they born."
               }
           , { first: "Of Zion it shall be said, “Everyone was born in her, &#42; "
             , second: "and the Most High himself shall sustain her.”"
               }
           , { first: "The Lord will record as he enrolls the peoples, &#42; "
             , second: "“These also were born there.”"
               }
           , { first: "The singers and the dancers will say, &#42; "
             , second: "“All my fresh springs are in you.”"
               }
             ]
    }
  , 88:
    { name: "Psalm 88."
    , title: "Domine, Deus"
    , vss: [ { first: "O Lord, my God, my Savior, &#42; "
             , second: "by day and night I cry to you."
               }
           , { first: "Let my prayer enter into your presence; &#42; "
             , second: "incline your ear to my lamentation."
               }
           , { first: "For I am full of trouble; &#42; "
             , second: "my life is at the brink of the grave."
               }
           , { first: "I am counted among those who go down to the Pit; &#42; "
             , second: "I have become like one who has no strength;"
               }
           , { first: "Lost among the dead, &#42; "
             , second: "like the slain who lie in the grave,"
               }
           , { first: "Whom you remember no more, &#42; "
             , second: "for they are cut off from your hand."
               }
           , { first: "You have laid me in the depths of the Pit, &#42; "
             , second: "in dark places, and in the abyss."
               }
           , { first: "Your anger weighs upon me heavily, &#42; "
             , second: "and all your great waves overwhelm me."
               }
           , { first: "You have put my friends far from me; you have made me to be abhorred by them; &#42; "
             , second: "I am in prison and cannot get free."
               }
           , { first: "My sight has failed me because of trouble; &#42; "
             , second: "Lord, I have called upon you daily; I have stretched out my hands to you."
               }
           , { first: "Do you work wonders for the dead? &#42; "
             , second: "will those who have died stand up and give you thanks?"
               }
           , { first: "Will your loving-kindness be declared in the grave? &#42; "
             , second: "your faithfulness in the land of destruction?"
               }
           , { first: "Will your wonders be known in the dark? &#42; "
             , second: "or your righteousness in the country where all is forgotten?"
               }
           , { first: "But as for me, O Lord, I cry to you for help; &#42; "
             , second: "in the morning my prayer comes before you."
               }
           , { first: "Lord, why have you rejected me? &#42; "
             , second: "why have you hidden your face from me?"
               }
           , { first: "Ever since my youth, I have been wretched and at the point of death; &#42; "
             , second: "I have borne your terrors with a troubled mind."
               }
           , { first: "Your blazing anger has swept over me; &#42; "
             , second: "your terrors have destroyed me;"
               }
           , { first: "They surround me all day long like a flood; &#42; "
             , second: "they encompass me on every side."
               }
           , { first: "My friend and my neighbor you have put away from me, &#42; "
             , second: "and darkness is my only companion."
               }
             ]
    }
  , 89:
    { name: "Psalm 89."
    , title: ""
    , vss: [ { title: "Part I Misericordias Domini"
             , first: "Your love, O Lord, for ever will I sing; &#42; "
             , second: "from age to age my mouth will proclaim your faithfulness."
               }
           , { first: "For I am persuaded that your love is established for ever; &#42; "
             , second: "you have set your faithfulness firmly in the heavens."
               }
           , { first: "“I have made a covenant with my chosen one; &#42; "
             , second: "I have sworn an oath to David my servant:"
               }
           , { first: "‘I will establish your line for ever, &#42; "
             , second: "and preserve your throne for all generations.’”"
               }
           , { first: "The heavens bear witness to your wonders, O Lord, &#42; "
             , second: "and to your faithfulness in the assembly of the holy ones;"
               }
           , { first: "For who in the skies can be compared to the Lord? &#42; "
             , second: "who is like the Lord among the gods?"
               }
           , { first: "God is much to be feared in the council of the holy ones, &#42; "
             , second: "great and terrible to all those round about him."
               }
           , { first: "Who is like you, Lord God of hosts? &#42; "
             , second: "O mighty Lord, your faithfulness is all around you."
               }
           , { first: "You rule the raging of the sea &#42; "
             , second: "and still the surging of its waves."
               }
           , { first: "You have crushed Rahab of the deep with a deadly wound; &#42; "
             , second: "you have scattered your enemies with your mighty arm."
               }
           , { first: "Yours are the heavens; the earth also is yours; &#42; "
             , second: "you laid the foundations of the world and all that is in it."
               }
           , { first: "You have made the north and the south; &#42; "
             , second: "Tabor and Hermon rejoice in your Name."
               }
           , { first: "You have a mighty arm; &#42; "
             , second: "strong is your hand and high is your right hand."
               }
           , { first: "Righteousness and justice are the foundations of your throne; &#42; "
             , second: "love and truth go before your face."
               }
           , { first: "Happy are the people who know the festal shout! &#42; "
             , second: "they walk, O Lord, in the light of your presence."
               }
           , { first: "They rejoice daily in your Name; &#42; "
             , second: "they are jubilant in your righteousness."
               }
           , { first: "For you are the glory of their strength, &#42; "
             , second: "and by your favor our might is exalted."
               }
           , { first: "Truly, the Lord is our ruler; &#42; "
             , second: "the Holy One of Israel is our King."
               }
           , { title: "Part II Tunc locutus es"
             , first: "You spoke once in a vision and said to your faithful people: &#42; "
             , second: "“I have set the crown upon a warrior and have exalted one chosen out of the people."
               }
           , { first: "I have found David my servant; &#42; "
             , second: "with my holy oil have I anointed him."
               }
           , { first: "My hand will hold him fast &#42; "
             , second: "and my arm will make him strong."
               }
           , { first: "No enemy shall deceive him, &#42; "
             , second: "nor any wicked man bring him down."
               }
           , { first: "I will crush his foes before him &#42; "
             , second: "and strike down those who hate him."
               }
           , { first: "My faithfulness and love shall be with him, &#42; "
             , second: "and he shall be victorious through my Name."
               }
           , { first: "I shall make his dominion extend &#42; "
             , second: "from the Great Sea to the River."
               }
           , { first: "He will say to me, ‘You are my Father, &#42; "
             , second: "my God, and the rock of my salvation.’"
               }
           , { first: "I will make him my firstborn &#42; "
             , second: "and higher than the kings of the earth."
               }
           , { first: "I will keep my love for him for ever, &#42; "
             , second: "and my covenant will stand firm for him."
               }
           , { first: "I will establish his line for ever &#42; "
             , second: "and his throne as the days of heaven.”"
               }
           , { first: "“If his children forsake my law &#42; "
             , second: "and do not walk according to my judgments;"
               }
           , { first: "If they break my statutes &#42; "
             , second: "and do not keep my commandments;"
               }
           , { first: "I will punish their transgressions with a rod &#42; "
             , second: "and their iniquities with the lash;"
               }
           , { first: "But I will not take my love from him, &#42; "
             , second: "nor let my faithfulness prove false."
               }
           , { first: "I will not break my covenant, &#42; "
             , second: "nor change what has gone out of my lips."
               }
           , { first: "Once for all I have sworn by my holiness: &#42; "
             , second: "I will not lie to David."
               }
           , { first: "His line shall endure for ever &#42; "
             , second: "and his throne as the sun before me;"
               }
           , { first: "It shall stand fast for evermore like the moon, &#42; "
             , second: "the abiding witness in the sky.’”"
               }
           , { first: "But you have cast off and rejected your anointed; &#42; "
             , second: "you have become enraged at him."
               }
           , { first: "You have broken your covenant with your servant, &#42; "
             , second: "defiled his crown, and hurled it to the ground."
               }
           , { first: "You have breached all his walls &#42; "
             , second: "and laid his strongholds in ruins."
               }
           , { first: "All who pass by despoil him; &#42; "
             , second: "he has become the scorn of his neighbors."
               }
           , { first: "You have exalted the right hand of his foes &#42; "
             , second: "and made all his enemies rejoice."
               }
           , { first: "You have turned back the edge of his sword &#42; "
             , second: "and have not sustained him in battle."
               }
           , { first: "You have put an end to his splendor &#42; "
             , second: "and cast his throne to the ground."
               }
           , { first: "You have cut short the days of his youth &#42; "
             , second: "and have covered him with shame."
               }
           , { first: "How long will you hide yourself, O Lord? will you hide yourself for ever? &#42; "
             , second: "how long will your anger burn like fire?"
               }
           , { first: "Remember, Lord, how short life is, &#42; "
             , second: "how frail you have made all flesh."
               }
           , { first: "Who can live and not see death? &#42; "
             , second: "who can save himself from the power of the grave?"
               }
           , { first: "Where, Lord, are your loving-kindnesses of old, &#42; "
             , second: "which you promised David in your faithfulness?"
               }
           , { first: "Remember, Lord, how your servant is mocked, &#42; "
             , second: "how I carry in my bosom the taunts of many peoples,"
               }
           , { first: "The taunts your enemies have hurled, O Lord, &#42; "
             , second: "which they hurled at the heels of your anointed."
               }
           , { first: "Blessed be the Lord for evermore! &#42; "
             , second: "Amen, I say, Amen."
               }
             ]
    }
  , 90:
    { name: "Psalm 90."
    , title: "Domine, refugium"
    , vss: [ { first: "Lord, you have been our refuge &#42; "
             , second: "from one generation to another."
               }
           , { first: "Before the mountains were brought forth, or the land and the earth were born, &#42; "
             , second: "from age to age you are God."
               }
           , { first: "You turn us back to the dust and say, &#42; "
             , second: "“Go back, O child of earth.”"
               }
           , { first: "For a thousand years in your sight are like yesterday when it is past &#42; "
             , second: "and like a watch in the night."
               }
           , { first: "You sweep us away like a dream; &#42; "
             , second: "we fade away suddenly like the grass."
               }
           , { first: "In the morning it is green and flourishes; &#42; "
             , second: "in the evening it is dried up and withered."
               }
           , { first: "For we consume away in your displeasure; &#42; "
             , second: "we are afraid because of your wrathful indignation."
               }
           , { first: "Our iniquities you have set before you, &#42; "
             , second: "and our secret sins in the light of your countenance."
               }
           , { first: "When you are angry, all our days are gone; &#42; "
             , second: "we bring our years to an end like a sigh."
               }
           , { first: "The span of our life is seventy years, perhaps in strength even eighty; &#42; "
             , second: "yet the sum of them is but labor and sorrow, for they pass away quickly and we are gone."
               }
           , { first: "Who regards the power of your wrath? &#42; "
             , second: "who rightly fears your indignation?"
               }
           , { first: "So teach us to number our days &#42; "
             , second: "that we may apply our hearts to wisdom."
               }
           , { first: "Return, O Lord; how long will you tarry? &#42; "
             , second: "be gracious to your servants."
               }
           , { first: "Satisfy us by your loving-kindness in the morning; &#42; "
             , second: "so shall we rejoice and be glad all the days of our life."
               }
           , { first: "Make us glad by the measure of the days that you afflicted us &#42; "
             , second: "and the years in which we suffered adversity."
               }
           , { first: "Show your servants your works &#42; "
             , second: "and your splendor to their children."
               }
           , { first: "May the graciousness of the Lord our God be upon us; &#42; "
             , second: "prosper the work of our hands; prosper our handiwork."
               }
             ]
    }
  , 91:
    { name: "Psalm 91."
    , title: "Qui habitat"
    , vss: [ { first: "He who dwells in the shelter of the Most High, &#42; "
             , second: "abides under the shadow of the Almighty."
               }
           , { first: "He shall say to the Lord, “You are my refuge and my stronghold, &#42; "
             , second: "my God in whom I put my trust.”"
               }
           , { first: "He shall deliver you from the snare of the hunter &#42; "
             , second: "and from the deadly pestilence."
               }
           , { first: "He shall cover you with his pinions, and you shall find refuge under his wings; &#42; "
             , second: "his faithfulness shall be a shield and buckler."
               }
           , { first: "You shall not be afraid of any terror by night, &#42; "
             , second: "nor of the arrow that flies by day;"
               }
           , { first: "Of the plague that stalks in the darkness, &#42; "
             , second: "nor of the sickness that lays waste at mid-day."
               }
           , { first: "A thousand shall fall at your side and ten thousand at your right hand, &#42; "
             , second: "but it shall not come near you."
               }
           , { first: "Your eyes have only to behold &#42; "
             , second: "to see the reward of the wicked."
               }
           , { first: "Because you have made the Lord your refuge, &#42; "
             , second: "and the Most High your habitation,"
               }
           , { first: "There shall no evil happen to you, &#42; "
             , second: "neither shall any plague come near your dwelling."
               }
           , { first: "For he shall give his angels charge over you, &#42; "
             , second: "to keep you in all your ways."
               }
           , { first: "They shall bear you in their hands, &#42; "
             , second: "lest you dash your foot against a stone."
               }
           , { first: "You shall tread upon the lion and adder; &#42; "
             , second: "you shall trample the young lion and the serpent under your feet."
               }
           , { first: "Because he is bound to me in love, therefore will I deliver him; &#42; "
             , second: "I will protect him, because he knows my Name."
               }
           , { first: "He shall call upon me, and I will answer him; &#42; "
             , second: "I am with him in trouble; I will rescue him and bring him to honor."
               }
           , { first: "With long life will I satisfy him, &#42; "
             , second: "and show him my salvation."
               }
             ]
    }
  , 92:
    { name: "Psalm 92."
    , title: "Bonum est confiteri"
    , vss: [ { first: "It is a good thing to give thanks to the Lord, &#42; "
             , second: "and to sing praises to your Name, O Most High;"
               }
           , { first: "To tell of your loving-kindness early in the morning &#42; "
             , second: "and of your faithfulness in the night season;"
               }
           , { first: "On the psaltery, and on the lyre, &#42; "
             , second: "and to the melody of the harp."
               }
           , { first: "For you have made me glad by your acts, O Lord; &#42; "
             , second: "and I shout for joy because of the works of your hands."
               }
           , { first: "Lord, how great are your works! &#42; "
             , second: "your thoughts are very deep."
               }
           , { first: "The dullard does not know, nor does the fool understand, &#42; "
             , second: "that though the wicked grow like weeds, and all the workers of iniquity flourish,"
               }
           , { first: "They flourish only to be destroyed for ever; &#42; "
             , second: "but you, O Lord, are exalted for evermore."
               }
           , { first: "For lo, your enemies, O Lord, lo, your enemies shall perish, &#42; "
             , second: "and all the workers of iniquity shall be scattered."
               }
           , { first: "But my horn you have exalted like the horns of wild bulls; &#42; "
             , second: "I am anointed with fresh oil."
               }
           , { first: "My eyes also gloat over my enemies, &#42; "
             , second: "and my ears rejoice to hear the doom of the wicked who rise up against me."
               }
           , { first: "The righteous shall flourish like a palm tree, &#42; "
             , second: "and shall spread abroad like a cedar of Lebanon."
               }
           , { first: "Those who are planted in the house of the Lord &#42; "
             , second: "shall flourish in the courts of our God;"
               }
           , { first: "They shall still bear fruit in old age; &#42; "
             , second: "they shall be green and succulent;"
               }
           , { first: "That they may show how upright the Lord is, &#42; "
             , second: "my Rock, in whom there is no fault."
               }
             ]
    }
  , 93:
    { name: "Psalm 93."
    , title: "Dominus regnavit"
    , vss: [ { first: "The Lord is King; he has put on splendid apparel; &#42; "
             , second: "the Lord has put on his apparel and girded himself with strength."
               }
           , { first: "He has made the whole world so sure &#42; "
             , second: "that it cannot be moved;"
               }
           , { first: "Ever since the world began, your throne has been established; &#42; "
             , second: "you are from everlasting."
               }
           , { first: "The waters have lifted up, O Lord, the waters have lifted up their voice; &#42; "
             , second: "the waters have lifted up their pounding waves."
               }
           , { first: "Mightier than the sound of many waters, mightier than the breakers of the sea, &#42; "
             , second: "mightier is the Lord who dwells on high."
               }
           , { first: "Your testimonies are very sure, &#42; "
             , second: "and holiness adorns your house, O Lord, for ever and for evermore."
               }
             ]
    }
  , 94:
    { name: "Psalm 94."
    , title: "Deus ultionum"
    , vss: [ { first: "O Lord God of vengeance, &#42; "
             , second: "O God of vengeance, show yourself."
               }
           , { first: "Rise up, O Judge of the world; &#42; "
             , second: "give the arrogant their just deserts."
               }
           , { first: "How long shall the wicked, O Lord, &#42; "
             , second: "how long shall the wicked triumph?"
               }
           , { first: "They bluster in their insolence; &#42; "
             , second: "all evildoers are full of boasting."
               }
           , { first: "They crush your people, O Lord, &#42; "
             , second: "and afflict your chosen nation."
               }
           , { first: "They murder the widow and the stranger &#42; "
             , second: "and put the orphans to death."
               }
           , { first: "Yet they say, “The Lord does not see, &#42; "
             , second: "the God of Jacob takes no notice.”"
               }
           , { first: "Consider well, you dullards among the people; &#42; "
             , second: "when will you fools understand?"
               }
           , { first: "He that planted the ear, does he not hear? &#42; "
             , second: "he that formed the eye, does he not see?"
               }
           , { first: "He who admonishes the nations, will he not punish? &#42; "
             , second: "he who teaches all the world, has he no knowledge?"
               }
           , { first: "The Lord knows our human thoughts; &#42; "
             , second: "how like a puff of wind they are."
               }
           , { first: "Happy are they whom you instruct, O Lord! &#42; "
             , second: "whom you teach out of your law;"
               }
           , { first: "To give them rest in evil days, &#42; "
             , second: "until a pit is dug for the wicked."
               }
           , { first: "For the Lord will not abandon his people, &#42; "
             , second: "nor will he forsake his own."
               }
           , { first: "For judgment will again be just, &#42; "
             , second: "and all the true of heart will follow it."
               }
           , { first: "Who rose up for me against the wicked? &#42; "
             , second: "who took my part against the evildoers?"
               }
           , { first: "If the Lord had not come to my help, &#42; "
             , second: "I should soon have dwelt in the land of silence."
               }
           , { first: "As often as I said, “My foot has slipped,” &#42; "
             , second: "your love, O Lord, upheld me."
               }
           , { first: "When many cares fill my mind, &#42; "
             , second: "your consolations cheer my soul."
               }
           , { first: "Can a corrupt tribunal have any part with you, &#42; "
             , second: "one which frames evil into law?"
               }
           , { first: "They conspire against the life of the just &#42; "
             , second: "and condemn the innocent to death."
               }
           , { first: "But the Lord has become my stronghold, &#42; "
             , second: "and my God the rock of my trust."
               }
           , { first: "He will turn their wickedness back upon them and destroy them in their own malice; &#42; "
             , second: "the Lord our God will destroy them."
               }
             ]
    }
  , 95:
    { name: "Psalm 95."
    , title: "Venite, exultemus"
    , vss: [ { first: "Come, let us sing to the Lord; &#42; "
             , second: "let us shout for joy to the Rock of our salvation."
               }
           , { first: "Let us come before his presence with thanksgiving &#42; "
             , second: "and raise a loud shout to him with psalms."
               }
           , { first: "For the Lord is a great God, &#42; "
             , second: "and a great King above all gods."
               }
           , { first: "In his hand are the caverns of the earth, &#42; "
             , second: "and the heights of the hills are his also."
               }
           , { first: "The sea is his, for he made it, &#42; "
             , second: "and his hands have molded the dry land."
               }
           , { first: "Come, let us bow down, and bend the knee, &#42; "
             , second: "and kneel before the Lord our Maker."
               }
           , { first: "For he is our God, and we are the people of his pasture and the sheep of his hand. &#42; "
             , second: "Oh, that today you would hearken to his voice!"
               }
           , { first: "Harden not your hearts, as your forebears did in the wilderness, &#42; "
             , second: "at Meribah, and on that day at Massah, when they tempted me."
               }
           , { first: "They put me to the test, &#42; "
             , second: "though they had seen my works."
               }
           , { first: "Forty years long I detested that generation and said, &#42; "
             , second: "“This people are wayward in their hearts; they do not know my ways.”"
               }
           , { first: "So I swore in my wrath, &#42; "
             , second: "“They shall not enter into my rest.”"
               }
             ]
    }
  , 96:
    { name: "Psalm 96."
    , title: "Cantate Domino"
    , vss: [ { first: "Sing to the Lord a new song; &#42; "
             , second: "sing to the Lord, all the whole earth."
               }
           , { first: "Sing to the Lord and bless his Name; &#42; "
             , second: "proclaim the good news of his salvation from day to day."
               }
           , { first: "Declare his glory among the nations &#42; "
             , second: "and his wonders among all peoples."
               }
           , { first: "For great is the Lord and greatly to be praised; &#42; "
             , second: "he is more to be feared than all gods."
               }
           , { first: "As for all the gods of the nations, they are but idols; &#42; "
             , second: "but it is the Lord who made the heavens."
               }
           , { first: "Oh, the majesty and magnificence of his presence! &#42; "
             , second: "Oh, the power and the splendor of his sanctuary!"
               }
           , { first: "Ascribe to the Lord, you families of the peoples; &#42; "
             , second: "ascribe to the Lord honor and power."
               }
           , { first: "Ascribe to the Lord the honor due his Name; &#42; "
             , second: "bring offerings and come into his courts."
               }
           , { first: "Worship the Lord in the beauty of holiness; &#42; "
             , second: "let the whole earth tremble before him."
               }
           , { first: "Tell it out among the nations: “The Lord is King! &#42; "
             , second: "he has made the world so firm that it cannot be moved; he will judge the peoples with equity.”"
               }
           , { first: "Let the heavens rejoice, and let the earth be glad; let the sea thunder and all that is in it; &#42; "
             , second: "let the field be joyful and all that is therein."
               }
           , { first: "Then shall all the trees of the wood shout for joy before the Lord when he comes, &#42; "
             , second: "when he comes to judge the earth."
               }
           , { first: "He will judge the world with righteousness &#42; "
             , second: "and the peoples with his truth."
               }
             ]
    }
  , 97:
    { name: "Psalm 97."
    , title: "Dominus regnavit"
    , vss: [ { first: "The Lord is King; let the earth rejoice; &#42; "
             , second: "let the multitude of the isles be glad."
               }
           , { first: "Clouds and darkness are round about him, &#42; "
             , second: "righteousness and justice are the foundations of his throne."
               }
           , { first: "A fire goes before him &#42; "
             , second: "and burns up his enemies on every side."
               }
           , { first: "His lightnings light up the world; &#42; "
             , second: "the earth sees it and is afraid."
               }
           , { first: "The mountains melt like wax at the presence of the Lord, &#42; "
             , second: "at the presence of the Lord of the whole earth."
               }
           , { first: "The heavens declare his righteousness, &#42; "
             , second: "and all the peoples see his glory."
               }
           , { first: "Confounded be all who worship carved images and delight in false gods! &#42; "
             , second: "Bow down before him, all you gods."
               }
           , { first: "Zion hears and is glad, and the cities of Judah rejoice, &#42; "
             , second: "because of your judgments, O Lord."
               }
           , { first: "For you are the Lord, most high over all the earth; &#42; "
             , second: "you are exalted far above all gods."
               }
           , { first: "The Lord loves those who hate evil; &#42; "
             , second: "he preserves the lives of his saints and delivers them from the hand of the wicked."
               }
           , { first: "Light has sprung up for the righteous, &#42; "
             , second: "and joyful gladness for those who are truehearted."
               }
           , { first: "Rejoice in the Lord, you righteous, &#42; "
             , second: "and give thanks to his holy Name."
               }
             ]
    }
  , 98:
    { name: "Psalm 98."
    , title: "Cantate Domino"
    , vss: [ { first: "Sing to the Lord a new song, &#42; "
             , second: "for he has done marvelous things."
               }
           , { first: "With his right hand and his holy arm &#42; "
             , second: "has he won for himself the victory."
               }
           , { first: "The Lord has made known his victory; &#42; "
             , second: "his righteousness has he openly shown in the sight of the nations."
               }
           , { first: "He remembers his mercy and faithfulness to the house of Israel, &#42; "
             , second: "and all the ends of the earth have seen the victory of our God."
               }
           , { first: "Shout with joy to the Lord, all you lands; &#42; "
             , second: "lift up your voice, rejoice, and sing."
               }
           , { first: "Sing to the Lord with the harp, &#42; "
             , second: "with the harp and the voice of song."
               }
           , { first: "With trumpets and the sound of the horn &#42; "
             , second: "shout with joy before the King, the Lord."
               }
           , { first: "Let the sea make a noise and all that is in it, &#42; "
             , second: "the lands and those who dwell therein."
               }
           , { first: "Let the rivers clap their hands, &#42; "
             , second: "and let the hills ring out with joy before the Lord, when he comes to judge the earth."
               }
           , { first: "In righteousness shall he judge the world &#42; "
             , second: "and the peoples with equity."
               }
             ]
    }
  , 99:
    { name: "Psalm 99."
    , title: "Dominus regnavit"
    , vss: [ { first: "The Lord is King; let the people tremble; &#42; "
             , second: "he is enthroned upon the cherubim; let the earth shake."
               }
           , { first: "The Lord is great in Zion; &#42; "
             , second: "he is high above all peoples."
               }
           , { first: "Let them confess his Name, which is great and awesome; &#42; "
             , second: "he is the Holy One."
               }
           , { first: "“O mighty King, lover of justice, you have established equity; &#42; "
             , second: "you have executed justice and righteousness in Jacob.”"
               }
           , { first: "Proclaim the greatness of the Lord our God and fall down before his footstool; &#42; "
             , second: "he is the Holy One."
               }
           , { first: "Moses and Aaron among his priests, and Samuel among those who call upon his Name, &#42; "
             , second: "they called upon the Lord, and he answered them."
               }
           , { first: "He spoke to them out of the pillar of cloud; &#42; "
             , second: "they kept his testimonies and the decree that he gave them."
               }
           , { first: "“O Lord our God, you answered them indeed; &#42; "
             , second: "you were a God who forgave them, yet punished them for their evil deeds.”"
               }
           , { first: "Proclaim the greatness of the Lord our God and worship him upon his holy hill; &#42; "
             , second: "for the Lord our God is the Holy One."
               }
             ]
    }
  , 100:
    { name: "Psalm 100."
    , title: "Jubilate Deo"
    , vss: [ { first: "Be joyful in the Lord, all you lands; &#42; "
             , second: "serve the Lord with gladness and come before his presence with a song."
               }
           , { first: "Know this: The Lord himself is God; &#42; "
             , second: "he himself has made us, and we are his; we are his people and the sheep of his pasture."
               }
           , { first: "Enter his gates with thanksgiving; go into his courts with praise; &#42; "
             , second: "give thanks to him and call upon his Name."
               }
           , { first: "For the Lord is good; his mercy is everlasting; &#42; "
             , second: "and his faithfulness endures from age to age."
               }
             ]
    }
  , 101:
    { name: "Psalm 101."
    , title: "Misericordiam et judicium"
    , vss: [ { first: "I will sing of mercy and justice; &#42; "
             , second: "to you, O Lord, will I sing praises."
               }
           , { first: "I will strive to follow a blameless course; oh, when will you come to me? &#42; "
             , second: "I will walk with sincerity of heart within my house."
               }
           , { first: "I will set no worthless thing before my eyes; &#42; "
             , second: "I hate the doers of evil deeds; they shall not remain with me."
               }
           , { first: "A crooked heart shall be far from me; &#42; "
             , second: "I will not know evil."
               }
           , { first: "Those who in secret slander their neighbors I will destroy; &#42; "
             , second: "those who have a haughty look and a proud heart I cannot abide."
               }
           , { first: "My eyes are upon the faithful in the land, that they may dwell with me, &#42; "
             , second: "and only those who lead a blameless life shall be my servants."
               }
           , { first: "Those who act deceitfully shall not dwell in my house, &#42; "
             , second: "and those who tell lies shall not continue in my sight."
               }
           , { first: "I will soon destroy all the wicked in the land, &#42; "
             , second: "that I may root out all evildoers from the city of the Lord."
               }
             ]
    }
  , 102:
    { name: "Psalm 102."
    , title: "Domine, exaudi"
    , vss: [ { first: "Lord, hear my prayer, and let my cry come before you; &#42; "
             , second: "hide not your face from me in the day of my trouble."
               }
           , { first: "Incline your ear to me; &#42; "
             , second: "when I call, make haste to answer me,"
               }
           , { first: "For my days drift away like smoke, &#42; "
             , second: "and my bones are hot as burning coals."
               }
           , { first: "My heart is smitten like grass and withered, &#42; "
             , second: "so that I forget to eat my bread."
               }
           , { first: "Because of the voice of my groaning &#42; "
             , second: "I am but skin and bones."
               }
           , { first: "I have become like a vulture in the wilderness, &#42; "
             , second: "like an owl among the ruins."
               }
           , { first: "I lie awake and groan; &#42; "
             , second: "I am like a sparrow, lonely on a house-top."
               }
           , { first: "My enemies revile me all day long, &#42; "
             , second: "and those who scoff at me have taken an oath against me."
               }
           , { first: "For I have eaten ashes for bread &#42; "
             , second: "and mingled my drink with weeping."
               }
           , { first: "Because of your indignation and wrath &#42; "
             , second: "you have lifted me up and thrown me away."
               }
           , { first: "My days pass away like a shadow, &#42; "
             , second: "and I wither like the grass."
               }
           , { first: "But you, O Lord, endure for ever, &#42; "
             , second: "and your Name from age to age."
               }
           , { first: "You will arise and have compassion on Zion, for it is time to have mercy upon her; &#42; "
             , second: "indeed, the appointed time has come."
               }
           , { first: "For your servants love her very rubble, &#42; "
             , second: "and are moved to pity even for her dust."
               }
           , { first: "The nations shall fear your Name, O Lord, &#42; "
             , second: "and all the kings of the earth your glory."
               }
           , { first: "For the Lord will build up Zion, &#42; "
             , second: "and his glory will appear."
               }
           , { first: "He will look with favor on the prayer of the homeless; &#42; "
             , second: "he will not despise their plea."
               }
           , { first: "Let this be written for a future generation, &#42; "
             , second: "so that a people yet unborn may praise the Lord."
               }
           , { first: "For the Lord looked down from his holy place on high; &#42; "
             , second: "from the heavens he beheld the earth;"
               }
           , { first: "That he might hear the groan of the captive &#42; "
             , second: "and set free those condemned to die;"
               }
           , { first: "That they may declare in Zion the Name of the Lord, &#42; "
             , second: "and his praise in Jerusalem;"
               }
           , { first: "When the peoples are gathered together, &#42; "
             , second: "and the kingdoms also, to serve the Lord."
               }
           , { first: "He has brought down my strength before my time; &#42; "
             , second: "he has shortened the number of my days;"
               }
           , { first: "And I said, “O my God, do not take me away in the midst of my days; &#42; "
             , second: "your years endure throughout all generations."
               }
           , { first: "In the beginning, O Lord, you laid the foundations of the earth, &#42; "
             , second: "and the heavens are the work of your hands;"
               }
           , { first: "They shall perish, but you will endure; they all shall wear out like a garment; &#42; "
             , second: "as clothing you will change them, and they shall be changed;"
               }
           , { first: "But you are always the same, &#42; "
             , second: "and your years will never end."
               }
           , { first: "The children of your servants shall continue, &#42; "
             , second: "and their offspring shall stand fast in your sight.”"
               }
             ]
    }
  , 103:
    { name: "Psalm 103."
    , title: "Benedic, anima mea"
    , vss: [ { first: "Bless the Lord, O my soul, &#42; "
             , second: "and all that is within me, bless his holy Name."
               }
           , { first: "Bless the Lord, O my soul, &#42; "
             , second: "and forget not all his benefits."
               }
           , { first: "He forgives all your sins &#42; "
             , second: "and heals all your infirmities;"
               }
           , { first: "He redeems your life from the grave &#42; "
             , second: "and crowns you with mercy and loving-kindness;"
               }
           , { first: "He satisfies you with good things, &#42; "
             , second: "and your youth is renewed like an eagle’s."
               }
           , { first: "The Lord executes righteousness &#42; "
             , second: "and judgment for all who are oppressed."
               }
           , { first: "He made his ways known to Moses &#42; "
             , second: "and his works to the children of Israel."
               }
           , { first: "The Lord is full of compassion and mercy, &#42; "
             , second: "slow to anger and of great kindness."
               }
           , { first: "He will not always accuse us, &#42; "
             , second: "nor will he keep his anger for ever."
               }
           , { first: "He has not dealt with us according to our sins, &#42; "
             , second: "nor rewarded us according to our wickedness."
               }
           , { first: "For as the heavens are high above the earth, &#42; "
             , second: "so is his mercy great upon those who fear him."
               }
           , { first: "As far as the east is from the west, &#42; "
             , second: "so far has he removed our sins from us."
               }
           , { first: "As a father cares for his children, &#42; "
             , second: "so does the Lord care for those who fear him."
               }
           , { first: "For he himself knows whereof we are made; &#42; "
             , second: "he remembers that we are but dust."
               }
           , { first: "Our days are like the grass; &#42; "
             , second: "we flourish like a flower of the field;"
               }
           , { first: "When the wind goes over it, it is gone, &#42; "
             , second: "and its place shall know it no more."
               }
           , { first: "But the merciful goodness of the Lord endures for ever on those who fear him, &#42; "
             , second: "and his righteousness on children’s children;"
               }
           , { first: "On those who keep his covenant &#42; "
             , second: "and remember his commandments and do them."
               }
           , { first: "The Lord has set his throne in heaven, &#42; "
             , second: "and his kingship has dominion over all."
               }
           , { first: "Bless the Lord, you angels of his, you mighty ones who do his bidding, &#42; "
             , second: "and hearken to the voice of his word."
               }
           , { first: "Bless the Lord, all you his hosts, &#42; "
             , second: "you ministers of his who do his will."
               }
           , { first: "Bless the Lord, all you works of his, in all places of his dominion; &#42; "
             , second: "bless the Lord, O my soul."
               }
             ]
    }
  , 104:
    { name: "Psalm 104."
    , title: "Benedic, anima mea"
    , vss: [ { first: "Bless the Lord, O my soul; &#42; "
             , second: "O Lord my God, how excellent is your greatness! you are clothed with majesty and splendor."
               }
           , { first: "You wrap yourself with light as with a cloak &#42; "
             , second: "and spread out the heavens like a curtain."
               }
           , { first: "You lay the beams of your chambers in the waters above; &#42; "
             , second: "you make the clouds your chariot; you ride on the wings of the wind."
               }
           , { first: "You make the winds your messengers &#42; "
             , second: "and flames of fire your servants."
               }
           , { first: "You have set the earth upon its foundations, &#42; "
             , second: "so that it never shall move at any time."
               }
           , { first: "You covered it with the Deep as with a mantle; &#42; "
             , second: "the waters stood higher than the mountains."
               }
           , { first: "At your rebuke they fled; &#42; "
             , second: "at the voice of your thunder they hastened away."
               }
           , { first: "They went up into the hills and down to the valleys beneath, &#42; "
             , second: "to the places you had appointed for them."
               }
           , { first: "You set the limits that they should not pass; &#42; "
             , second: "they shall not again cover the earth."
               }
           , { first: "You send the springs into the valleys; &#42; "
             , second: "they flow between the mountains."
               }
           , { first: "All the beasts of the field drink their fill from them, &#42; "
             , second: "and the wild asses quench their thirst."
               }
           , { first: "Beside them the birds of the air make their nests &#42; "
             , second: "and sing among the branches."
               }
           , { first: "You water the mountains from your dwelling on high; &#42; "
             , second: "the earth is fully satisfied by the fruit of your works."
               }
           , { first: "You make grass grow for flocks and herds &#42; "
             , second: "and plants to serve mankind;"
               }
           , { first: "That they may bring forth food from the earth, &#42; "
             , second: "and wine to gladden our hearts,"
               }
           , { first: "Oil to make a cheerful countenance, &#42; "
             , second: "and bread to strengthen the heart."
               }
           , { first: "The trees of the Lord are full of sap, &#42; "
             , second: "the cedars of Lebanon which he planted,"
               }
           , { first: "In which the birds build their nests, &#42; "
             , second: "and in whose tops the stork makes his dwelling."
               }
           , { first: "The high hills are a refuge for the mountain goats, &#42; "
             , second: "and the stony cliffs for the rock badgers."
               }
           , { first: "You appointed the moon to mark the seasons, &#42; "
             , second: "and the sun knows the time of its setting."
               }
           , { first: "You make darkness that it may be night, &#42; "
             , second: "in which all the beasts of the forest prowl."
               }
           , { first: "The lions roar after their prey &#42; "
             , second: "and seek their food from God."
               }
           , { first: "The sun rises, and they slip away &#42; "
             , second: "and lay themselves down in their dens."
               }
           , { first: "Man goes forth to his work &#42; "
             , second: "and to his labor until the evening."
               }
           , { first: "O Lord, how manifold are your works! &#42; "
             , second: "in wisdom you have made them all; the earth is full of your creatures."
               }
           , { first: "Yonder is the great and wide sea with its living things too many to number, &#42; "
             , second: "creatures both small and great."
               }
           , { first: "There move the ships, and there is that Leviathan, &#42; "
             , second: "which you have made for the sport of it."
               }
           , { first: "All of them look to you &#42; "
             , second: "to give them their food in due season."
               }
           , { first: "You give it to them; they gather it; &#42; "
             , second: "you open your hand, and they are filled with good things."
               }
           , { first: "You hide your face, and they are terrified; &#42; "
             , second: "you take away their breath, and they die and return to their dust."
               }
           , { first: "You send forth your Spirit, and they are created; &#42; "
             , second: "and so you renew the face of the earth."
               }
           , { first: "May the glory of the Lord endure for ever; &#42; "
             , second: "may the Lord rejoice in all his works."
               }
           , { first: "He looks at the earth and it trembles; &#42; "
             , second: "he touches the mountains and they smoke."
               }
           , { first: "I will sing to the Lord as long as I live; &#42; "
             , second: "I will praise my God while I have my being."
               }
           , { first: "May these words of mine please him; &#42; "
             , second: "I will rejoice in the Lord."
               }
           , { first: "Let sinners be consumed out of the earth, &#42; "
             , second: "and the wicked be no more."
               }
           , { first: "Bless the Lord, O my soul. &#42; "
             , second: "Hallelujah!"
               }
             ]
    }
  , 105:
    { name: "Psalm 105."
    , title: ""
    , vss: [ { title: "Part I Confitemini Domino"
             , first: "Give thanks to the Lord and call upon his Name; &#42; "
             , second: "make known his deeds among the peoples."
               }
           , { first: "Sing to him, sing praises to him, &#42; "
             , second: "and speak of all his marvelous works."
               }
           , { first: "Glory in his holy Name; &#42; "
             , second: "let the hearts of those who seek the Lord rejoice."
               }
           , { first: "Search for the Lord and his strength; &#42; "
             , second: "continually seek his face."
               }
           , { first: "Remember the marvels he has done, &#42; "
             , second: "his wonders and the judgments of his mouth,"
               }
           , { first: "O offspring of Abraham his servant, &#42; "
             , second: "O children of Jacob his chosen."
               }
           , { first: "He is the Lord our God; &#42; "
             , second: "his judgments prevail in all the world."
               }
           , { first: "He has always been mindful of his covenant, &#42; "
             , second: "the promise he made for a thousand generations:"
               }
           , { first: "The covenant he made with Abraham, &#42; "
             , second: "the oath that he swore to Isaac,"
               }
           , { first: "Which he established as a statute for Jacob, &#42; "
             , second: "an everlasting covenant for Israel,"
               }
           , { first: "Saying, “To you will I give the land of Canaan &#42; "
             , second: "to be your allotted inheritance.”"
               }
           , { first: "When they were few in number, &#42; "
             , second: "of little account, and sojourners in the land,"
               }
           , { first: "Wandering from nation to nation &#42; "
             , second: "and from one kingdom to another,"
               }
           , { first: "He let no one oppress them &#42; "
             , second: "and rebuked kings for their sake,"
               }
           , { first: "Saying, “Do not touch my anointed &#42; "
             , second: "and do my prophets no harm.”"
               }
           , { first: "Then he called for a famine in the land &#42; "
             , second: "and destroyed the supply of bread."
               }
           , { first: "He sent a man before them, &#42; "
             , second: "Joseph, who was sold as a slave."
               }
           , { first: "They bruised his feet in fetters; &#42; "
             , second: "his neck they put in an iron collar."
               }
           , { first: "Until his prediction came to pass, &#42; "
             , second: "the word of the Lord tested him."
               }
           , { first: "The king sent and released him; &#42; "
             , second: "the ruler of the peoples set him free."
               }
           , { first: "He set him as a master over his household, &#42; "
             , second: "as a ruler over all his possessions,"
               }
           , { first: "To instruct his princes according to his will &#42; "
             , second: "and to teach his elders wisdom."
               }
           , { title: "Part II Et intravit Israel"
             , first: "Israel came into Egypt, &#42; "
             , second: "and Jacob became a sojourner in the land of Ham."
               }
           , { first: "The Lord made his people exceedingly fruitful; &#42; "
             , second: "he made them stronger than their enemies;"
               }
           , { first: "Whose heart he turned, so that they hated his people, &#42; "
             , second: "and dealt unjustly with his servants."
               }
           , { first: "He sent Moses his servant, &#42; "
             , second: "and Aaron whom he had chosen."
               }
           , { first: "They worked his signs among them, &#42; "
             , second: "and portents in the land of Ham."
               }
           , { first: "He sent darkness, and it grew dark; &#42; "
             , second: "but the Egyptians rebelled against his words."
               }
           , { first: "He turned their waters into blood &#42; "
             , second: "and caused their fish to die."
               }
           , { first: "Their land was overrun by frogs, &#42; "
             , second: "in the very chambers of their kings."
               }
           , { first: "He spoke, and there came swarms of insects &#42; "
             , second: "and gnats within all their borders."
               }
           , { first: "He gave them hailstones instead of rain, &#42; "
             , second: "and flames of fire throughout their land."
               }
           , { first: "He blasted their vines and their fig trees &#42; "
             , second: "and shattered every tree in their country."
               }
           , { first: "He spoke, and the locust came, &#42; "
             , second: "and young locusts without number,"
               }
           , { first: "Which ate up all the green plants in their land &#42; "
             , second: "and devoured the fruit of their soil."
               }
           , { first: "He struck down the firstborn of their land, &#42; "
             , second: "the firstfruits of all their strength."
               }
           , { first: "He led out his people with silver and gold; &#42; "
             , second: "in all their tribes there was not one that stumbled."
               }
           , { first: "Egypt was glad of their going, &#42; "
             , second: "because they were afraid of them."
               }
           , { first: "He spread out a cloud for a covering &#42; "
             , second: "and a fire to give light in the night season."
               }
           , { first: "They asked, and quails appeared, &#42; "
             , second: "and he satisfied them with bread from heaven."
               }
           , { first: "He opened the rock, and water flowed, &#42; "
             , second: "so the river ran in the dry places."
               }
           , { first: "For God remembered his holy word &#42; "
             , second: "and Abraham his servant."
               }
           , { first: "So he led forth his people with gladness, &#42; "
             , second: "his chosen with shouts of joy."
               }
           , { first: "He gave his people the lands of the nations, &#42; "
             , second: "and they took the fruit of others’ toil,"
               }
           , { first: "That they might keep his statutes &#42; "
             , second: "and observe his laws. Hallelujah!"
               }
             ]
    }
  , 106:
    { name: "Psalm 106."
    , title: ""
    , vss: [ { title: "Part I Confitemini Domino"
             , first: "Hallelujah! Give thanks to the Lord, for he is good, &#42; "
             , second: "for his mercy endures for ever."
               }
           , { first: "Who can declare the mighty acts of the Lord &#42; "
             , second: "or show forth all his praise?"
               }
           , { first: "Happy are those who act with justice &#42; "
             , second: "and always do what is right!"
               }
           , { first: "Remember me, O Lord, with the favor you have for your people, &#42; "
             , second: "and visit me with your saving help;"
               }
           , { first: "That I may see the prosperity of your elect and be glad with the gladness of your people, &#42; "
             , second: "that I may glory with your inheritance."
               }
           , { first: "We have sinned as our forebears did; &#42; "
             , second: "we have done wrong and dealt wickedly."
               }
           , { first: "In Egypt they did not consider your marvelous works, nor remember the abundance of your love; &#42; "
             , second: "they defied the Most High at the Red Sea."
               }
           , { first: "But he saved them for his Name’s sake, &#42; "
             , second: "to make his power known."
               }
           , { first: "He rebuked the Red Sea, and it dried up, &#42; "
             , second: "and he led them through the deep as through a desert."
               }
           , { first: "He saved them from the hand of those who hated them &#42; "
             , second: "and redeemed them from the hand of the enemy."
               }
           , { first: "The waters covered their oppressors; &#42; "
             , second: "not one of them was left."
               }
           , { first: "Then they believed his words &#42; "
             , second: "and sang him songs of praise."
               }
           , { first: "But they soon forgot his deeds &#42; "
             , second: "and did not wait for his counsel."
               }
           , { first: "A craving seized them in the wilderness, &#42; "
             , second: "and they put God to the test in the desert."
               }
           , { first: "He gave them what they asked, &#42; "
             , second: "but sent leanness into their soul."
               }
           , { first: "They envied Moses in the camp, &#42; "
             , second: "and Aaron, the holy one of the Lord."
               }
           , { first: "The earth opened and swallowed Dathan &#42; "
             , second: "and covered the company of Abiram."
               }
           , { first: "Fire blazed up against their company, &#42; "
             , second: "and flames devoured the wicked."
               }
           , { title: "Part II Et fecerunt vitulum"
             , first: "Israel made a bull-calf at Horeb &#42; "
             , second: "and worshiped a molten image;"
               }
           , { first: "And so they exchanged their Glory &#42; "
             , second: "for the image of an ox that feeds on grass."
               }
           , { first: "They forgot God their Savior, &#42; "
             , second: "who had done great things in Egypt,"
               }
           , { first: "Wonderful deeds in the land of Ham, &#42; "
             , second: "and fearful things at the Red Sea."
               }
           , { first: "So he would have destroyed them, had not Moses his chosen stood before him in the breach, &#42; "
             , second: "to turn away his wrath from consuming them."
               }
           , { first: "They refused the pleasant land &#42; "
             , second: "and would not believe his promise."
               }
           , { first: "They grumbled in their tents &#42; "
             , second: "and would not listen to the voice of the Lord."
               }
           , { first: "So he lifted his hand against them, &#42; "
             , second: "to overthrow them in the wilderness,"
               }
           , { first: "To cast out their seed among the nations, &#42; "
             , second: "and to scatter them throughout the lands."
               }
           , { first: "They joined themselves to Baal-Peor &#42; "
             , second: "and ate sacrifices offered to the dead."
               }
           , { first: "They provoked him to anger with their actions, &#42; "
             , second: "and a plague broke out among them."
               }
           , { first: "Then Phinehas stood up and interceded, &#42; "
             , second: "and the plague came to an end."
               }
           , { first: "This was reckoned to him as righteousness &#42; "
             , second: "throughout all generations for ever."
               }
           , { first: "Again they provoked his anger at the waters of Meribah, &#42; "
             , second: "so that he punished Moses because of them;"
               }
           , { first: "For they so embittered his spirit &#42; "
             , second: "that he spoke rash words with his lips."
               }
           , { first: "They did not destroy the peoples &#42; "
             , second: "as the Lord had commanded them."
               }
           , { first: "They intermingled with the heathen &#42; "
             , second: "and learned their pagan ways,"
               }
           , { first: "So that they worshiped their idols, &#42; "
             , second: "which became a snare to them."
               }
           , { first: "They sacrificed their sons &#42; "
             , second: "and their daughters to evil spirits."
               }
           , { first: "They shed innocent blood, the blood of their sons and daughters, &#42; "
             , second: "which they offered to the idols of Canaan, and the land was defiled with blood."
               }
           , { first: "Thus they were polluted by their actions &#42; "
             , second: "and went whoring in their evil deeds."
               }
           , { first: "Therefore the wrath of the Lord was kindled against his people &#42; "
             , second: "and he abhorred his inheritance."
               }
           , { first: "He gave them over to the hand of the heathen, &#42; "
             , second: "and those who hated them ruled over them."
               }
           , { first: "Their enemies oppressed them, &#42; "
             , second: "and they were humbled under their hand."
               }
           , { first: "Many a time did he deliver them, but they rebelled through their own devices, &#42; "
             , second: "and were brought down in their iniquity."
               }
           , { first: "Nevertheless, he saw their distress, &#42; "
             , second: "when he heard their lamentation."
               }
           , { first: "He remembered his covenant with them &#42; "
             , second: "and relented in accordance with his great mercy."
               }
           , { first: "He caused them to be pitied &#42; "
             , second: "by those who held them captive."
               }
           , { first: "Save us, O Lord our God, and gather us from among the nations, &#42; "
             , second: "that we may give thanks to your holy Name and glory in your praise."
               }
           , { first: "Blessed be the Lord, the God of Israel, from everlasting and to everlasting; &#42; "
             , second: "and let all the people say, “Amen!” Hallelujah!"
               }
             ]
    }
  , 107:
    { name: "Psalm 107."
    , title: ""
    , vss: [ { title: "Part I Confitemini Domino"
             , first: "Give thanks to the Lord, for he is good, &#42; "
             , second: "and his mercy endures for ever."
               }
           , { first: "Let all those whom the Lord has redeemed proclaim &#42; "
             , second: "that he redeemed them from the hand of the foe."
               }
           , { first: "He gathered them out of the lands; &#42; "
             , second: "from the east and from the west, from the north and from the south."
               }
           , { first: "Some wandered in desert wastes; &#42; "
             , second: "they found no way to a city where they might dwell."
               }
           , { first: "They were hungry and thirsty; &#42; "
             , second: "their spirits languished within them."
               }
           , { first: "Then they cried to the Lord in their trouble, &#42; "
             , second: "and he delivered them from their distress."
               }
           , { first: "He put their feet on a straight path &#42; "
             , second: "to go to a city where they might dwell."
               }
           , { first: "Let them give thanks to the Lord for his mercy &#42; "
             , second: "and the wonders he does for his children."
               }
           , { first: "For he satisfies the thirsty &#42; "
             , second: "and fills the hungry with good things."
               }
           , { first: "Some sat in darkness and deep gloom, &#42; "
             , second: "bound fast in misery and iron;"
               }
           , { first: "Because they rebelled against the words of God &#42; "
             , second: "and despised the counsel of the Most High."
               }
           , { first: "So he humbled their spirits with hard labor; &#42; "
             , second: "they stumbled, and there was none to help."
               }
           , { first: "Then they cried to the Lord in their trouble, &#42; "
             , second: "and he delivered them from their distress."
               }
           , { first: "He led them out of darkness and deep gloom &#42; "
             , second: "and broke their bonds asunder."
               }
           , { first: "Let them give thanks to the Lord for his mercy &#42; "
             , second: "and the wonders he does for his children."
               }
           , { first: "For he shatters the doors of bronze &#42; "
             , second: "and breaks in two the iron bars."
               }
           , { first: "Some were fools and took to rebellious ways; &#42; "
             , second: "they were afflicted because of their sins."
               }
           , { first: "They abhorred all manner of food &#42; "
             , second: "and drew near to death’s door."
               }
           , { first: "Then they cried to the Lord in their trouble, &#42; "
             , second: "and he delivered them from their distress."
               }
           , { first: "He sent forth his word and healed them &#42; "
             , second: "and saved them from the grave."
               }
           , { first: "Let them give thanks to the Lord for his mercy &#42; "
             , second: "and the wonders he does for his children."
               }
           , { first: "Let them offer a sacrifice of thanksgiving &#42; "
             , second: "and tell of his acts with shouts of joy."
               }
           , { first: "Some went down to the sea in ships &#42; "
             , second: "and plied their trade in deep waters;"
               }
           , { first: "They beheld the works of the Lord &#42; "
             , second: "and his wonders in the deep."
               }
           , { first: "Then he spoke, and a stormy wind arose, &#42; "
             , second: "which tossed high the waves of the sea."
               }
           , { first: "They mounted up to the heavens and fell back to the depths; &#42; "
             , second: "their hearts melted because of their peril."
               }
           , { first: "They reeled and staggered like drunkards &#42; "
             , second: "and were at their wits’ end."
               }
           , { first: "Then they cried to the Lord in their trouble, &#42; "
             , second: "and he delivered them from their distress."
               }
           , { first: "He stilled the storm to a whisper &#42; "
             , second: "and quieted the waves of the sea."
               }
           , { first: "Then were they glad because of the calm, &#42; "
             , second: "and he brought them to the harbor they were bound for."
               }
           , { first: "Let them give thanks to the Lord for his mercy &#42; "
             , second: "and the wonders he does for his children."
               }
           , { first: "Let them exalt him in the congregation of the people &#42; "
             , second: "and praise him in the council of the elders."
               }
           , { title: "Part II Posuit flumina"
             , first: "The Lord changed rivers into deserts, &#42; "
             , second: "and water-springs into thirsty ground,"
               }
           , { first: "A fruitful land into salt flats, &#42; "
             , second: "because of the wickedness of those who dwell there."
               }
           , { first: "He changed deserts into pools of water &#42; "
             , second: "and dry land into water-springs."
               }
           , { first: "He settled the hungry there, &#42; "
             , second: "and they founded a city to dwell in."
               }
           , { first: "They sowed fields, and planted vineyards, &#42; "
             , second: "and brought in a fruitful harvest."
               }
           , { first: "He blessed them, so that they increased greatly; &#42; "
             , second: "he did not let their herds decrease."
               }
           , { first: "Yet when they were diminished and brought low, &#42; "
             , second: "through stress of adversity and sorrow,"
               }
           , { first: "(He pours contempt on princes &#42; "
             , second: "and makes them wander in trackless wastes)"
               }
           , { first: "He lifted up the poor out of misery &#42; "
             , second: "and multiplied their families like flocks of sheep."
               }
           , { first: "The upright will see this and rejoice, &#42; "
             , second: "but all wickedness will shut its mouth."
               }
           , { first: "Whoever is wise will ponder these things, &#42; "
             , second: "and consider well the mercies of the Lord."
               }
             ]
    }
  , 108:
    { name: "Psalm 108."
    , title: "Paratum cor meum"
    , vss: [ { first: "My heart is firmly fixed, O God, my heart is fixed; &#42; "
             , second: "I will sing and make melody."
               }
           , { first: "Wake up, my spirit; awake, lute and harp; &#42; "
             , second: "I myself will waken the dawn."
               }
           , { first: "I will confess you among the peoples, O Lord; &#42; "
             , second: "I will sing praises to you among the nations."
               }
           , { first: "For your loving-kindness is greater than the heavens, &#42; "
             , second: "and your faithfulness reaches to the clouds."
               }
           , { first: "Exalt yourself above the heavens, O God, &#42; "
             , second: "and your glory over all the earth."
               }
           , { first: "So that those who are dear to you may be delivered, &#42; "
             , second: "save with your right hand and answer me."
               }
           , { first: "God spoke from his holy place and said, &#42; "
             , second: "“I will exult and parcel out Shechem; I will divide the valley of Succoth."
               }
           , { first: "Gilead is mine and Manasseh is mine; &#42; "
             , second: "Ephraim is my helmet and Judah my scepter."
               }
           , { first: "Moab is my washbasin, on Edom I throw down my sandal to claim it, &#42; "
             , second: "and over Philistia will I shout in triumph.”"
               }
           , { first: "Who will lead me into the strong city? &#42; "
             , second: "who will bring me into Edom?"
               }
           , { first: "Have you not cast us off, O God? &#42; "
             , second: "you no longer go out, O God, with our armies."
               }
           , { first: "Grant us your help against the enemy, &#42; "
             , second: "for vain is the help of man."
               }
           , { first: "With God we will do valiant deeds, &#42; "
             , second: "and he shall tread our enemies under foot."
               }
             ]
    }
  , 109:
    { name: "Psalm 109."
    , title: "Deus, laudem"
    , vss: [ { first: "Hold not your tongue, O God of my praise; &#42; "
             , second: "for the mouth of the wicked, the mouth of the deceitful, is opened against me."
               }
           , { first: "They speak to me with a lying tongue; &#42; "
             , second: "they encompass me with hateful words and fight against me without a cause."
               }
           , { first: "Despite my love, they accuse me; &#42; "
             , second: "but as for me, I pray for them."
               }
           , { first: "They repay evil for good, &#42; "
             , second: "and hatred for my love."
               }
           , { first: "Set a wicked man against him, &#42; "
             , second: "and let an accuser stand at his right hand."
               }
           , { first: "When he is judged, let him be found guilty, &#42; "
             , second: "and let his appeal be in vain."
               }
           , { first: "Let his days be few, &#42; "
             , second: "and let another take his office."
               }
           , { first: "Let his children be fatherless, &#42; "
             , second: "and his wife become a widow."
               }
           , { first: "Let his children be waifs and beggars; &#42; "
             , second: "let them be driven from the ruins of their homes."
               }
           , { first: "Let the creditor seize everything he has; &#42; "
             , second: "let strangers plunder his gains."
               }
           , { first: "Let there be no one to show him kindness, &#42; "
             , second: "and none to pity his fatherless children."
               }
           , { first: "Let his descendants be destroyed, &#42; "
             , second: "and his name be blotted out in the next generation."
               }
           , { first: "Let the wickedness of his fathers be remembered before the Lord, &#42; "
             , second: "and his mother’s sin not be blotted out;"
               }
           , { first: "Let their sin be always before the Lord; &#42; "
             , second: "but let him root out their names from the earth;"
               }
           , { first: "Because he did not remember to show mercy, &#42; "
             , second: "but persecuted the poor and needy and sought to kill the brokenhearted."
               }
           , { first: "He loved cursing, let it come upon him; &#42; "
             , second: "he took no delight in blessing, let it depart from him."
               }
           , { first: "He put on cursing like a garment, &#42; "
             , second: "let it soak into his body like water and into his bones like oil;"
               }
           , { first: "Let it be to him like the cloak which he wraps around himself, &#42; "
             , second: "and like the belt that he wears continually."
               }
           , { first: "Let this be the recompense from the Lord to my accusers, &#42; "
             , second: "and to those who speak evil against me."
               }
           , { first: "But you, O Lord my God, oh, deal with me according to your Name; &#42; "
             , second: "for your tender mercy’s sake, deliver me."
               }
           , { first: "For I am poor and needy, &#42; "
             , second: "and my heart is wounded within me."
               }
           , { first: "I have faded away like a shadow when it lengthens; &#42; "
             , second: "I am shaken off like a locust."
               }
           , { first: "My knees are weak through fasting, &#42; "
             , second: "and my flesh is wasted and gaunt."
               }
           , { first: "I have become a reproach to them; &#42; "
             , second: "they see and shake their heads."
               }
           , { first: "Help me, O Lord my God; &#42; "
             , second: "save me for your mercy’s sake."
               }
           , { first: "Let them know that this is your hand, &#42; "
             , second: "that you, O Lord, have done it."
               }
           , { first: "They may curse, but you will bless; &#42; "
             , second: "let those who rise up against me be put to shame, and your servant will rejoice."
               }
           , { first: "Let my accusers be clothed with disgrace &#42; "
             , second: "and wrap themselves in their shame as in a cloak."
               }
           , { first: "I will give great thanks to the Lord with my mouth; &#42; "
             , second: "in the midst of the multitude will I praise him;"
               }
           , { first: "Because he stands at the right hand of the needy, &#42; "
             , second: "to save his life from those who would condemn him."
               }
             ]
    }
  , 110:
    { name: "Psalm 110."
    , title: "Dixit Dominus"
    , vss: [ { first: "The Lord said to my Lord, “Sit at my right hand, &#42; "
             , second: "until I make your enemies your footstool.”"
               }
           , { first: "The Lord will send the scepter of your power out of Zion, &#42; "
             , second: "saying, “Rule over your enemies round about you."
               }
           , { first: "Princely state has been yours from the day of your birth; &#42; "
             , second: "in the beauty of holiness have I begotten you, like dew from the womb of the morning.”"
               }
           , { first: "The Lord has sworn and he will not recant: &#42; "
             , second: "“You are a priest for ever after the order of Melchizedek.”"
               }
           , { first: "The Lord who is at your right hand will smite kings in the day of his wrath; &#42; "
             , second: "he will rule over the nations."
               }
           , { first: "He will heap high the corpses; &#42; "
             , second: "he will smash heads over the wide earth."
               }
           , { first: "He will drink from the brook beside the road; &#42; "
             , second: "therefore he will lift high his head."
               }
             ]
    }
  , 111:
    { name: "Psalm 111."
    , title: "Confitebor tibi"
    , vss: [ { first: "Hallelujah! I will give thanks to the Lord with my whole heart, &#42; "
             , second: "in the assembly of the upright, in the congregation."
               }
           , { first: "Great are the deeds of the Lord! &#42; "
             , second: "they are studied by all who delight in them."
               }
           , { first: "His work is full of majesty and splendor, &#42; "
             , second: "and his righteousness endures for ever."
               }
           , { first: "He makes his marvelous works to be remembered; &#42; "
             , second: "the Lord is gracious and full of compassion."
               }
           , { first: "He gives food to those who fear him; &#42; "
             , second: "he is ever mindful of his covenant."
               }
           , { first: "He has shown his people the power of his works &#42; "
             , second: "in giving them the lands of the nations."
               }
           , { first: "The works of his hands are faithfulness and justice; &#42; "
             , second: "all his commandments are sure."
               }
           , { first: "They stand fast for ever and ever, &#42; "
             , second: "because they are done in truth and equity."
               }
           , { first: "He sent redemption to his people; he commanded his covenant for ever; &#42; "
             , second: "holy and awesome is his Name."
               }
           , { first: "The fear of the Lord is the beginning of wisdom; &#42; "
             , second: "those who act accordingly have a good understanding; his praise endures for ever."
               }
             ]
    }
  , 112:
    { name: "Psalm 112."
    , title: "Beatus vir"
    , vss: [ { first: "Hallelujah! Happy are they who fear the Lord &#42; "
             , second: "and have great delight in his commandments!"
               }
           , { first: "Their descendants will be mighty in the land; &#42; "
             , second: "the generation of the upright will be blessed."
               }
           , { first: "Wealth and riches will be in their house, &#42; "
             , second: "and their righteousness will last for ever."
               }
           , { first: "Light shines in the darkness for the upright; &#42; "
             , second: "the righteous are merciful and full of compassion."
               }
           , { first: "It is good for them to be generous in lending &#42; "
             , second: "and to manage their affairs with justice."
               }
           , { first: "For they will never be shaken; &#42; "
             , second: "the righteous will be kept in everlasting remembrance."
               }
           , { first: "They will not be afraid of any evil rumors; &#42; "
             , second: "their heart is right; they put their trust in the Lord."
               }
           , { first: "Their heart is established and will not shrink, &#42; "
             , second: "until they see their desire upon their enemies."
               }
           , { first: "They have given freely to the poor, &#42; "
             , second: "and their righteousness stands fast for ever; they will hold up their head with honor."
               }
           , { first: "The wicked will see it and be angry; they will gnash their teeth and pine away; &#42; "
             , second: "the desires of the wicked will perish."
               }
             ]
    }
  , 113:
    { name: "Psalm 113."
    , title: "Laudate, pueri"
    , vss: [ { first: "Hallelujah! Give praise, you servants of the Lord; &#42; "
             , second: "praise the Name of the Lord."
               }
           , { first: "Let the Name of the Lord be blessed, &#42; "
             , second: "from this time forth for evermore."
               }
           , { first: "From the rising of the sun to its going down &#42; "
             , second: "let the Name of the Lord be praised."
               }
           , { first: "The Lord is high above all nations, &#42; "
             , second: "and his glory above the heavens."
               }
           , { first: "Who is like the Lord our God, who sits enthroned on high, &#42; "
             , second: "but stoops to behold the heavens and the earth?"
               }
           , { first: "He takes up the weak out of the dust &#42; "
             , second: "and lifts up the poor from the ashes."
               }
           , { first: "He sets them with the princes, &#42; "
             , second: "with the princes of his people."
               }
           , { first: "He makes the woman of a childless house &#42; "
             , second: "to be a joyful mother of children."
               }
             ]
    }
  , 114:
    { name: "Psalm 114."
    , title: "In exitu Israel"
    , vss: [ { first: "Hallelujah! When Israel came out of Egypt, &#42; "
             , second: "the house of Jacob from a people of strange speech,"
               }
           , { first: "Judah became God’s sanctuary &#42; "
             , second: "and Israel his dominion."
               }
           , { first: "The sea beheld it and fled; &#42; "
             , second: "Jordan turned and went back."
               }
           , { first: "The mountains skipped like rams, &#42; "
             , second: "and the little hills like young sheep."
               }
           , { first: "What ailed you, O sea, that you fled? &#42; "
             , second: "O Jordan, that you turned back?"
               }
           , { first: "You mountains, that you skipped like rams? &#42; "
             , second: "you little hills like young sheep?"
               }
           , { first: "Tremble, O earth, at the presence of the Lord, &#42; "
             , second: "at the presence of the God of Jacob,"
               }
           , { first: "Who turned the hard rock into a pool of water &#42; "
             , second: "and flint-stone into a flowing spring."
               }
             ]
    }
  , 115:
    { name: "Psalm 115."
    , title: "Non nobis, Domine"
    , vss: [ { first: "Not to us, O Lord, not to us, but to your Name give glory; &#42; "
             , second: "because of your love and because of your faithfulness."
               }
           , { first: "Why should the heathen say, &#42; "
             , second: "“Where then is their God?”"
               }
           , { first: "Our God is in heaven; &#42; "
             , second: "whatever he wills to do he does."
               }
           , { first: "Their idols are silver and gold, &#42; "
             , second: "the work of human hands."
               }
           , { first: "They have mouths, but they cannot speak; &#42; "
             , second: "eyes have they, but they cannot see;"
               }
           , { first: "They have ears, but they cannot hear; &#42; "
             , second: "noses, but they cannot smell;"
               }
           , { first: "They have hands, but they cannot feel; feet, but they cannot walk; &#42; "
             , second: "they make no sound with their throat."
               }
           , { first: "Those who make them are like them, &#42; "
             , second: "and so are all who put their trust in them."
               }
           , { first: "O Israel, trust in the Lord; &#42; "
             , second: "he is their help and their shield."
               }
           , { first: "O house of Aaron, trust in the Lord; &#42; "
             , second: "he is their help and their shield."
               }
           , { first: "You who fear the Lord, trust in the Lord; &#42; "
             , second: "he is their help and their shield."
               }
           , { first: "The Lord has been mindful of us, and he will bless us; &#42; "
             , second: "he will bless the house of Israel; he will bless the house of Aaron;"
               }
           , { first: "He will bless those who fear the Lord, &#42; "
             , second: "both small and great together."
               }
           , { first: "May the Lord increase you more and more, &#42; "
             , second: "you and your children after you."
               }
           , { first: "May you be blessed by the Lord, &#42; "
             , second: "the maker of heaven and earth."
               }
           , { first: "The heaven of heavens is the Lord’s, &#42; "
             , second: "but he entrusted the earth to its peoples."
               }
           , { first: "The dead do not praise the Lord, &#42; "
             , second: "nor all those who go down into silence;"
               }
           , { first: "But we will bless the Lord, &#42; "
             , second: "from this time forth for evermore. Hallelujah!"
               }
             ]
    }
  , 116:
    { name: "Psalm 116."
    , title: "Dilexi, quoniam"
    , vss: [ { first: "I love the Lord, because he has heard the voice of my supplication, &#42; "
             , second: "because he has inclined his ear to me whenever I called upon him."
               }
           , { first: "The cords of death entangled me; the grip of the grave took hold of me; &#42; "
             , second: "I came to grief and sorrow."
               }
           , { first: "Then I called upon the Name of the Lord: &#42; "
             , second: "“O Lord, I pray you, save my life.”"
               }
           , { first: "Gracious is the Lord and righteous; &#42; "
             , second: "our God is full of compassion."
               }
           , { first: "The Lord watches over the innocent; &#42; "
             , second: "I was brought very low, and he helped me."
               }
           , { first: "Turn again to your rest, O my soul, &#42; "
             , second: "for the Lord has treated you well."
               }
           , { first: "For you have rescued my life from death, &#42; "
             , second: "my eyes from tears, and my feet from stumbling."
               }
           , { first: "I will walk in the presence of the Lord &#42; "
             , second: "in the land of the living."
               }
           , { first: "I believed, even when I said, “I have been brought very low.” &#42; "
             , second: "In my distress I said, “No one can be trusted.”"
               }
           , { first: "How shall I repay the Lord &#42; "
             , second: "for all the good things he has done for me?"
               }
           , { first: "I will lift up the cup of salvation &#42; "
             , second: "and call upon the Name of the Lord."
               }
           , { first: "I will fulfill my vows to the Lord &#42; "
             , second: "in the presence of all his people."
               }
           , { first: "Precious in the sight of the Lord &#42; "
             , second: "is the death of his servants."
               }
           , { first: "O Lord, I am your servant; &#42; "
             , second: "I am your servant and the child of your handmaid; you have freed me from my bonds."
               }
           , { first: "I will offer you the sacrifice of thanksgiving &#42; "
             , second: "and call upon the Name of the Lord."
               }
           , { first: "I will fulfill my vows to the Lord &#42; "
             , second: "in the presence of all his people,"
               }
           , { first: "In the courts of the Lord’s house, &#42; "
             , second: "in the midst of you, O Jerusalem. Hallelujah!"
               }
             ]
    }
  , 117:
    { name: "Psalm 117."
    , title: "Laudate Dominum"
    , vss: [ { first: "Praise the Lord, all you nations; &#42; "
             , second: "laud him, all you peoples."
               }
           , { first: "For his loving-kindness toward us is great, &#42; "
             , second: "and the faithfulness of the Lord endures for ever. Hallelujah!"
               }
             ]
    }
  , 118:
    { name: "Psalm 118."
    , title: "Confitemini Domino"
    , vss: [ { first: "Give thanks to the Lord, for he is good; &#42; "
             , second: "his mercy endures for ever."
               }
           , { first: "Let Israel now proclaim, &#42; "
             , second: "“His mercy endures for ever.”"
               }
           , { first: "Let the house of Aaron now proclaim, &#42; "
             , second: "“His mercy endures for ever.”"
               }
           , { first: "Let those who fear the Lord now proclaim, &#42; "
             , second: "“His mercy endures for ever.”"
               }
           , { first: "I called to the Lord in my distress; &#42; "
             , second: "the Lord answered by setting me free."
               }
           , { first: "The Lord is at my side, therefore I will not fear; &#42; "
             , second: "what can anyone do to me?"
               }
           , { first: "The Lord is at my side to help me; &#42; "
             , second: "I will triumph over those who hate me."
               }
           , { first: "It is better to rely on the Lord &#42; "
             , second: "than to put any trust in flesh."
               }
           , { first: "It is better to rely on the Lord &#42; "
             , second: "than to put any trust in rulers."
               }
           , { first: "All the ungodly encompass me; &#42; "
             , second: "in the name of the Lord I will repel them."
               }
           , { first: "They hem me in, they hem me in on every side; &#42; "
             , second: "in the name of the Lord I will repel them."
               }
           , { first: "They swarm about me like bees; they blaze like a fire of thorns; &#42; "
             , second: "in the name of the Lord I will repel them."
               }
           , { first: "I was pressed so hard that I almost fell, &#42; "
             , second: "but the Lord came to my help."
               }
           , { first: "The Lord is my strength and my song, &#42; "
             , second: "and he has become my salvation."
               }
           , { first: "There is a sound of exultation and victory &#42; "
             , second: "in the tents of the righteous:"
               }
           , { first: "“The right hand of the Lord has triumphed! &#42; "
             , second: "the right hand of the Lord is exalted! the right hand of the Lord has triumphed!”"
               }
           , { first: "I shall not die, but live, &#42; "
             , second: "and declare the works of the Lord."
               }
           , { first: "The Lord has punished me sorely, &#42; "
             , second: "but he did not hand me over to death."
               }
           , { first: "Open for me the gates of righteousness; &#42; "
             , second: "I will enter them; I will offer thanks to the Lord."
               }
           , { first: "“This is the gate of the Lord; &#42; "
             , second: "he who is righteous may enter.”"
               }
           , { first: "I will give thanks to you, for you answered me &#42; "
             , second: "and have become my salvation."
               }
           , { first: "The same stone which the builders rejected &#42; "
             , second: "has become the chief cornerstone."
               }
           , { first: "This is the Lord’s doing, &#42; "
             , second: "and it is marvelous in our eyes."
               }
           , { first: "On this day the Lord has acted; &#42; "
             , second: "we will rejoice and be glad in it."
               }
           , { first: "Hosannah, Lord, hosannah! &#42; "
             , second: "Lord, send us now success."
               }
           , { first: "Blessed is he who comes in the name of the Lord; &#42; "
             , second: "we bless you from the house of the Lord."
               }
           , { first: "God is the Lord; he has shined upon us; &#42; "
             , second: "form a procession with branches up to the horns of the altar."
               }
           , { first: "“You are my God, and I will thank you; &#42; "
             , second: "you are my God, and I will exalt you.”"
               }
           , { first: "Give thanks to the Lord, for he is good; &#42; "
             , second: "his mercy endures for ever."
               }
             ]
    }
  , 119:
    { name: "Psalm 119."
    , title: ""
    , vss: [ { title: "Aleph Beati immaculati"
             , first: "Happy are they whose way is blameless, &#42; "
             , second: "who walk in the law of the Lord!"
               }
           , { first: "Happy are they who observe his decrees &#42; "
             , second: "and seek him with all their hearts!"
               }
           , { first: "Who never do any wrong, &#42; "
             , second: "but always walk in his ways."
               }
           , { first: "You laid down your commandments, &#42; "
             , second: "that we should fully keep them."
               }
           , { first: "Oh, that my ways were made so direct &#42; "
             , second: "that I might keep your statutes!"
               }
           , { first: "Then I should not be put to shame, &#42; "
             , second: "when I regard all your commandments."
               }
           , { first: "I will thank you with an unfeigned heart, &#42; "
             , second: "when I have learned your righteous judgments."
               }
           , { first: "I will keep your statutes; &#42; "
             , second: "do not utterly forsake me.  Beth In quo corrigit?"
               }
           , { first: "How shall a young man cleanse his way? &#42; "
             , second: "By keeping to your words."
               }
           , { first: "With my whole heart I seek you; &#42; "
             , second: "let me not stray from your commandments."
               }
           , { first: "I treasure your promise in my heart, &#42; "
             , second: "that I may not sin against you."
               }
           , { first: "Blessed are you, O Lord; &#42; "
             , second: "instruct me in your statutes."
               }
           , { first: "With my lips will I recite &#42; "
             , second: "all the judgments of your mouth."
               }
           , { first: "I have taken greater delight in the way of your decrees &#42; "
             , second: "than in all manner of riches."
               }
           , { first: "I will meditate on your commandments &#42; "
             , second: "and give attention to your ways."
               }
           , { first: "My delight is in your statutes; &#42; "
             , second: "I will not forget your word. Gimel Retribue servo tuo"
               }
           , { first: "Deal bountifully with your servant, &#42; "
             , second: "that I may live and keep your word."
               }
           , { first: "Open my eyes, that I may see &#42; "
             , second: "the wonders of your law."
               }
           , { first: "I am a stranger here on earth; &#42; "
             , second: "do not hide your commandments from me."
               }
           , { first: "My soul is consumed at all times &#42; "
             , second: "with longing for your judgments."
               }
           , { first: "You have rebuked the insolent; &#42; "
             , second: "cursed are they who stray from your commandments!"
               }
           , { first: "Turn from me shame and rebuke, &#42; "
             , second: "for I have kept your decrees."
               }
           , { first: "Even though rulers sit and plot against me, &#42; "
             , second: "I will meditate on your statutes."
               }
           , { first: "For your decrees are my delight, &#42; "
             , second: "and they are my counselors. "
               }
           , { title: "Daleth Adhæsit pavimento"
             , first: "My soul cleaves to the dust; &#42; "
             , second: "give me life according to your word."
               }
           , { first: "I have confessed my ways, and you answered me; &#42; "
             , second: "instruct me in your statutes."
               }
           , { first: "Make me understand the way of your commandments, &#42; "
             , second: "that I may meditate on your marvelous works."
               }
           , { first: "My soul melts away for sorrow; &#42; "
             , second: "strengthen me according to your word."
               }
           , { first: "Take from me the way of lying; &#42; "
             , second: "let me find grace through your law."
               }
           , { first: "I have chosen the way of faithfulness; &#42; "
             , second: "I have set your judgments before me."
               }
           , { first: "I hold fast to your decrees; &#42; "
             , second: "O Lord, let me not be put to shame."
               }
           , { first: "I will run the way of your commandments, &#42; "
             , second: "for you have set my heart at liberty. He Legem pone"
               }
           , { first: "Teach me, O Lord, the way of your statutes, &#42; "
             , second: "and I shall keep it to the end."
               }
           , { first: "Give me understanding, and I shall keep your law; &#42; "
             , second: "I shall keep it with all my heart."
               }
           , { first: "Make me go in the path of your commandments, &#42; "
             , second: "for that is my desire."
               }
           , { first: "Incline my heart to your decrees &#42; "
             , second: "and not to unjust gain."
               }
           , { first: "Turn my eyes from watching what is worthless; &#42; "
             , second: "give me life in your ways."
               }
           , { first: "Fulfill your promise to your servant, &#42; "
             , second: "which you make to those who fear you."
               }
           , { first: "Turn away the reproach which I dread, &#42; "
             , second: "because your judgments are good."
               }
           , { first: "Behold, I long for your commandments; &#42; "
             , second: "in your righteousness preserve my life."
               }
           , { title: "Waw Et veniat super me"
             , first: "Let your loving-kindness come to me, O Lord, &#42; "
             , second: "and your salvation, according to your promise."
               }
           , { first: "Then shall I have a word for those who taunt me, &#42; "
             , second: "because I trust in your words."
               }
           , { first: "Do not take the word of truth out of my mouth, &#42; "
             , second: "for my hope is in your judgments."
               }
           , { first: "I shall continue to keep your law; &#42; "
             , second: "I shall keep it for ever and ever."
               }
           , { first: "I will walk at liberty, &#42; "
             , second: "because I study your commandments."
               }
           , { first: "I will tell of your decrees before kings &#42; "
             , second: "and will not be ashamed."
               }
           , { first: "I delight in your commandments, &#42; "
             , second: "which I have always loved."
               }
           , { first: "I will lift up my hands to your commandments, &#42; "
             , second: "and I will meditate on your statutes."
               }
           , { title: "Zayin Memor esto verbi tui"
             , first: "Remember your word to your servant, &#42; "
             , second: "because you have given me hope."
               }
           , { first: "This is my comfort in my trouble, &#42; "
             , second: "that your promise gives me life."
               }
           , { first: "The proud have derided me cruelly, &#42; "
             , second: "but I have not turned from your law."
               }
           , { first: "When I remember your judgments of old, &#42; "
             , second: "O Lord, I take great comfort."
               }
           , { first: "I am filled with a burning rage, &#42; "
             , second: "because of the wicked who forsake your law."
               }
           , { first: "Your statutes have been like songs to me &#42; "
             , second: "wherever I have lived as a stranger."
               }
           , { first: "I remember your Name in the night, O Lord, &#42; "
             , second: "and dwell upon your law."
               }
           , { first: "This is how it has been with me, &#42; "
             , second: "because I have kept your commandments."
               }
           , { title: "Heth Portio mea, Domine"
             , first: "You only are my portion, O Lord; &#42; "
             , second: "I have promised to keep your words."
               }
           , { first: "I entreat you with all my heart, &#42; "
             , second: "be merciful to me according to your promise."
               }
           , { first: "I have considered my ways &#42; "
             , second: "and turned my feet toward your decrees."
               }
           , { first: "I hasten and do not tarry &#42; "
             , second: "to keep your commandments."
               }
           , { first: "Though the cords of the wicked entangle me, &#42; "
             , second: "I do not forget your law."
               }
           , { first: "At midnight I will rise to give you thanks, &#42; "
             , second: "because of your righteous judgments."
               }
           , { first: "I am a companion of all who fear you &#42; "
             , second: "and of those who keep your commandments."
               }
           , { first: "The earth, O Lord, is full of your love; &#42; "
             , second: "instruct me in your statutes."
               }
           , { title: "Teth Bonitatem fecisti"
             , first: "O Lord, you have dealt graciously with your servant, &#42; "
             , second: "according to your word."
               }
           , { first: "Teach me discernment and knowledge, &#42; "
             , second: "for I have believed in your commandments."
               }
           , { first: "Before I was afflicted I went astray, &#42; "
             , second: "but now I keep your word."
               }
           , { first: "You are good and you bring forth good; &#42; "
             , second: "instruct me in your statutes."
               }
           , { first: "The proud have smeared me with lies, &#42; "
             , second: "but I will keep your commandments with my whole heart."
               }
           , { first: "Their heart is gross and fat, &#42; "
             , second: "but my delight is in your law."
               }
           , { first: "It is good for me that I have been afflicted, &#42; "
             , second: "that I might learn your statutes."
               }
           , { first: "The law of your mouth is dearer to me &#42; "
             , second: "than thousands in gold and silver."
               }
           , { title: "Yodh Manus tuæ fecerunt me"
             , first: "Your hands have made me and fashioned me; &#42; "
             , second: "give me understanding, that I may learn your commandments."
               }
           , { first: "Those who fear you will be glad when they see me, &#42; "
             , second: "because I trust in your word."
               }
           , { first: "I know, O Lord, that your judgments are right &#42; "
             , second: "and that in faithfulness you have afflicted me."
               }
           , { first: "Let your loving-kindness be my comfort, &#42; "
             , second: "as you have promised to your servant."
               }
           , { first: "Let your compassion come to me, that I may live, &#42; "
             , second: "for your law is my delight."
               }
           , { first: "Let the arrogant be put to shame, for they wrong me  with lies; &#42; "
             , second: "but I will meditate on your commandments."
               }
           , { first: "Let those who fear you turn to me, &#42; "
             , second: "and also those who know your decrees."
               }
           , { first: "Let my heart be sound in your statutes, &#42; "
             , second: "that I may not be put to shame."
               }
           , { title: "Kaph Defecit in salutare"
             , first: "My soul has longed for your salvation; &#42; "
             , second: "I have put my hope in your word."
               }
           , { first: "My eyes have failed from watching for your promise, &#42; "
             , second: "and I say, “When will you comfort me?”"
               }
           , { first: "I have become like a leather flask in the smoke, &#42; "
             , second: "but I have not forgotten your statutes."
               }
           , { first: "How much longer must I wait? &#42; "
             , second: "when will you give judgment against those who persecute me?"
               }
           , { first: "The proud have dug pits for me; &#42; "
             , second: "they do not keep your law."
               }
           , { first: "All your commandments are true; &#42; "
             , second: "help me, for they persecute me with lies."
               }
           , { first: "They had almost made an end of me on earth, &#42; "
             , second: "but I have not forsaken your commandments."
               }
           , { first: "In your loving-kindness, revive me, &#42; "
             , second: "that I may keep the decrees of your mouth."
             }
           , { title: "Lamedh In æternum, Domine"
             , first: "O Lord, your word is everlasting; &#42; "
             , second: "it stands firm in the heavens."
             }
           , { first: "Your faithfulness remains from one generation to another; &#42; "
             , second: "you established the earth, and it abides."
               }
           , { first: "By your decree these continue to this day, &#42; "
             , second: "for all things are your servants."
               }
           , { first: "If my delight had not been in your law, &#42; "
             , second: "I should have perished in my affliction."
               }
           , { first: "I will never forget your commandments, &#42; "
             , second: "because by them you give me life."
               }
           , { first: "I am yours; oh, that you would save me! &#42; "
             , second: "for I study your commandments."
               }
           , { first: "Though the wicked lie in wait for me to destroy me, &#42; "
             , second: "I will apply my mind to your decrees."
               }
           , { first: "I see that all things come to an end, &#42; "
             , second: "but your commandment has no bounds."
               }
           , { title: "Mem Quomodo dilexi!"
             , first: "Oh, how I love your law! &#42; "
             , second: "all the day long it is in my mind."
               }
           , { first: "Your commandment has made me wiser than my enemies, &#42; "
             , second: "and it is always with me."
               }
           , { first: "I have more understanding than all my teachers, &#42; "
             , second: "for your decrees are my study."
               }
           , { first: "I am wiser than the elders, &#42; "
             , second: "because I observe your commandments."
               }
           , { first: "I restrain my feet from every evil way, &#42; "
             , second: "that I may keep your word."
               }
           , { first: "I do not shrink from your judgments, &#42; "
             , second: "because you yourself have taught me."
               }
           , { first: "How sweet are your words to my taste! &#42; "
             , second: "they are sweeter than honey to my mouth."
               }
           , { first: "Through your commandments I gain understanding; &#42; "
             , second: "therefore I hate every lying way."
               }
           , { title: "Nun Lucerna pedibus meis"
             , first: "Your word is a lantern to my feet &#42; "
             , second: "and a light upon my path."
               }
           , { first: "I have sworn and am determined &#42; "
             , second: "to keep your righteous judgments."
               }
           , { first: "I am deeply troubled; &#42; "
             , second: "preserve my life, O Lord, according to your word."
               }
           , { first: "Accept, O Lord, the willing tribute of my lips, &#42; "
             , second: "and teach me your judgments."
               }
           , { first: "My life is always in my hand, &#42; "
             , second: "yet I do not forget your law."
               }
           , { first: "The wicked have set a trap for me, &#42; "
             , second: "but I have not strayed from your commandments."
               }
           , { first: "Your decrees are my inheritance for ever; &#42; "
             , second: "truly, they are the joy of my heart."
               }
           , { first: "I have applied my heart to fulfill your statutes &#42; "
             , second: "for ever and to the end."
               }
           , { title: "Samekh Iniquos odio habui"
             , first: "I hate those who have a divided heart, &#42; "
             , second: "but your law do I love."
               }
           , { first: "You are my refuge and shield; &#42; "
             , second: "my hope is in your word."
               }
           , { first: "Away from me, you wicked! &#42; "
             , second: "I will keep the commandments of my God."
               }
           , { first: "Sustain me according to your promise, that I may live, &#42; "
             , second: "and let me not be disappointed in my hope."
               }
           , { first: "Hold me up, and I shall be safe, &#42; "
             , second: "and my delight shall be ever in your statutes."
               }
           , { first: "You spurn all who stray from your statutes; &#42; "
             , second: "their deceitfulness is in vain."
               }
           , { first: "In your sight all the wicked of the earth are but dross; &#42; "
             , second: "therefore I love your decrees."
               }
           , { first: "My flesh trembles with dread of you; &#42; "
             , second: "I am afraid of your judgments."
               }
           , { title: "Ayin Feci judicium"
             , first: "I have done what is just and right; &#42; "
             , second: "do not deliver me to my oppressors."
               }
           , { first: "Be surety for your servant’s good; &#42; "
             , second: "let not the proud oppress me."
               }
           , { first: "My eyes have failed from watching for your salvation &#42; "
             , second: "and for your righteous promise."
               }
           , { first: "Deal with your servant according to your loving-kindness &#42; "
             , second: "and teach me your statutes."
               }
           , { first: "I am your servant; grant me understanding, &#42; "
             , second: "that I may know your decrees."
               }
           , { first: "It is time for you to act, O Lord, &#42; "
             , second: "for they have broken your law."
               }
           , { first: "Truly, I love your commandments &#42; "
             , second: "more than gold and precious stones."
               }
           , { first: "I hold all your commandments to be right for me; &#42; "
             , second: "all paths of falsehood I abhor."
               }
           , { title: "Pe Mirabilia"
             , first: "Your decrees are wonderful; &#42; "
             , second: "therefore I obey them with all my heart."
               }
           , { first: "When your word goes forth it gives light; &#42; "
             , second: "it gives understanding to the simple."
               }
           , { first: "I open my mouth and pant; &#42; "
             , second: "I long for your commandments."
               }
           , { first: "Turn to me in mercy, &#42; "
             , second: "as you always do to those who love your Name."
               }
           , { first: "Steady my footsteps in your word; &#42; "
             , second: "let no iniquity have dominion over me."
               }
           , { first: "Rescue me from those who oppress me, &#42; "
             , second: "and I will keep your commandments."
               }
           , { first: "Let your countenance shine upon your servant &#42; "
             , second: "and teach me your statutes."
               }
           , { first: "My eyes shed streams of tears, &#42; "
             , second: "because people do not keep your law."
               }
           , { title: "Sadhe Justus es, Domine"
             , first: "You are righteous, O Lord, &#42; "
             , second: "and upright are your judgments."
               }
           , { first: "You have issued your decrees &#42; "
             , second: "with justice and in perfect faithfulness."
               }
           , { first: "My indignation has consumed me, &#42; "
             , second: "because my enemies forget your words."
               }
           , { first: "Your word has been tested to the uttermost, &#42; "
             , second: "and your servant holds it dear."
               }
           , { first: "I am small and of little account, &#42; "
             , second: "yet I do not forget your commandments."
               }
           , { first: "Your justice is an everlasting justice &#42; "
             , second: "and your law is the truth."
               }
           , { first: "Trouble and distress have come upon me, &#42; "
             , second: "yet your commandments are my delight."
               }
           , { first: "The righteousness of your decrees is everlasting; &#42; "
             , second: "grant me understanding, that I may live."
               }
           , { title: "Qoph Clamavi in toto corde meo"
             , first: "I call with my whole heart; &#42; "
             , second: "answer me, O Lord, that I may keep your statutes."
               }
           , { first: "I call to you; oh, that you would save me! &#42; "
             , second: "I will keep your decrees."
               }
           , { first: "Early in the morning I cry out to you, &#42; "
             , second: "for in your word is my trust."
               }
           , { first: "My eyes are open in the night watches, &#42; "
             , second: "that I may meditate upon your promise."
               }
           , { first: "Hear my voice, O Lord, according to your loving-kindness; &#42; "
             , second: "according to your judgments, give me life."
               }
           , { first: "They draw near who in malice persecute me; &#42; "
             , second: "they are very far from your law."
               }
           , { first: "You, O Lord, are near at hand, &#42; "
             , second: "and all your commandments are true."
               }
           , { first: "Long have I known from your decrees &#42; "
             , second: "that you have established them for ever."
               }
       
           , { title: "Resh Vide humilitatem"
             , first: "Behold my affliction and deliver me, &#42; "
             , second: "for I do not forget your law."
             }
           , { first: "Plead my cause and redeem me; &#42; "
             , second: "according to your promise, give me life."
               }
           , { first: "Deliverance is far from the wicked, &#42; "
             , second: "for they do not study your statutes."
               }
           , { first: "Great is your compassion, O Lord; &#42; "
             , second: "preserve my life, according to your judgments."
               }
           , { first: "There are many who persecute and oppress me, &#42; "
             , second: "yet I have not swerved from your decrees."
               }
           , { first: "I look with loathing at the faithless, &#42; "
             , second: "for they have not kept your word."
               }
           , { first: "See how I love your commandments! &#42; "
             , second: "O Lord, in your mercy, preserve me."
               }
           , { first: "The heart of your word is truth; &#42; "
             , second: "all your righteous judgments endure for evermore."
               }
           , { title: "Shin Principes persecuti sunt"
             , first: "Rulers have persecuted me without a cause, &#42; "
             , second: "but my heart stands in awe of your word."
               }
           , { first: "I am as glad because of your promise &#42; "
             , second: "as one who finds great spoils."
               }
           , { first: "As for lies, I hate and abhor them, &#42; "
             , second: "but your law is my love."
               }
           , { first: "Seven times a day do I praise you, &#42; "
             , second: "because of your righteous judgments."
               }
           , { first: "Great peace have they who love your law; &#42; "
             , second: "for them there is no stumbling block."
               }
           , { first: "I have hoped for your salvation, O Lord, &#42; "
             , second: "and have fulfilled your commandments."
               }
           , { first: "I have kept your decrees &#42; "
             , second: "and I have loved them deeply."
               }
           , { first: "I have kept your commandments and decrees, &#42; "
             , second: "for all my ways are before you."
               }
           , { title: "Taw Appropinquet deprecatio"
             , first: "Let my cry come before you, O Lord; &#42; "
             , second: "give me understanding, according to your word."
               }
           , { first: "Let my supplication come before you; &#42; "
             , second: "deliver me, according to your promise."
               }
           , { first: "My lips shall pour forth your praise, &#42; "
             , second: "when you teach me your statutes."
               }
           , { first: "My tongue shall sing of your promise, &#42; "
             , second: "for all your commandments are righteous."
               }
           , { first: "Let your hand be ready to help me, &#42; "
             , second: "for I have chosen your commandments."
               }
           , { first: "I long for your salvation, O Lord, &#42; "
             , second: "and your law is my delight."
               }
           , { first: "Let me live, and I will praise you, &#42; "
             , second: "and let your judgments help me."
               }
           , { first: "I have gone astray like a sheep that is lost; &#42; "
             , second: "search for your servant, for I do not forget your commandments."
               }
             ]
    }
  , 120:
    { name: "Psalm 120."
    , title: "Ad Dominum"
    , vss: [ { first: "When I was in trouble, I called to the Lord; &#42; "
             , second: "I called to the Lord, and he answered me."
               }
           , { first: "Deliver me, O Lord, from lying lips &#42; "
             , second: "and from the deceitful tongue."
               }
           , { first: "What shall be done to you, and what more besides, &#42; "
             , second: "O you deceitful tongue?"
               }
           , { first: "The sharpened arrows of a warrior, &#42; "
             , second: "along with hot glowing coals."
               }
           , { first: "How hateful it is that I must lodge in Meshech &#42; "
             , second: "and dwell among the tents of Kedar!"
               }
           , { first: "Too long have I had to live &#42; "
             , second: "among the enemies of peace."
               }
           , { first: "I am on the side of peace, &#42; "
             , second: "but when I speak of it, they are for war."
               }
             ]
    }
  , 121:
    { name: "Psalm 121."
    , title: "Levavi oculos"
    , vss: [ { first: "I lift up my eyes to the hills; &#42; "
             , second: "from where is my help to come?"
               }
           , { first: "My help comes from the Lord, &#42; "
             , second: "the maker of heaven and earth."
               }
           , { first: "He will not let your foot be moved &#42; "
             , second: "and he who watches over you will not fall asleep."
               }
           , { first: "Behold, he who keeps watch over Israel &#42; "
             , second: "shall neither slumber nor sleep;"
               }
           , { first: "The Lord himself watches over you; &#42; "
             , second: "the Lord is your shade at your right hand,"
               }
           , { first: "So that the sun shall not strike you by day, &#42; "
             , second: "nor the moon by night."
               }
           , { first: "The Lord shall preserve you from all evil; &#42; "
             , second: "it is he who shall keep you safe."
               }
           , { first: "The Lord shall watch over your going out and your coming in, &#42; "
             , second: "from this time forth for evermore."
               }
             ]
    }
  , 122:
    { name: "Psalm 122."
    , title: "Lætatus sum"
    , vss: [ { first: "I was glad when they said to me, &#42; "
             , second: "“Let us go to the house of the Lord.”"
               }
           , { first: "Now our feet are standing &#42; "
             , second: "within your gates, O Jerusalem."
               }
           , { first: "Jerusalem is built as a city &#42; "
             , second: "that is at unity with itself;"
               }
           , { first: "To which the tribes go up, the tribes of the Lord, &#42; "
             , second: "the assembly of Israel, to praise the Name of the Lord."
               }
           , { first: "For there are the thrones of judgment, &#42; "
             , second: "the thrones of the house of David."
               }
           , { first: "Pray for the peace of Jerusalem: &#42; "
             , second: "“May they prosper who love you."
               }
           , { first: "Peace be within your walls &#42; "
             , second: "and quietness within your towers."
               }
           , { first: "For my brethren and companions’ sake, &#42; "
             , second: "I pray for your prosperity."
               }
           , { first: "Because of the house of the Lord our God, &#42; "
             , second: "I will seek to do you good.”"
               }
             ]
    }
  , 123:
    { name: "Psalm 123."
    , title: "Ad te levavi oculos meos"
    , vss: [ { first: "To you I lift up my eyes, &#42; "
             , second: "to you enthroned in the heavens."
               }
           , { first: "As the eyes of servants look to the hand of their masters, &#42; "
             , second: "and the eyes of a maid to the hand of her mistress,"
               }
           , { first: "So our eyes look to the Lord our God, &#42; "
             , second: "until he show us his mercy."
               }
           , { first: "Have mercy upon us, O Lord, have mercy, &#42; "
             , second: "for we have had more than enough of contempt,"
               }
           , { first: "Too much of the scorn of the indolent rich, &#42; "
             , second: "and of the derision of the proud."
               }
             ]
    }
  , 124:
    { name: "Psalm 124."
    , title: "Nisi quia Dominus"
    , vss: [ { first: "If the Lord had not been on our side, &#42; "
             , second: "let Israel now say;"
               }
           , { first: "If the Lord had not been on our side, &#42; "
             , second: "when enemies rose up against us;"
               }
           , { first: "Then would they have swallowed us up alive &#42; "
             , second: "in their fierce anger toward us;"
               }
           , { first: "Then would the waters have overwhelmed us &#42; "
             , second: "and the torrent gone over us;"
               }
           , { first: "Then would the raging waters &#42; "
             , second: "have gone right over us."
               }
           , { first: "Blessed be the Lord! &#42; "
             , second: "he has not given us over to be a prey for their teeth."
               }
           , { first: "We have escaped like a bird from the snare of the fowler; &#42; "
             , second: "the snare is broken, and we have escaped."
               }
           , { first: "Our help is in the Name of the Lord, &#42; "
             , second: "the maker of heaven and earth."
               }
             ]
    }
  , 125:
    { name: "Psalm 125."
    , title: "Qui confidunt"
    , vss: [ { first: "Those who trust in the Lord are like Mount Zion, &#42; "
             , second: "which cannot be moved, but stands fast for ever."
               }
           , { first: "The hills stand about Jerusalem; &#42; "
             , second: "so does the Lord stand round about his people, from this time forth for evermore."
               }
           , { first: "The scepter of the wicked shall not hold sway over the land allotted to the just, &#42; "
             , second: "so that the just shall not put their hands to evil."
               }
           , { first: "Show your goodness, O Lord, to those who are good &#42; "
             , second: "and to those who are true of heart."
               }
           , { first: "As for those who turn aside to crooked ways, the Lord will lead them away with the evildoers; &#42; "
             , second: "but peace be upon Israel."
               }
             ]
    }
  , 126:
    { name: "Psalm 126."
    , title: "In convertendo"
    , vss: [ { first: "When the Lord restored the fortunes of Zion, &#42; "
             , second: "then were we like those who dream."
               }
           , { first: "Then was our mouth filled with laughter, &#42; "
             , second: "and our tongue with shouts of joy."
               }
           , { first: "Then they said among the nations, &#42; "
             , second: "“The Lord has done great things for them.”"
               }
           , { first: "The Lord has done great things for us, &#42; "
             , second: "and we are glad indeed."
               }
           , { first: "Restore our fortunes, O Lord, &#42; "
             , second: "like the watercourses of the Negev."
               }
           , { first: "Those who sowed with tears &#42; "
             , second: "will reap with songs of joy."
               }
           , { first: "Those who go out weeping, carrying the seed, &#42; "
             , second: "will come again with joy, shouldering their sheaves."
               }
             ]
    }
  , 127:
    { name: "Psalm 127."
    , title: "Nisi Dominus"
    , vss: [ { first: "Unless the Lord builds the house, &#42; "
             , second: "their labor is in vain who build it."
               }
           , { first: "Unless the Lord watches over the city, &#42; "
             , second: "in vain the watchman keeps his vigil."
               }
           , { first: "It is in vain that you rise so early and go to bed so late; &#42; "
             , second: "vain, too, to eat the bread of toil, for he gives to his beloved sleep."
               }
           , { first: "Children are a heritage from the Lord, &#42; "
             , second: "and the fruit of the womb is a gift."
               }
           , { first: "Like arrows in the hand of a warrior &#42; "
             , second: "are the children of one’s youth."
               }
           , { first: "Happy is the man who has his quiver full of them! &#42; "
             , second: "he shall not be put to shame when he contends with his enemies in the gate."
               }
             ]
    }
  , 128:
    { name: "Psalm 128."
    , title: "Beati omnes"
    , vss: [ { first: "Happy are they all who fear the Lord, &#42; "
             , second: "and who follow in his ways!"
               }
           , { first: "You shall eat the fruit of your labor; &#42; "
             , second: "happiness and prosperity shall be yours."
               }
           , { first: "Your wife shall be like a fruitful vine within your house, &#42; "
             , second: "your children like olive shoots round about your table."
               }
           , { first: "The man who fears the Lord &#42; "
             , second: "shall thus indeed be blessed."
               }
           , { first: "The Lord bless you from Zion, &#42; "
             , second: "and may you see the prosperity of Jerusalem all the days of your life."
               }
           , { first: "May you live to see your children’s children; &#42; "
             , second: "may peace be upon Israel."
               }
             ]
    }
  , 129:
    { name: "Psalm 129."
    , title: "Sæpe expugnaverunt"
    , vss: [ { first: "“Greatly have they oppressed me since my youth,” &#42; "
             , second: "let Israel now say;"
               }
           , { first: "“Greatly have they oppressed me since my youth, &#42; "
             , second: "but they have not prevailed against me.”"
               }
           , { first: "The plowmen plowed upon my back &#42; "
             , second: "and made their furrows long."
               }
           , { first: "The Lord, the Righteous One, &#42; "
             , second: "has cut the cords of the wicked."
               }
           , { first: "Let them be put to shame and thrown back, &#42; "
             , second: "all those who are enemies of Zion."
               }
           , { first: "Let them be like grass upon the housetops, &#42; "
             , second: "which withers before it can be plucked;"
               }
           , { first: "Which does not fill the hand of the reaper, &#42; "
             , second: "nor the bosom of him who binds the sheaves;"
               }
           , { first: "So that those who go by say not so much as, “The Lord prosper you. &#42; "
             , second: "We wish you well in the Name of the Lord.”"
               }
             ]
    }
  , 130:
    { name: "Psalm 130."
    , title: "De profundis"
    , vss: [ { first: "Out of the depths have I called to you, O Lord; Lord, hear my voice; &#42; "
             , second: "let your ears consider well the voice of my supplication."
               }
           , { first: "If you, Lord, were to note what is done amiss, &#42; "
             , second: "O Lord, who could stand?"
               }
           , { first: "For there is forgiveness with you; &#42; "
             , second: "therefore you shall be feared."
               }
           , { first: "I wait for the Lord; my soul waits for him; &#42; "
             , second: "in his word is my hope."
               }
           , { first: "My soul waits for the Lord, more than watchmen for the morning, &#42; "
             , second: "more than watchmen for the morning."
               }
           , { first: "O Israel, wait for the Lord, &#42; "
             , second: "for with the Lord there is mercy;"
               }
           , { first: "With him there is plenteous redemption, &#42; "
             , second: "and he shall redeem Israel from all their sins."
               }
             ]
    }
  , 131:
    { name: "Psalm 131."
    , title: "Domine, non est"
    , vss: [ { first: "O Lord, I am not proud; &#42; "
             , second: "I have no haughty looks."
               }
           , { first: "I do not occupy myself with great matters, &#42; "
             , second: "or with things that are too hard for me."
               }
           , { first: "But I still my soul and make it quiet, like a child upon its mother’s breast; &#42; "
             , second: "my soul is quieted within me."
               }
           , { first: "O Israel, wait upon the Lord, &#42; "
             , second: "from this time forth for evermore."
               }
             ]
    }
  , 132:
    { name: "Psalm 132."
    , title: "Memento, Domine"
    , vss: [ { first: "Lord, remember David, &#42; "
             , second: "and all the hardships he endured;"
               }
           , { first: "How he swore an oath to the Lord &#42; "
             , second: "and vowed a vow to the Mighty One of Jacob:"
               }
           , { first: "“I will not come under the roof of my house, &#42; "
             , second: "nor climb up into my bed;"
               }
           , { first: "I will not allow my eyes to sleep, &#42; "
             , second: "nor let my eyelids slumber;"
               }
           , { first: "Until I find a place for the Lord, &#42; "
             , second: "a dwelling for the Mighty One of Jacob.”"
               }
           , { first: "“The ark! We heard it was in Ephratah; &#42; "
             , second: "we found it in the fields of Jearim."
               }
           , { first: "Let us go to God’s dwelling place; &#42; "
             , second: "let us fall upon our knees before his footstool.”"
               }
           , { first: "Arise, O Lord, into your resting-place, &#42; "
             , second: "you and the ark of your strength."
               }
           , { first: "Let your priests be clothed with righteousness; &#42; "
             , second: "let your faithful people sing with joy."
               }
           , { first: "For your servant David’s sake, &#42; "
             , second: "do not turn away the face of your Anointed."
               }
           , { first: "The Lord has sworn an oath to David; &#42; "
             , second: "in truth, he will not break it:"
               }
           , { first: "“A son, the fruit of your body &#42; "
             , second: "will I set upon your throne."
               }
           , { first: "If your children keep my covenant and my testimonies that I shall teach them, &#42; "
             , second: "their children will sit upon your throne for evermore.”"
               }
           , { first: "For the Lord has chosen Zion; &#42; "
             , second: "he has desired her for his habitation:"
               }
           , { first: "“This shall be my resting-place for ever; &#42; "
             , second: "here will I dwell, for I delight in her."
               }
           , { first: "I will surely bless her provisions, &#42; "
             , second: "and satisfy her poor with bread."
               }
           , { first: "I will clothe her priests with salvation, &#42; "
             , second: "and her faithful people will rejoice and sing."
               }
           , { first: "There will I make the horn of David flourish; &#42; "
             , second: "I have prepared a lamp for my Anointed."
               }
           , { first: "As for his enemies, I will clothe them with shame; &#42; "
             , second: "but as for him, his crown will shine.”"
               }
             ]
    }
  , 133:
    { name: "Psalm 133."
    , title: "Ecce, quam bonum!"
    , vss: [ { first: "Oh, how good and pleasant it is, &#42; "
             , second: "when brethren live together in unity!"
               }
           , { first: "It is like fine oil upon the head &#42; "
             , second: "that runs down upon the beard,"
               }
           , { first: "Upon the beard of Aaron, &#42; "
             , second: "and runs down upon the collar of his robe."
               }
           , { first: "It is like the dew of Hermon &#42; "
             , second: "that falls upon the hills of Zion."
               }
           , { first: "For there the Lord has ordained the blessing: &#42; "
             , second: "life for evermore."
               }
             ]
    }
  , 134:
    { name: "Psalm 134."
    , title: "Ecce nunc"
    , vss: [ { first: "Behold now, bless the Lord, all you servants of the Lord, &#42; "
             , second: "you that stand by night in the house of the Lord."
               }
           , { first: "Lift up your hands in the holy place and bless the Lord; &#42; "
             , second: "the Lord who made heaven and earth bless you out of Zion."
               }
             ]
    }
  , 135:
    { name: "Psalm 135."
    , title: "Laudate nomen"
    , vss: [ { first: "Hallelujah! Praise the Name of the Lord; &#42; "
             , second: "give praise, you servants of the Lord,"
               }
           , { first: "You who stand in the house of the Lord, &#42; "
             , second: "in the courts of the house of our God."
               }
           , { first: "Praise the Lord, for the Lord is good; &#42; "
             , second: "sing praises to his Name, for it is lovely."
               }
           , { first: "For the Lord has chosen Jacob for himself &#42; "
             , second: "and Israel for his own possession."
               }
           , { first: "For I know that the Lord is great, &#42; "
             , second: "and that our Lord is above all gods."
               }
           , { first: "The Lord does whatever pleases him, in heaven and on earth, &#42; "
             , second: "in the seas and all the deeps."
               }
           , { first: "He brings up rain clouds from the ends of the earth; &#42; "
             , second: "he sends out lightning with the rain, and brings the winds out of his storehouse."
               }
           , { first: "It was he who struck down the firstborn of Egypt, &#42; "
             , second: "the firstborn both of man and beast."
               }
           , { first: "He sent signs and wonders into the midst of you, O Egypt, &#42; "
             , second: "against Pharaoh and all his servants."
               }
           , { first: "He overthrew many nations &#42; "
             , second: "and put mighty kings to death:"
               }
           , { first: "Sihon, king of the Amorites, and Og, the king of Bashan, &#42; "
             , second: "and all the kingdoms of Canaan."
               }
           , { first: "He gave their land to be an inheritance, &#42; "
             , second: "an inheritance for Israel his people."
               }
           , { first: "O Lord, your Name is everlasting; &#42; "
             , second: "your renown, O Lord, endures from age to age."
               }
           , { first: "For the Lord gives his people justice &#42; "
             , second: "and shows compassion to his servants."
               }
           , { first: "The idols of the heathen are silver and gold, &#42; "
             , second: "the work of human hands."
               }
           , { first: "They have mouths, but they cannot speak; &#42; "
             , second: "eyes have they, but they cannot see."
               }
           , { first: "They have ears, but they cannot hear; &#42; "
             , second: "neither is there any breath in their mouth."
               }
           , { first: "Those who make them are like them, &#42; "
             , second: "and so are all who put their trust in them."
               }
           , { first: "Bless the Lord, O house of Israel; &#42; "
             , second: "O house of Aaron, bless the Lord."
               }
           , { first: "Bless the Lord, O house of Levi; &#42; "
             , second: "you who fear the Lord, bless the Lord."
               }
           , { first: "Blessed be the Lord out of Zion, &#42; "
             , second: "who dwells in Jerusalem. Hallelujah!"
               }
             ]
    }
  , 136:
    { name: "Psalm 136."
    , title: "Confitemini"
    , vss: [ { first: "Give thanks to the Lord, for he is good, &#42; "
             , second: "for his mercy endures for ever."
               }
           , { first: "Give thanks to the God of gods, &#42; "
             , second: "for his mercy endures for ever."
               }
           , { first: "Give thanks to the Lord of lords, &#42; "
             , second: "for his mercy endures for ever."
               }
           , { first: "Who only does great wonders, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "Who by wisdom made the heavens, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "Who spread out the earth upon the waters, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "Who created great lights, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "The sun to rule the day, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "The moon and the stars to govern the night, &#42; "
             , second: "for his mercy endures for ever."
               }
           , { first: "Who struck down the firstborn of Egypt, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "And brought out Israel from among them, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "With a mighty hand and a stretched-out arm, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "Who divided the Red Sea in two, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "And made Israel to pass through the midst of it, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "But swept Pharaoh and his army into the Red Sea, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "Who led his people through the wilderness, &#42; "
             , second: "for his mercy endures for ever."
               }
           , { first: "Who struck down great kings, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "And slew mighty kings, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "Sihon, king of the Amorites, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "And Og, the king of Bashan, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "And gave away their lands for an inheritance, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "An inheritance for Israel his servant, &#42; "
             , second: "for his mercy endures for ever."
               }
           , { first: "Who remembered us in our low estate, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "And delivered us from our enemies, &#42; "
             , second: "for his mercy endures for ever;"
               }
           , { first: "Who gives food to all creatures, &#42; "
             , second: "for his mercy endures for ever."
               }
           , { first: "Give thanks to the God of heaven, &#42; "
             , second: "for his mercy endures for ever."
               }
             ]
    }
  , 137:
    { name: "Psalm 137."
    , title: "Super flumina"
    , vss: [ { first: "By the waters of Babylon we sat down and wept, &#42; "
             , second: "when we remembered you, O Zion."
               }
           , { first: "As for our harps, we hung them up &#42; "
             , second: "on the trees in the midst of that land."
               }
           , { first: "For those who led us away captive asked us for a song, and our oppressors called for mirth: &#42; "
             , second: "“Sing us one of the songs of Zion.”"
               }
           , { first: "How shall we sing the Lord’s song &#42; "
             , second: "upon an alien soil?"
               }
           , { first: "If I forget you, O Jerusalem, &#42; "
             , second: "let my right hand forget its skill."
               }
           , { first: "Let my tongue cleave to the roof of my mouth if I do not remember you, &#42; "
             , second: "if I do not set Jerusalem above my highest joy."
               }
           , { first: "Remember the day of Jerusalem, O Lord, against the people of Edom, &#42; "
             , second: "who said, “Down with it! down with it! even to the ground!”"
               }
           , { first: "O Daughter of Babylon, doomed to destruction, &#42; "
             , second: "happy the one who pays you back for what you have done to us!"
               }
           , { first: "Happy shall he be who takes your little ones, &#42; "
             , second: "and dashes them against the rock!"
               }
             ]
    }
  , 138:
    { name: "Psalm 138."
    , title: "Confitebor tibi"
    , vss: [ { first: "I will give thanks to you, O Lord, with my whole heart; &#42; "
             , second: "before the gods I will sing your praise."
               }
           , { first: "I will bow down toward your holy temple and praise your Name, &#42; "
             , second: "because of your love and faithfulness;"
               }
           , { first: "For you have glorified your Name &#42; "
             , second: "and your word above all things."
               }
           , { first: "When I called, you answered me; &#42; "
             , second: "you increased my strength within me."
               }
           , { first: "All the kings of the earth will praise you, O Lord, &#42; "
             , second: "when they have heard the words of your mouth."
               }
           , { first: "They will sing of the ways of the Lord, &#42; "
             , second: "that great is the glory of the Lord."
               }
           , { first: "Though the Lord be high, he cares for the lowly; &#42; "
             , second: "he perceives the haughty from afar."
               }
           , { first: "Though I walk in the midst of trouble, you keep me safe; &#42; "
             , second: "you stretch forth your hand against the fury of my enemies; your right hand shall save me."
               }
           , { first: "The Lord will make good his purpose for me; &#42; "
             , second: "O Lord, your love endures for ever; do not abandon the works of your hands."
               }
             ]
    }
  , 139:
    { name: "Psalm 139."
    , title: "Domine, probasti"
    , vss: [ { first: "Lord, you have searched me out and known me; &#42; "
             , second: "you know my sitting down and my rising up; you discern my thoughts from afar."
               }
           , { first: "You trace my journeys and my resting-places &#42; "
             , second: "and are acquainted with all my ways."
               }
           , { first: "Indeed, there is not a word on my lips, &#42; "
             , second: "but you, O Lord, know it altogether."
               }
           , { first: "You press upon me behind and before &#42; "
             , second: "and lay your hand upon me."
               }
           , { first: "Such knowledge is too wonderful for me; &#42; "
             , second: "it is so high that I cannot attain to it."
               }
           , { first: "Where can I go then from your Spirit? &#42; "
             , second: "where can I flee from your presence?"
               }
           , { first: "If I climb up to heaven, you are there; &#42; "
             , second: "if I make the grave my bed, you are there also."
               }
           , { first: "If I take the wings of the morning &#42; "
             , second: "and dwell in the uttermost parts of the sea,"
               }
           , { first: "Even there your hand will lead me &#42; "
             , second: "and your right hand hold me fast."
               }
           , { first: "If I say, “Surely the darkness will cover me, &#42; "
             , second: "and the light around me turn to night,”"
               }
           , { first: "Darkness is not dark to you; the night is as bright as the day; &#42; "
             , second: "darkness and light to you are both alike."
               }
           , { first: "For you yourself created my inmost parts; &#42; "
             , second: "you knit me together in my mother’s womb."
               }
           , { first: "I will thank you because I am marvelously made; &#42; "
             , second: "your works are wonderful, and I know it well."
               }
           , { first: "My body was not hidden from you, &#42; "
             , second: "while I was being made in secret and woven in the depths of the earth."
               }
           , { first: "Your eyes beheld my limbs, yet unfinished in the womb; all of them were written in your book; &#42; "
             , second: "they were fashioned day by day, when as yet there was none of them."
               }
           , { first: "How deep I find your thoughts, O God! &#42; "
             , second: "how great is the sum of them!"
               }
           , { first: "If I were to count them, they would be more in number than the sand; &#42; "
             , second: "to count them all, my life span would need to be like yours."
               }
           , { first: "Oh, that you would slay the wicked, O God! &#42; "
             , second: "You that thirst for blood, depart from me."
               }
           , { first: "They speak despitefully against you; &#42; "
             , second: "your enemies take your Name in vain."
               }
           , { first: "Do I not hate those, O Lord, who hate you? &#42; "
             , second: "and do I not loathe those who rise up against you?"
               }
           , { first: "I hate them with a perfect hatred; &#42; "
             , second: "they have become my own enemies."
               }
           , { first: "Search me out, O God, and know my heart; &#42; "
             , second: "try me and know my restless thoughts."
               }
           , { first: "Look well whether there be any wickedness in me &#42; "
             , second: "and lead me in the way that is everlasting."
               }
             ]
    }
  , 140:
    { name: "Psalm 140."
    , title: "Eripe me, Domine"
    , vss: [ { first: "Deliver me, O Lord, from evildoers; &#42; "
             , second: "protect me from the violent,"
               }
           , { first: "Who devise evil in their hearts &#42; "
             , second: "and stir up strife all day long."
               }
           , { first: "They have sharpened their tongues like a serpent; &#42; "
             , second: "adder’s poison is under their lips."
               }
           , { first: "Keep me, O Lord, from the hands of the wicked; &#42; "
             , second: "protect me from the violent, who are determined to trip me up."
               }
           , { first: "The proud have hidden a snare for me and stretched out a net of cords; &#42; "
             , second: "they have set traps for me along the path."
               }
           , { first: "I have said to the Lord, “You are my God; &#42; "
             , second: "listen, O Lord, to my supplication."
               }
           , { first: "O Lord God, the strength of my salvation, &#42; "
             , second: "you have covered my head in the day of battle."
               }
           , { first: "Do not grant the desires of the wicked, O Lord, &#42; "
             , second: "nor let their evil plans prosper."
               }
           , { first: "Let not those who surround me lift up their heads; &#42; "
             , second: "let the evil of their lips overwhelm them."
               }
           , { first: "Let hot burning coals fall upon them; &#42; "
             , second: "let them be cast into the mire, never to rise up again.”"
               }
           , { first: "A slanderer shall not be established on the earth, &#42; "
             , second: "and evil shall hunt down the lawless."
               }
           , { first: "I know that the Lord will maintain the cause of the poor &#42; "
             , second: "and render justice to the needy."
               }
           , { first: "Surely, the righteous will give thanks to your Name, &#42; "
             , second: "and the upright shall continue in your sight."
               }
             ]
    }
  , 141:
    { name: "Psalm 141."
    , title: "Domine, clamavi"
    , vss: [ { first: "O Lord, I call to you; come to me quickly; &#42; "
             , second: "hear my voice when I cry to you."
               }
           , { first: "Let my prayer be set forth in your sight as incense, &#42; "
             , second: "the lifting up of my hands as the evening sacrifice."
               }
           , { first: "Set a watch before my mouth, O Lord, and guard the door of my lips; &#42; "
             , second: "let not my heart incline to any evil thing."
               }
           , { first: "Let me not be occupied in wickedness with evildoers, &#42; "
             , second: "nor eat of their choice foods."
               }
           , { first: "Let the righteous smite me in friendly rebuke; let not the oil of the unrighteous anoint my head; &#42; "
             , second: "for my prayer is continually against their wicked deeds."
               }
           , { first: "Let their rulers be overthrown in stony places, &#42; "
             , second: "that they may know my words are true."
               }
           , { first: "As when a plowman turns over the earth in furrows, &#42; "
             , second: "let their bones be scattered at the mouth of the grave."
               }
           , { first: "But my eyes are turned to you, Lord God; &#42; "
             , second: "in you I take refuge; do not strip me of my life."
               }
           , { first: "Protect me from the snare which they have laid for me &#42; "
             , second: "and from the traps of the evildoers."
               }
           , { first: "Let the wicked fall into their own nets, &#42; "
             , second: "while I myself escape."
               }
             ]
    }
  , 142:
    { name: "Psalm 142."
    , title: "Voce mea ad Dominum"
    , vss: [ { first: "I cry to the Lord with my voice; &#42; "
             , second: "to the Lord I make loud supplication."
               }
           , { first: "I pour out my complaint before him &#42; "
             , second: "and tell him all my trouble."
               }
           , { first: "When my spirit languishes within me, you know my path; &#42; "
             , second: "in the way wherein I walk they have hidden a trap for me."
               }
           , { first: "I look to my right hand and find no one who knows me; &#42; "
             , second: "I have no place to flee to, and no one cares for me."
               }
           , { first: "I cry out to you, O Lord; &#42; "
             , second: "I say, “You are my refuge, my portion in the land of the living.”"
               }
           , { first: "Listen to my cry for help, for I have been brought very low; &#42; "
             , second: "save me from those who pursue me, for they are too strong for me."
               }
           , { first: "Bring me out of prison, that I may give thanks to your Name; &#42; "
             , second: "when you have dealt bountifully with me, the righteous will gather around me."
               }
             ]
    }
  , 143:
    { name: "Psalm 143."
    , title: "Domine, exaudi"
    , vss: [ { first: "Lord, hear my prayer, and in your faithfulness heed my supplications; &#42; "
             , second: "answer me in your righteousness."
               }
           , { first: "Enter not into judgment with your servant, &#42; "
             , second: "for in your sight shall no one living be justified."
               }
           , { first: "For my enemy has sought my life; he has crushed me to the ground; &#42; "
             , second: "he has made me live in dark places like those who are long dead."
               }
           , { first: "My spirit faints within me; &#42; "
             , second: "my heart within me is desolate."
               }
           , { first: "I remember the time past; I muse upon all your deeds; &#42; "
             , second: "I consider the works of your hands."
               }
           , { first: "I spread out my hands to you; &#42; "
             , second: "my soul gasps to you like a thirsty land."
               }
           , { first: "O Lord, make haste to answer me; my spirit fails me; &#42; "
             , second: "do not hide your face from me or I shall be like those who go down to the Pit."
               }
           , { first: "Let me hear of your loving-kindness in the morning, for I put my trust in you; &#42; "
             , second: "show me the road that I must walk, for I lift up my soul to you."
               }
           , { first: "Deliver me from my enemies, O Lord, &#42; "
             , second: "for I flee to you for refuge."
               }
           , { first: "Teach me to do what pleases you, for you are my God; &#42; "
             , second: "let your good Spirit lead me on level ground."
               }
           , { first: "Revive me, O Lord, for your Name’s sake; &#42; "
             , second: "for your righteousness’ sake, bring me out of trouble."
               }
           , { first: "Of your goodness, destroy my enemies and bring all my foes to naught, &#42; "
             , second: "for truly I am your servant."
               }
             ]
    }
  , 144:
    { name: "Psalm 144."
    , title: "Benedictus Dominus"
    , vss: [ { first: "Blessed be the Lord my rock! &#42; "
             , second: "who trains my hands to fight and my fingers to battle;"
               }
           , { first: "My help and my fortress, my stronghold and my deliverer, &#42; "
             , second: "my shield in whom I trust, who subdues the peoples under me."
               }
           , { first: "O Lord, what are we that you should care for us? &#42; "
             , second: "mere mortals that you should think of us?"
               }
           , { first: "We are like a puff of wind; &#42; "
             , second: "our days are like a passing shadow."
               }
           , { first: "Bow your heavens, O Lord, and come down; &#42; "
             , second: "touch the mountains, and they shall smoke."
               }
           , { first: "Hurl the lightning and scatter them; &#42; "
             , second: "shoot out your arrows and rout them."
               }
           , { first: "Stretch out your hand from on high; &#42; "
             , second: "rescue me and deliver me from the great waters, from the hand of foreign peoples,"
               }
           , { first: "Whose mouths speak deceitfully &#42; "
             , second: "and whose right hand is raised in falsehood."
               }
           , { first: "O God, I will sing to you a new song; &#42; "
             , second: "I will play to you on a ten-stringed lyre."
               }
           , { first: "You give victory to kings &#42; "
             , second: "and have rescued David your servant."
               }
           , { first: "Rescue me from the hurtful sword &#42; "
             , second: "and deliver me from the hand of foreign peoples,"
               }
           , { first: "Whose mouths speak deceitfully &#42; "
             , second: "and whose right hand is raised in falsehood."
               }
           , { first: "May our sons be like plants well nurtured from their youth, &#42; "
             , second: "and our daughters like sculptured corners of a palace."
               }
           , { first: "May our barns be filled to overflowing with all manner of crops; &#42; "
             , second: "may the flocks in our pastures increase by thousands and tens of thousands; may our cattle be fat and sleek."
               }
           , { first: "May there be no breaching of the walls, no going into exile, &#42; "
             , second: "no wailing in the public squares."
               }
           , { first: "Happy are the people of whom this is so! &#42; "
             , second: "happy are the people whose God is the Lord!"
               }
             ]
    }
  , 145:
    { name: "Psalm 145."
    , title: "Exaltabo te, Deus"
    , vss: [ { first: "I will exalt you, O God my King, &#42; "
             , second: "and bless your Name for ever and ever."
               }
           , { first: "Every day will I bless you &#42; "
             , second: "and praise your Name for ever and ever."
               }
           , { first: "Great is the Lord and greatly to be praised; &#42; "
             , second: "there is no end to his greatness."
               }
           , { first: "One generation shall praise your works to another &#42; "
             , second: "and shall declare your power."
               }
           , { first: "I will ponder the glorious splendor of your majesty &#42; "
             , second: "and all your marvelous works."
               }
           , { first: "They shall speak of the might of your wondrous acts, &#42; "
             , second: "and I will tell of your greatness."
               }
           , { first: "They shall publish the remembrance of your great goodness; &#42; "
             , second: "they shall sing of your righteous deeds."
               }
           , { first: "The Lord is gracious and full of compassion, &#42; "
             , second: "slow to anger and of great kindness."
               }
           , { first: "The Lord is loving to everyone &#42; "
             , second: "and his compassion is over all his works."
               }
           , { first: "All your works praise you, O Lord, &#42; "
             , second: "and your faithful servants bless you."
               }
           , { first: "They make known the glory of your kingdom &#42; "
             , second: "and speak of your power;"
               }
           , { first: "That the peoples may know of your power &#42; "
             , second: "and the glorious splendor of your kingdom."
               }
           , { first: "Your kingdom is an everlasting kingdom; &#42; "
             , second: "your dominion endures throughout all ages."
               }
           , { first: "The Lord is faithful in all his words &#42; "
             , second: "and merciful in all his deeds."
               }
           , { first: "The Lord upholds all those who fall; &#42; "
             , second: "he lifts up those who are bowed down."
               }
           , { first: "The eyes of all wait upon you, O Lord, &#42; "
             , second: "and you give them their food in due season."
               }
           , { first: "You open wide your hand &#42; "
             , second: "and satisfy the needs of every living creature."
               }
           , { first: "The Lord is righteous in all his ways &#42; "
             , second: "and loving in all his works."
               }
           , { first: "The Lord is near to those who call upon him, &#42; "
             , second: "to all who call upon him faithfully."
               }
           , { first: "He fulfills the desire of those who fear him; &#42; "
             , second: "he hears their cry and helps them."
               }
           , { first: "The Lord preserves all those who love him, &#42; "
             , second: "but he destroys all the wicked."
               }
           , { first: "My mouth shall speak the praise of the Lord; &#42; "
             , second: "let all flesh bless his holy Name for ever and ever."
               }
             ]
    }
  , 146:
    { name: "Psalm 146."
    , title: "Lauda, anima mea"
    , vss: [ { first: "Hallelujah! Praise the Lord, O my soul! &#42; "
             , second: "I will praise the Lord as long as I live; I will sing praises to my God while I have my being."
               }
           , { first: "Put not your trust in rulers, nor in any child of earth, &#42; "
             , second: "for there is no help in them."
               }
           , { first: "When they breathe their last, they return to earth, &#42; "
             , second: "and in that day their thoughts perish."
               }
           , { first: "Happy are they who have the God of Jacob for their help! &#42; "
             , second: "whose hope is in the Lord their God;"
               }
           , { first: "Who made heaven and earth, the seas, and all that is in them; &#42; "
             , second: "who keeps his promise for ever;"
               }
           , { first: "Who gives justice to those who are oppressed, &#42; "
             , second: "and food to those who hunger."
               }
           , { first: "The Lord sets the prisoners free; the Lord opens the eyes of the blind; &#42; "
             , second: "the Lord lifts up those who are bowed down;"
               }
           , { first: "The Lord loves the righteous; the Lord cares for the stranger; &#42; "
             , second: "he sustains the orphan and widow, but frustrates the way of the wicked."
               }
           , { first: "The Lord shall reign for ever, &#42; "
             , second: "your God, O Zion, throughout all generations. Hallelujah!"
               }
             ]
    }
  , 147:
    { name: "Psalm 147."
    , title: "Laudate Dominum"
    , vss: [ { first: "Hallelujah! How good it is to sing praises to our God! &#42; "
             , second: "how pleasant it is to honor him with praise!"
               }
           , { first: "The Lord rebuilds Jerusalem; &#42; "
             , second: "he gathers the exiles of Israel."
               }
           , { first: "He heals the brokenhearted &#42; "
             , second: "and binds up their wounds."
               }
           , { first: "He counts the number of the stars &#42; "
             , second: "and calls them all by their names."
               }
           , { first: "Great is our Lord and mighty in power; &#42; "
             , second: "there is no limit to his wisdom."
               }
           , { first: "The Lord lifts up the lowly, &#42; "
             , second: "but casts the wicked to the ground."
               }
           , { first: "Sing to the Lord with thanksgiving; &#42; "
             , second: "make music to our God upon the harp."
               }
           , { first: "He covers the heavens with clouds &#42; "
             , second: "and prepares rain for the earth;"
               }
           , { first: "He makes grass to grow upon the mountains &#42; "
             , second: "and green plants to serve mankind."
               }
           , { first: "He provides food for flocks and herds &#42; "
             , second: "and for the young ravens when they cry."
               }
           , { first: "He is not impressed by the might of a horse; &#42; "
             , second: "he has no pleasure in the strength of a man;"
               }
           , { first: "But the Lord has pleasure in those who fear him, &#42; "
             , second: "in those who await his gracious favor."
               }
           , { first: "Worship the Lord, O Jerusalem; &#42; "
             , second: "praise your God, O Zion;"
               }
           , { first: "For he has strengthened the bars of your gates; &#42; "
             , second: "he has blessed your children within you."
               }
           , { first: "He has established peace on your borders; &#42; "
             , second: "he satisfies you with the finest wheat."
               }
           , { first: "He sends out his command to the earth, &#42; "
             , second: "and his word runs very swiftly."
               }
           , { first: "He gives snow like wool; &#42; "
             , second: "he scatters hoarfrost like ashes."
               }
           , { first: "He scatters his hail like bread crumbs; &#42; "
             , second: "who can stand against his cold?"
               }
           , { first: "He sends forth his word and melts them; &#42; "
             , second: "he blows with his wind, and the waters flow."
               }
           , { first: "He declares his word to Jacob, &#42; "
             , second: "his statutes and his judgments to Israel."
               }
           , { first: "He has not done so to any other nation; &#42; "
             , second: "to them he has not revealed his judgments. Hallelujah!"
               }
             ]
    }
  , 148:
    { name: "Psalm 148."
    , title: "Laudate Dominum"
    , vss: [ { first: "Hallelujah! Praise the Lord from the heavens; &#42; "
             , second: "praise him in the heights."
               }
           , { first: "Praise him, all you angels of his; &#42; "
             , second: "praise him, all his host."
               }
           , { first: "Praise him, sun and moon; &#42; "
             , second: "praise him, all you shining stars."
               }
           , { first: "Praise him, heaven of heavens, &#42; "
             , second: "and you waters above the heavens."
               }
           , { first: "Let them praise the Name of the Lord; &#42; "
             , second: "for he commanded, and they were created."
               }
           , { first: "He made them stand fast for ever and ever; &#42; "
             , second: "he gave them a law which shall not pass away."
               }
           , { first: "Praise the Lord from the earth, &#42; "
             , second: "you sea-monsters and all deeps;"
               }
           , { first: "Fire and hail, snow and fog, &#42; "
             , second: "tempestuous wind, doing his will;"
               }
           , { first: "Mountains and all hills, &#42; "
             , second: "fruit trees and all cedars;"
               }
           , { first: "Wild beasts and all cattle, &#42; "
             , second: "creeping things and wingèd birds;"
               }
           , { first: "Kings of the earth and all peoples, &#42; "
             , second: "princes and all rulers of the world;"
               }
           , { first: "Young men and maidens, &#42; "
             , second: "old and young together."
               }
           , { first: "Let them praise the Name of the Lord, &#42; "
             , second: "for his Name only is exalted, his splendor is over earth and heaven."
               }
           , { first: "He has raised up strength for his people and praise for all his loyal servants, &#42; "
             , second: "the children of Israel, a people who are near him. Hallelujah!"
               }
             ]
    }
  , 149:
    { name: "Psalm 149."
    , title: "Cantate Domino"
    , vss: [ { first: "Hallelujah! Sing to the Lord a new song; &#42; "
             , second: "sing his praise in the congregation of the faithful."
               }
           , { first: "Let Israel rejoice in his Maker; &#42; "
             , second: "let the children of Zion be joyful in their King."
               }
           , { first: "Let them praise his Name in the dance; &#42; "
             , second: "let them sing praise to him with timbrel and harp."
               }
           , { first: "For the Lord takes pleasure in his people &#42; "
             , second: "and adorns the poor with victory."
               }
           , { first: "Let the faithful rejoice in triumph; &#42; "
             , second: "let them be joyful on their beds."
               }
           , { first: "Let the praises of God be in their throat &#42; "
             , second: "and a two-edged sword in their hand;"
               }
           , { first: "To wreak vengeance on the nations &#42; "
             , second: "and punishment on the peoples;"
               }
           , { first: "To bind their kings in chains &#42; "
             , second: "and their nobles with links of iron;"
               }
           , { first: "To inflict on them the judgment decreed; &#42; "
             , second: "this is glory for all his faithful people. Hallelujah!"
               }
             ]
    }
  , 150:
    { name: "Psalm 150."
    , title: "Laudate Dominum"
    , vss: [ { first: "Hallelujah! Praise God in his holy temple; &#42; "
             , second: "praise him in the firmament of his power."
               }
           , { first: "Praise him for his mighty acts; &#42; "
             , second: "praise him for his excellent greatness."
               }
           , { first: "Praise him with the blast of the ram’s-horn; &#42; "
             , second: "praise him with lyre and harp."
               }
           , { first: "Praise him with timbrel and dance; &#42; "
             , second: "praise him with strings and pipe."
               }
           , { first: "Praise him with resounding cymbals; &#42; "
             , second: "praise him with loud-clanging cymbals."
               }
           , { first: "Let everything that has breath &#42; "
             , second: "praise the Lord. Hallelujah!"
               }
            ]
      }
  } // eo BCP

module.exports = {
    bcp: bcp
  , getPsalm: getPsalm
}