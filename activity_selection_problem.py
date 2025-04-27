def activity_selection(activities: list):
    activities.sort()
    prevFinish, res = -1, 0
    for j in range(len(activities)):
        if activities[j][1] > prevFinish:
            res += 1
            prevFinish = activities[j][0]
    return res


start = [1, 3, 0, 5, 8, 5]
finish = [2, 4, 6, 7, 9, 9]
activities = [(finish[i], start[i]) for i in range(len(start))]
print(activity_selection(activities))


# Time Complexity: O(nlogn) -> Sorting the arr O(nlogn) + O(n) for interating in it
# Space Complexity: O(1)
