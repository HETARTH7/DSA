import heapq


def job_sequencing(deadline, profit):
    jobs = [(deadline[i], profit[i]) for i in range(len(profit))]
    jobs.sort()
    picked = []
    for dead, prof in jobs:
        heapq.heappush(picked, prof)
        if dead <= (len(picked)-1):
            heapq.heappop(picked)
    ans = [0, 0]
    for prof in picked:
        ans[0] += 1
        ans[1] += prof
    return ans


deadline = [2, 1, 2, 1, 1]
profit = [100, 19, 27, 25, 15]
ans = job_sequencing(deadline, profit)
print(ans[0], ans[1])
