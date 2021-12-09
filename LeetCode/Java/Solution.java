import java.util.Arrays;
import java.util.Comparator;

class Item {
    int value, weight;

    Item(int x, int y) {
        this.value = x;
        this.weight = y;
    }
}

class Solution {
    double fractionalKnapsack(int W, Item arr[], int n) {
        Arrays.sort(arr, new Comparator<Item>() {
            @Override
            public int compare(Item i1, Item i2) {
                double i1Density = (i1.value / (i1.weight * 1.0));
                double i2Density = (i2.value / (i2.weight * 1.0));
                if (i1Density == i2Density) {
                    return 0;
                } else if (i1Density > i2Density) {
                    return -1;
                } else {
                    return 1;
                }
            }
        });
        double totalValue = 0;
        double totalWeight = 0;
        for (int i = 0; i < arr.length; i++) {
            if (totalWeight + arr[i].weight <= W) {
                totalWeight += arr[i].weight;
                totalValue += arr[i].value;
            } else {
                double fraction = (W - totalWeight) / (arr[i].weight * 1.0);
                totalValue += arr[i].value * fraction;
                break;
            }
        }
        return totalValue;
    }
}