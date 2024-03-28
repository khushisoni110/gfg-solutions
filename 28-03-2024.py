from typing import List
import heapq
class Solution:
    def findCity(self, n: int, m: int, edges: List[List[int]], distanceThreshold: int) -> int:
        graph = {i: [] for i in range(n)}
        for u, v, w in edges:
            graph[u].append((v, w))
            graph[v].append((u, w))
        def dijkstra(source):
            distances = [float('inf')] * n
            distances[source] = 0
            pq = [(0, source)]  
            while pq:
                dist, node = heapq.heappop(pq)
                if dist > distances[node]:
                    continue
                for neighbor, weight in graph[node]:
                    new_dist = dist + weight
                    if new_dist < distances[neighbor]:
                        distances[neighbor] = new_dist
                        heapq.heappush(pq, (new_dist, neighbor))
            return distances
        min_neighbors = float('inf')
        city_with_min_neighbors = 0
        for i in range(n):
            distances = dijkstra(i)
            neighbors_within_threshold = sum(1 for d in distances if d <= distanceThreshold)
            if neighbors_within_threshold < min_neighbors or (neighbors_within_threshold == min_neighbors and i > city_with_min_neighbors):
                min_neighbors = neighbors_within_threshold
                city_with_min_neighbors = i
        return city_with_min_neighbors
sol = Solution()
