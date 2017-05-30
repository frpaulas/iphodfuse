var pages = [
    { name: "Calendar"
    , page: "calendarPage"
    }
  , { name: "Morning Prayer"
    , page: "morningPrayerPage"
    }
  , { name: "Midday Prayer"
    , page: "middayPrayerPage"
    }
  , { name: "Evening Prayer"
    , page: "eveningPrayerPage"
    }
  , { name: "Compline"
    , page: "complinePage"
    }
  , { name: "Family Prayer"
    , page: "familyPrayerPage"
    }
  , { name: "Reconciliation"
    , page: "reconciliationPage"
    }
  , { name: "To The Sick"
    , page: "toTheSickPage"
    }
  , { name: "Communion to Sick"
    , page: "communionToSickPage"
    }
  , { name: "Time of Death"
    , page: "timeOfDeathPage"
    }
  , { name: "Stations of the Cross"
    , page: "stationsOfTheCrossPage"
    }
];

function getPages() {
  return new Promise(function(resolve, reject) {
    setTimeout(function() {resolve(pages);}, 0);
  });
}

module.exports = {
    getPages: getPages
}